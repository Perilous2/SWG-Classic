/*
 *	autogen/server/zone/objects/manufactureschematic/ManufactureSchematic.h generated by engine3 IDL compiler 0.70
 */

#ifndef MANUFACTURESCHEMATIC_H_
#define MANUFACTURESCHEMATIC_H_

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematic;

class DraftSchematicPOD;

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

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
namespace tangible {

class TangibleObject;

class TangibleObjectPOD;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryObject;

class FactoryObjectPOD;

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/manufactureschematic/ingredientslots/IngredientSlot.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/manufactureschematic/factoryblueprint/FactoryBlueprint.h"

#include "server/zone/objects/manufactureschematic/factoryblueprint/BlueprintEntry.h"

#include "server/zone/objects/scene/variables/ContainerPermissions.h"

#include "server/zone/objects/manufactureschematic/variables/StringIdDeltaVector.h"

#include "server/zone/objects/manufactureschematic/variables/Uint64VectorDeltaVector.h"

#include "server/zone/objects/manufactureschematic/variables/IntVectorDeltaVector.h"

#include "system/lang/ref/Reference.h"

#include "system/util/Vector.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic : public IntangibleObject {
public:
	ManufactureSchematic();

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Sends the necessary messages to player in order to create this object
	 * @pre { this object is locked }
	 * @post { this object is locked, player received this object }
	 * @param player SceneObject that will receive the messages
	 * @param doClose if true a SceneObjectCloseMessage is sent to finish the object
	 */
	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer = true);

	/**
	 * Sends the baseline messages of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the baselines
	 */
	void sendBaselinesTo(SceneObject* player);

	/**
	 * Calls the appropriate UI Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	void synchronizedUIListen(CreatureObject* player, int value);

	/**
	 * Calls the appropriate UI Stop Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	void synchronizedUIStopListen(CreatureObject* player, int value);

	bool isManufactureSchematic();

	void setDraftSchematic(DraftSchematic* schematic);

	int addIngredientToSlot(CreatureObject* player, SceneObject* satchel, TangibleObject* tano, int slot);

	int removeIngredientFromSlot(CreatureObject* player, TangibleObject* tano, int slot);

	void cleanupIngredientSlots(CreatureObject* player);

	DraftSchematic* getDraftSchematic();

	void increaseComplexity();

	void decreaseComplexity();

	float getComplexity();

	bool isReadyForAssembly();

	void setAssembled();

	bool isAssembled() const;

	void setCompleted();

	bool isCompleted() const;

	int getSlotCount() const;

	IngredientSlot* getSlot(int i);

	void setCrafter(CreatureObject* player);

	ManagedWeakReference<CreatureObject* > getCrafter() const;

	CraftingValues* getCraftingValues();

	void setExperimentingCounter(int value);

	int getExperimentingCounter() const;

	int getExperimentingCounterPrevious() const;

	int getIngredientCounter() const;

	void setManufactureLimit(int limit);

	int getManufactureLimit() const;

	void setPrototype(TangibleObject* tano);

	TangibleObject* getPrototype();

	void canManufactureItem(String& type, String& displayedName);

	void manufactureItem(FactoryObject* factory);

	void createFactoryBlueprint();

	int getBlueprintSize();

	BlueprintEntry* getBlueprintEntry(int i);

	int getFactoryCrateSize();

	bool allowFactoryRun();

	int getLabratory();

	String getFactoryCrateType();

	float getDataSize() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ManufactureSchematic(DummyConstructorParameter* param);

	virtual ~ManufactureSchematic();

	friend class ManufactureSchematicHelper;
};

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematicImplementation : public IntangibleObjectImplementation {
protected:
	ManagedReference<DraftSchematic* > draftSchematic;

	ManagedReference<TangibleObject* > prototype;

	float dataSize;

	int manufactureLimit;

	float complexity;

	ManagedWeakReference<CreatureObject* > crafter;

	FactoryBlueprint factoryBlueprint;

	Vector<Reference<IngredientSlot*> > ingredientSlots;

	StringIdDeltaVector ingredientNames;

	DeltaVector<int> ingredientTypes;

	Uint64VectorDeltaVector slotOIDs;

	IntVectorDeltaVector slotQuantities;

	DeltaVector<float> slotQualities;

	DeltaVector<int> slotClean;

	DeltaVector<int> slotIndexes;

	bool assembled;

	bool completed;

	bool initialized;

	int ingredientCounter;

	int experimentingCounter;

	int experimentingCounterPrevious;

	bool possibleSyncIssue;

	Reference<CraftingValues* > craftingValues;

	Vector<byte> customizationOptions;

	Vector<byte> customizationDefaultValues;

public:
	ManufactureSchematicImplementation();

	ManufactureSchematicImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	virtual void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Sends the necessary messages to player in order to create this object
	 * @pre { this object is locked }
	 * @post { this object is locked, player received this object }
	 * @param player SceneObject that will receive the messages
	 * @param doClose if true a SceneObjectCloseMessage is sent to finish the object
	 */
	virtual void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer = true);

	/**
	 * Sends the baseline messages of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the baselines
	 */
	void sendBaselinesTo(SceneObject* player);

