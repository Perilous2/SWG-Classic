/*
 *	autogen/server/zone/objects/building/BuildingObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "system/util/Optional.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
#include "engine/util/json_utils.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

class SceneObjectPOD;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

class CreatureObjectPOD;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace sign {

class SignObject;

class SignObjectPOD;

} // namespace sign
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::sign;

namespace server {
namespace zone {

class Zone;

class ZonePOD;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/QuadTreeEntry.h"

#include "templates/SharedObjectTemplate.h"

#include "templates/building/SignTemplate.h"

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/CloseObjectsVector.h"

#include "templates/appearance/MeshData.h"

#include "templates/collision/BaseBoundingVolume.h"

#include "system/lang/ref/Reference.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/creature/variables/CooldownTimerMap.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "system/util/SortedVector.h"

#include "system/util/SynchronizedSortedVector.h"

#include "system/util/Vector.h"

#include "engine/util/u3d/Vector3.h"

#include "system/lang/StackTrace.h"

#include "system/thread/Mutex.h"

#include "engine/util/u3d/Matrix4.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject : public StructureObject {
public:
	static const int MAXPLAYERITEMS = 400;

	BuildingObject();

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void createContainerComponent();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void updateSignName(bool notifyClient);

	/**
	 * Sends the contained non slotted objects to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the container objects }
	 * @param player SceneObject that will receive the objects
	 */
	void sendContainerObjectsTo(SceneObject* player, bool forceLoad);

	/**
	 * Updates the cell permissions to the player based on the players permission in the StructurePermissionList.
	 * @param creature The player to update cell permissions to.
	 */
	void updateCellPermissionsTo(CreatureObject* creature);

	/**
	 * Updates the cell permissions to the players in the area.
	 * @pre Zone unlocked
	 * @post Zone unlocked
	 */
	void broadcastCellPermissions();

	/**
	 * Updates a specific cell's permissions to the players in the area
	 */
	void broadcastCellPermissions(unsigned long long objectid);

	/**
	 * Checks to see if the player with the name is allowed entry.
	 * @param firstName The name of the player.
	 * @return Returns true if allowed to enter.
	 */
	bool isAllowedEntry(CreatureObject* player);

	/**
	 * Checks to see if the player is CityBanned from the city
	 * that the building is in
	 * returns true if the player is cityBanned
	 * returns false if the player is not CityBanned
	 */
	bool isCityBanned(CreatureObject* player);

	/**
	 * Gets called when the structure has been created;
	 */
	int notifyStructurePlaced(CreatureObject* player);

	/**
	* Checks if the template has an ejection point
	*/
	bool hasTemplateEjectionPoint();

	/**
	* Returns the template ejection point
	*/
	Vector3 getTemplateEjectionPoint() const;

	Vector3 getEjectionPoint();

	/**
	 * Ejects an object to this building's ejection point.
	 * @param creature The creature to eject.
	 */
	void ejectObject(CreatureObject* creature);

	void notifyRemoveFromZone();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyInsertToZone(Zone* zone);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyPositionUpdate(QuadTreeEntry* entry);

	void notifyObjectInsertedToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer = true);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell, unsigned int cellNumber);

	bool isStaticBuilding() const;

	/**
	 * Returns cell based on the index.
	 * Cells start index 1
	 */
	CellObject* getCell(unsigned int idx);

	CellObject* getCell(const String& cellName);

	int getTotalCellNumber() const;

	int notifyObjectInsertedToChild(SceneObject* object, SceneObject* child, SceneObject* oldParent);

	int notifyObjectRemovedFromChild(SceneObject* object, SceneObject* child);

	int getCurrentNumberOfPlayerItems();

	/**
	 * Loops through all the cells, destroying items from the database that aren't contained in the child objects vector.
	 */
	void destroyAllPlayerItems();

	/**
	 * Abstract function that is triggered when a player enters a building.
	 * This function should only be called from CreatureObject::insertToBuilding.
	 * Overloaded functions must meet the post conditions for this function.
	 * @pre { player is locked, zone is locked }
	 * @post { player is locked, zone is locked }
	 * @param player CreatureObject that entered the building
	 */
	void onEnter(CreatureObject* player);

	/**
	 * Abstract function that is triggered when a player exits a building.
	 * This function should only be called from CreatureObject::removeFromBuilding.
	 * Overloaded functions must meet the post conditions for this function.
	 * @pre { player is locked, zone is locked }
	 * @post { player is locked, zone is locked }
	 * @param player CreatureObject that exited the building
	 */
	void onExit(CreatureObject* player, unsigned long long parentid);

	bool isBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject() const;

	bool isPublicStructure() const;

	bool isPrivateStructure() const;

	void setPublicStructure(bool privacy);

	bool isCondemned();

	int getMapCellSize() const;

	/**
	 * Switches the state of this building's privacy. If it is public, it becomes private, and vice-versa.
	 * @return Returns true if the structure is now public, or false if it is now private.
	 */
	bool togglePrivacy();

	/**
	 * Calculates the maximum number of items that can be stored by a player in this building.
	 * @return Returns a uint32 number representing the max items that can be stored in this building.
	 */
	unsigned int getMaximumNumberOfPlayerItems();

	String getRedeedMessage();

	bool hasAccessFee() const;

	int getAccessFee() const;

	bool canChangeAccessFee();

	void setAccessFee(int fee, int duration);

	void removeAccessFee();

	BuildingObject* asBuildingObject();

	int getAccessFeeDelay();

	void payAccessFee(CreatureObject* player);

	void updatePaidAccessList();

	void registerProfessional(CreatureObject* player);

	void unregisterProfessional(CreatureObject* player);

	bool isInPlayerCity();

	bool canPlayerRegisterWithin();

	bool isPlayerRegisteredWithin(unsigned long long id) const;

	void createChildObjects();

	void spawnChildSceneObject(String& templatePath, float x, float z, float y, unsigned long long cellID, float dw, float dx, float dy, float dz);

	void spawnChildCreaturesFromTemplate();

	void spawnChildCreature(String& mobile, int respawnTimer, float x, float z, float y, float heading, unsigned long long cellID);

	bool hasTemplateChildCreatures() const;

	void destroyChildObjects();

	bool isResidence() const;

	void setResidence(bool isResidence);

	int getFactionBaseType() const;

	/**
	 * Adds the desired sign as a child object, removing any current sign
	 * @param SignTemplate sign config from structure lua
	 * @pre structure object is locked
	 * @post structure object is locked
	 */
	void changeSign(const SignTemplate* signConfig);

	Vector<Reference<MeshData*> > getTransformedMeshData(const Matrix4* parentTransform) const;

	const BaseBoundingVolume* getBoundingVolume();

	float getOutOfRangeDistance() const;

	String getCellName(unsigned long long cellID) const;

	void addChildCreatureObject(CreatureObject* creature);

	bool checkCooldownRecovery(const String& cooldown) const;

	const Time* getCooldownTime(const String& cooldown) const;

	void addCooldown(const String& name, unsigned long long miliseconds);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BuildingObject(DummyConstructorParameter* param);

	virtual ~BuildingObject();

	bool __isBuildingObject();

	BuildingObject* __asBuildingObject();

	friend class BuildingObjectHelper;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObjectImplementation : public StructureObjectImplementation {
protected:
	VectorMap<unsigned int, ManagedReference<CellObject* > > cells;

	int totalCellNumber;

	ManagedReference<SignObject* > signObject;

	unsigned long long deedObjectID;

	int accessFee;

	int accessDuration;

	unsigned int lastAccessFeeChange;

	Mutex paidAccessListMutex;

	VectorMap<unsigned long long, unsigned int> paidAccessList;

	SortedVector<ManagedReference<CreatureObject* > > childCreatureObjects;

	SynchronizedSortedVector<unsigned long long> registeredPlayerIdList;

	Reference<CooldownTimerMap* > cooldownTimerMap;

public:
	bool publicStructure;

	static const int MAXPLAYERITEMS = 400;

protected:
	UnicodeString signName;

	bool isOwnerResidence;

	int factionBaseType;

public:
	BuildingObjectImplementation();

	BuildingObjectImplementation(DummyConstructorParameter* param);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void createContainerComponent();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void updateSignName(bool notifyClient);

	/**
	 * Sends the contained non slotted objects to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the container objects }
	 * @param player SceneObject that will receive the objects
	 */
	void sendContainerObjectsTo(SceneObject* player, bool forceLoad);

	/**
	 * Updates the cell permissions to the player based on the players permission in the StructurePermissionList.
	 * @param creature The player to update cell permissions to.
	 */
	void updateCellPermissionsTo(CreatureObject* creature);

	/**
	 * Updates the cell permissions to the players in the area.
	 * @pre Zone unlocked
	 * @post Zone unlocked
	 */
	void broadcastCellPermissions();

	/**
	 * Updates a specific cell's permissions to the players in the area
	 */
	void broadcastCellPermissions(unsigned long long objectid);

	/**
	 * Checks to see if the player with the name is allowed entry.
	 * @param firstName The name of the player.
	 * @return Returns true if allowed to enter.
	 */
	bool isAllowedEntry(CreatureObject* player);

	/**
	 * Checks to see if the player is CityBanned from the city
	 * that the building is in
	 * returns true if the player is cityBanned
	 * returns false if the player is not CityBanned
	 */
	bool isCityBanned(CreatureObject* player);

	/**
	 * Gets called when the structure has been created;
	 */
	virtual int notifyStructurePlaced(CreatureObject* player);

	/**
	* Checks if the template has an ejection point
	*/
	bool hasTemplateEjectionPoint();

	/**
	* Returns the template ejection point
	*/
	Vector3 getTemplateEjectionPoint() const;

	Vector3 getEjectionPoint();

	/**
	 * Ejects an object to this building's ejection point.
	 * @param creature The creature to eject.
	 */
	void ejectObject(CreatureObject* creature);

	void notifyRemoveFromZone();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyInsertToZone(Zone* zone);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyPositionUpdate(QuadTreeEntry* entry);

	void notifyObjectInsertedToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer = true);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell, unsigned int cellNumber);

	bool isStaticBuilding() const;

	/**
	 * Returns cell based on the index.
	 * Cells start index 1
	 */
	CellObject* getCell(unsigned int idx);

	CellObject* getCell(const String& cellName);

	int getTotalCellNumber() const;

	int notifyObjectInsertedToChild(SceneObject* object, SceneObject* child, SceneObject* oldParent);

	int notifyObjectRemovedFromChild(SceneObject* object, SceneObject* child);

	int getCurrentNumberOfPlayerItems();

	/**
	 * Loops through all the cells, destroying items from the database that aren't contained in the child objects vector.
	 */
	void destroyAllPlayerItems();

	/**
	 * Abstract function that is triggered when a player enters a building.
	 * This function should only be called from CreatureObject::insertToBuilding.
	 * Overloaded functions must meet the post conditions for this function.
	 * @pre { player is locked, zone is locked }
	 * @post { player is locked, zone is locked }
	 * @param player CreatureObject that entered the building
	 */
	virtual void onEnter(CreatureObject* player);

	/**
	 * Abstract function that is triggered when a player exits a building.
	 * This function should only be called from CreatureObject::removeFromBuilding.
	 * Overloaded functions must meet the post conditions for this function.
	 * @pre { player is locked, zone is locked }
	 * @post { player is locked, zone is locked }
	 * @param player CreatureObject that exited the building
	 */
	virtual void onExit(CreatureObject* player, unsigned long long parentid);

	bool isBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject() const;

	bool isPublicStructure() const;

	bool isPrivateStructure() const;

	void setPublicStructure(bool privacy);

	bool isCondemned();

	int getMapCellSize() const;

	/**
	 * Switches the state of this building's privacy. If it is public, it becomes private, and vice-versa.
	 * @return Returns true if the structure is now public, or false if it is now private.
	 */
	bool togglePrivacy();

	/**
	 * Calculates the maximum number of items that can be stored by a player in this building.
	 * @return Returns a uint32 number representing the max items that can be stored in this building.
	 */
	virtual unsigned int getMaximumNumberOfPlayerItems();

	String getRedeedMessage();

	bool hasAccessFee() const;

	int getAccessFee() const;

	bool canChangeAccessFee();

	void setAccessFee(int fee, int duration);

	void removeAccessFee();

	BuildingObject* asBuildingObject();

	int getAccessFeeDelay();