private:
	/**
	 * Sends the baseline7 message of this object to the specified player
	 * @pre { this object is locked }
	 * @post { this object is locked, player received the baseline messages }
	 * @param player SceneObject that will receive the baselines
	 */
	void sendMsco7(CreatureObject* player);

public:
	/**
	 * Calls the appropriate UI Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	virtual void synchronizedUIListen(CreatureObject* player, int value);

	/**
	 * Calls the appropriate UI Stop Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	virtual void synchronizedUIStopListen(CreatureObject* player, int value);

	bool isManufactureSchematic();

	void setDraftSchematic(DraftSchematic* schematic);

private:
	void initializeIngredientSlots();

public:
	int addIngredientToSlot(CreatureObject* player, SceneObject* satchel, TangibleObject* tano, int slot);

	int removeIngredientFromSlot(CreatureObject* player, TangibleObject* tano, int slot);

private:
	void sendDelta7(IngredientSlot* ingredientSlot, int slot, CreatureObject* player);

public:
	void cleanupIngredientSlots(CreatureObject* player);

	DraftSchematic* getDraftSchematic();

	void increaseComplexity();

	void decreaseComplexity();

	float getComplexity();

	bool isReadyForAssembly();

	void setAssembled();

	bool isAssembled() const;

	void setCompleted();

	bool isCompleted() const;

	int getSlotCount() const;

	IngredientSlot* getSlot(int i);

	void setCrafter(CreatureObject* player);

	ManagedWeakReference<CreatureObject* > getCrafter() const;

	CraftingValues* getCraftingValues();

	void setExperimentingCounter(int value);

	int getExperimentingCounter() const;

	int getExperimentingCounterPrevious() const;

private:
	void updateIngredientCounter();

public:
	int getIngredientCounter() const;

	void setManufactureLimit(int limit);

	int getManufactureLimit() const;

	void setPrototype(TangibleObject* tano);

	TangibleObject* getPrototype();

	void canManufactureItem(String& type, String& displayedName);

	void manufactureItem(FactoryObject* factory);

	void createFactoryBlueprint();

	int getBlueprintSize();

	BlueprintEntry* getBlueprintEntry(int i);

	int getFactoryCrateSize();

	bool allowFactoryRun();

	int getLabratory();

	String getFactoryCrateType();

	float getDataSize() const;

	WeakReference<ManufactureSchematic*> _this;

	operator const ManufactureSchematic*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~ManufactureSchematicImplementation();

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

	friend class ManufactureSchematic;
};

class ManufactureSchematicAdapter : public IntangibleObjectAdapter {
public:
	ManufactureSchematicAdapter(ManufactureSchematic* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer);

	void sendBaselinesTo(SceneObject* player);

	void synchronizedUIListen(CreatureObject* player, int value);

	void synchronizedUIStopListen(CreatureObject* player, int value);

	bool isManufactureSchematic();

	void setDraftSchematic(DraftSchematic* schematic);

	int addIngredientToSlot(CreatureObject* player, SceneObject* satchel, TangibleObject* tano, int slot);

	int removeIngredientFromSlot(CreatureObject* player, TangibleObject* tano, int slot);

	void cleanupIngredientSlots(CreatureObject* player);

	DraftSchematic* getDraftSchematic();

	void increaseComplexity();

	void decreaseComplexity();

	float getComplexity();

	bool isReadyForAssembly();

	void setAssembled();

	bool isAssembled() const;

	void setCompleted();

	bool isCompleted() const;

	int getSlotCount() const;

	void setCrafter(CreatureObject* player);

	ManagedWeakReference<CreatureObject* > getCrafter() const;

	void setExperimentingCounter(int value);

	int getExperimentingCounter() const;

	int getExperimentingCounterPrevious() const;

	int getIngredientCounter() const;

	void setManufactureLimit(int limit);

	int getManufactureLimit() const;

	void setPrototype(TangibleObject* tano);

	TangibleObject* getPrototype();

	void canManufactureItem(String& type, String& displayedName);

	void manufactureItem(FactoryObject* factory);

	void createFactoryBlueprint();

	int getBlueprintSize();

	int getFactoryCrateSize();

	bool allowFactoryRun();

	int getLabratory();

	String getFactoryCrateType();

	float getDataSize() const;

};

class ManufactureSchematicHelper : public DistributedObjectClassHelper, public Singleton<ManufactureSchematicHelper> {
	static ManufactureSchematicHelper* staticInitializer;

public:
	ManufactureSchematicHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ManufactureSchematicHelper>;
};

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematicPOD : public IntangibleObjectPOD {
public:
	Optional<ManagedReference<DraftSchematicPOD* >> draftSchematic;

	Optional<ManagedReference<TangibleObjectPOD* >> prototype;

	Optional<float> dataSize;

	Optional<int> manufactureLimit;

	Optional<float> complexity;

	Optional<ManagedWeakReference<CreatureObjectPOD* >> crafter;

	Optional<FactoryBlueprint> factoryBlueprint;

	Optional<Vector<byte>> customizationOptions;

	Optional<Vector<byte>> customizationDefaultValues;

	String _className;
	ManufactureSchematicPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ManufactureSchematicPOD();

};

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#endif /*MANUFACTURESCHEMATICPOD_H_*/