private:
	void promptPayAccessFee(CreatureObject* player);

public:
	void payAccessFee(CreatureObject* player);

	void updatePaidAccessList();

	void registerProfessional(CreatureObject* player);

	void unregisterProfessional(CreatureObject* player);

	bool isInPlayerCity();

	bool canPlayerRegisterWithin();

	bool isPlayerRegisteredWithin(unsigned long long id) const;

	void createChildObjects();

	void spawnChildSceneObject(String& templatePath, float x, float z, float y, unsigned long long cellID, float dw, float dx, float dy, float dz);

	void spawnChildCreaturesFromTemplate();

	void spawnChildCreature(String& mobile, int respawnTimer, float x, float z, float y, float heading, unsigned long long cellID);

	bool hasTemplateChildCreatures() const;

	void destroyChildObjects();

	bool isResidence() const;

	void setResidence(bool isResidence);

	int getFactionBaseType() const;

	/**
	 * Adds the desired sign as a child object, removing any current sign
	 * @param SignTemplate sign config from structure lua
	 * @pre structure object is locked
	 * @post structure object is locked
	 */
	void changeSign(const SignTemplate* signConfig);

	virtual Vector<Reference<MeshData*> > getTransformedMeshData(const Matrix4* parentTransform) const;

	virtual const BaseBoundingVolume* getBoundingVolume();

	virtual float getOutOfRangeDistance() const;

	String getCellName(unsigned long long cellID) const;

	void addChildCreatureObject(CreatureObject* creature);

	bool checkCooldownRecovery(const String& cooldown) const;

	const Time* getCooldownTime(const String& cooldown) const;

	void addCooldown(const String& name, unsigned long long miliseconds);

	WeakReference<BuildingObject*> _this;

	operator const BuildingObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~BuildingObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class BuildingObject;
};

class BuildingObjectAdapter : public StructureObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void initializeTransientMembers();

	void createContainerComponent();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void updateSignName(bool notifyClient);

	void sendContainerObjectsTo(SceneObject* player, bool forceLoad);

	void updateCellPermissionsTo(CreatureObject* creature);

	void broadcastCellPermissions();

	void broadcastCellPermissions(unsigned long long objectid);

	bool isAllowedEntry(CreatureObject* player);

	bool isCityBanned(CreatureObject* player);

	int notifyStructurePlaced(CreatureObject* player);

	bool hasTemplateEjectionPoint();

	void ejectObject(CreatureObject* creature);

	void notifyRemoveFromZone();

	void notifyInsertToZone(Zone* zone);

	void notifyObjectInsertedToZone(SceneObject* object);

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell, unsigned int cellNumber);

	bool isStaticBuilding() const;

	CellObject* getCell(unsigned int idx);

	CellObject* getCell(const String& cellName);

	int getTotalCellNumber() const;

	int notifyObjectInsertedToChild(SceneObject* object, SceneObject* child, SceneObject* oldParent);

	int notifyObjectRemovedFromChild(SceneObject* object, SceneObject* child);

	int getCurrentNumberOfPlayerItems();

	void destroyAllPlayerItems();

	void onEnter(CreatureObject* player);

	void onExit(CreatureObject* player, unsigned long long parentid);

	void setSignObject(SignObject* sign);

	SignObject* getSignObject() const;

	bool isPublicStructure() const;

	bool isPrivateStructure() const;

	void setPublicStructure(bool privacy);

	bool isCondemned();

	int getMapCellSize() const;

	bool togglePrivacy();

	unsigned int getMaximumNumberOfPlayerItems();

	String getRedeedMessage();

	bool hasAccessFee() const;

	int getAccessFee() const;

	bool canChangeAccessFee();

	void setAccessFee(int fee, int duration);

	void removeAccessFee();

	int getAccessFeeDelay();

	void payAccessFee(CreatureObject* player);

	void updatePaidAccessList();

	void registerProfessional(CreatureObject* player);

	void unregisterProfessional(CreatureObject* player);

	bool isInPlayerCity();

	bool canPlayerRegisterWithin();

	bool isPlayerRegisteredWithin(unsigned long long id) const;

	void createChildObjects();

	void spawnChildCreaturesFromTemplate();

	bool hasTemplateChildCreatures() const;

	void destroyChildObjects();

	bool isResidence() const;

	void setResidence(bool isResidence);

	int getFactionBaseType() const;

	float getOutOfRangeDistance() const;

	String getCellName(unsigned long long cellID) const;

	void addChildCreatureObject(CreatureObject* creature);

	bool checkCooldownRecovery(const String& cooldown) const;

	void addCooldown(const String& name, unsigned long long miliseconds);

};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuildingObjectHelper>;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObjectPOD : public StructureObjectPOD {
public:
	Optional<VectorMap<unsigned int, ManagedReference<CellObjectPOD* > >> cells;

	Optional<int> totalCellNumber;

	Optional<ManagedReference<SignObjectPOD* >> signObject;

	Optional<unsigned long long> deedObjectID;

	Optional<int> accessFee;

	Optional<int> accessDuration;

	Optional<VectorMap<unsigned long long, unsigned int>> paidAccessList;

	Optional<SortedVector<ManagedReference<CreatureObjectPOD* > >> childCreatureObjects;

	Optional<bool> publicStructure;

	Optional<UnicodeString> signName;

	Optional<bool> isOwnerResidence;

	Optional<int> factionBaseType;

	String _className;
	BuildingObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~BuildingObjectPOD();

};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

#endif /*BUILDINGOBJECTPOD_H_*/
