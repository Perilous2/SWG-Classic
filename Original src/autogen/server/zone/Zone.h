/*
 *	autogen/server/zone/Zone.h generated by engine3 IDL compiler 0.70
 */

#ifndef ZONE_H_
#define ZONE_H_

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

class QuadTree;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class QuadTreeEntry;

class QuadTreeEntryPOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServer;

class ZoneProcessServerPOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

class ActiveAreaPOD;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

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
namespace managers {
namespace planet {

class PlanetManager;

class PlanetManagerPOD;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class CreatureManager;

class CreatureManagerPOD;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace managers {
namespace gcw {

class GCWManager;

class GCWManagerPOD;

} // namespace gcw
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::gcw;

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
namespace pathfinding {

class NavArea;

class NavAreaPOD;

} // namespace pathfinding
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::pathfinding;

namespace server {
namespace zone {

class ActiveAreaQuadTree;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "gmock/gmock.h"

#include "server/chat/room/ChatRoom.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/InRangeObjectsVector.h"

#include "server/zone/ActiveAreasVector.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "engine/util/u3d/Vector3.h"

#include "server/zone/QuadTreeReference.h"

#include "system/thread/atomic/AtomicBoolean.h"

#include "server/zone/objects/region/CityRegion.h"

#include "system/lang/Time.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/SortedVector.h"

#include "system/util/SynchronizedSortedVector.h"

#include "system/thread/atomic/AtomicInteger.h"

namespace server {
namespace zone {

class Zone : public SceneObject {
public:
	Zone(ZoneProcessServer* processor, const String& zoneName);

protected:
	Zone() { }
public:
	void initializeTransientMembers();

	Reference<SceneObject* > getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	ActiveAreaQuadTree* getActiveAreaTree();

	int getInRangeSolidObjects(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects, bool readLockZone);

	int getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects, bool readLockZone, bool includeBuildingObjects = true);

	int getInRangeObjects(float x, float y, float range, InRangeObjectsVector* objects, bool readLockZone, bool includeBuildingObjects = true);

	int getInRangePlayers(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects);

	void createContainerComponent();

	int getInRangeActiveAreas(float x, float y, SortedVector<ManagedReference<ActiveArea* > >* objects, bool readLockZone);

	int getInRangeActiveAreas(float x, float y, ActiveAreasVector* objects, bool readLockZone);

	int getInRangeNavMeshes(float x, float y, SortedVector<ManagedReference<NavArea* > >* objects, bool readLockZone);

	SortedVector<ManagedReference<SceneObject* > > getPlanetaryObjectList(const String& mapObjectLocationType);

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void updateActiveAreas(TangibleObject* tano);

	void startManagers();

	void stopManagers();

	void clearZone();

	virtual float getHeight(float x, float y);

	virtual float getHeightNoCache(float x, float y);

	void addSceneObject(SceneObject* object);

	void addCityRegionToUpdate(CityRegion* city);

	void updateCityRegions();

	void sendMapLocationsTo(CreatureObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	GCWManager* getGCWManager();

	unsigned long long getGalacticTime() const;

	bool hasManagersStarted();

	bool isZoneCleared() const;

	int getSpawnedAiAgents() const;

	/**
	 * These functions return the size of the terrain file for this zone.
	 */
	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	bool isWithinBoundaries(const Vector3& position);

	float getBoundingRadius();

	/**
	 * Registers the object to the planetary map. This also makes the object visible to the find command.
	 * @param object The object to register to the planetary map.
	 */
	void registerObjectWithPlanetaryMap(SceneObject* object);

	/**
	 * Unregisters the object from the planetary map.
	 * @param object The object to unregister from the planetary map.
	 */
	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	bool objectIsValidPlanetaryMapPerformanceLocation(SceneObject* object);

	bool isObjectRegisteredWithPlanetaryMap(SceneObject* object);

	void updatePlanetaryMapIcon(SceneObject* object, byte icon);

	String getZoneName();

	unsigned int getZoneCRC();

	void setPlanetChatRoom(ChatRoom* room);

	ChatRoom* getPlanetChatRoom();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Zone(DummyConstructorParameter* param);

	virtual ~Zone();

	friend class ZoneHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneImplementation : public SceneObjectImplementation {
	String zoneName;

	unsigned int zoneCRC;

	ManagedReference<ZoneProcessServer* > processor;

	Reference<ObjectMap* > objectMap;

	ManagedReference<PlanetManager* > planetManager;

	ManagedReference<CreatureManager* > creatureManager;

	ManagedReference<ChatRoom* > planetChatRoom;

	SynchronizedSortedVector<ManagedReference<CityRegion* > > cityRegionUpdateVector;

	ManagedReference<ZoneServer* > server;

	Reference<ActiveAreaQuadTree* > areaTree;

	QuadTreeReference quadTree;

	Time galacticTime;

	Reference<MapLocationTable* > mapLocations;

protected:
	AtomicInteger spawnedAiAgents;

private:
	AtomicBoolean managersStarted;

	bool zoneCleared;

public:
	ZoneImplementation(ZoneProcessServer* processor, const String& zoneName);

	ZoneImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void finalize();

	Reference<SceneObject* > getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	ActiveAreaQuadTree* getActiveAreaTree();

	int getInRangeSolidObjects(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects, bool readLockZone);

	int getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects, bool readLockZone, bool includeBuildingObjects = true);

	int getInRangeObjects(float x, float y, float range, InRangeObjectsVector* objects, bool readLockZone, bool includeBuildingObjects = true);

	int getInRangePlayers(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects);

	void createContainerComponent();

	int getInRangeActiveAreas(float x, float y, SortedVector<ManagedReference<ActiveArea* > >* objects, bool readLockZone);

	int getInRangeActiveAreas(float x, float y, ActiveAreasVector* objects, bool readLockZone);

	int getInRangeNavMeshes(float x, float y, SortedVector<ManagedReference<NavArea* > >* objects, bool readLockZone);

	SortedVector<ManagedReference<SceneObject* > > getPlanetaryObjectList(const String& mapObjectLocationType);

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void updateActiveAreas(TangibleObject* tano);

	void startManagers();

	void stopManagers();

	void clearZone();

	virtual float getHeight(float x, float y);

	virtual float getHeightNoCache(float x, float y);

	void addSceneObject(SceneObject* object);

	void addCityRegionToUpdate(CityRegion* city);

	void updateCityRegions();

	void sendMapLocationsTo(CreatureObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	GCWManager* getGCWManager();

	unsigned long long getGalacticTime() const;

	bool hasManagersStarted();

	bool isZoneCleared() const;

	int getSpawnedAiAgents() const;

	/**
	 * These functions return the size of the terrain file for this zone.
	 */
	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	bool isWithinBoundaries(const Vector3& position);

	float getBoundingRadius();

	/**
	 * Registers the object to the planetary map. This also makes the object visible to the find command.
	 * @param object The object to register to the planetary map.
	 */
	void registerObjectWithPlanetaryMap(SceneObject* object);

	/**
	 * Unregisters the object from the planetary map.
	 * @param object The object to unregister from the planetary map.
	 */
	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	bool objectIsValidPlanetaryMapPerformanceLocation(SceneObject* object);

	bool isObjectRegisteredWithPlanetaryMap(SceneObject* object);

	void updatePlanetaryMapIcon(SceneObject* object, byte icon);

	String getZoneName();

	unsigned int getZoneCRC();

	void setPlanetChatRoom(ChatRoom* room);

	ChatRoom* getPlanetChatRoom();

	WeakReference<Zone*> _this;

	operator const Zone*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneImplementation();

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

	friend class Zone;
};

class ZoneAdapter : public SceneObjectAdapter {
public:
	ZoneAdapter(Zone* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	Reference<SceneObject* > getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	void createContainerComponent();

	void updateActiveAreas(TangibleObject* tano);

	void startManagers();

	void stopManagers();

	void clearZone();

	float getHeight(float x, float y);

	float getHeightNoCache(float x, float y);

	void addSceneObject(SceneObject* object);

	void addCityRegionToUpdate(CityRegion* city);

	void updateCityRegions();

	void sendMapLocationsTo(CreatureObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	GCWManager* getGCWManager();

	unsigned long long getGalacticTime() const;

	bool hasManagersStarted();

	bool isZoneCleared() const;

	int getSpawnedAiAgents() const;

	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	float getBoundingRadius();

	void registerObjectWithPlanetaryMap(SceneObject* object);

	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	bool objectIsValidPlanetaryMapPerformanceLocation(SceneObject* object);

	bool isObjectRegisteredWithPlanetaryMap(SceneObject* object);

	void updatePlanetaryMapIcon(SceneObject* object, byte icon);

	String getZoneName();

	unsigned int getZoneCRC();

	void setPlanetChatRoom(ChatRoom* room);

	ChatRoom* getPlanetChatRoom();

};

class ZoneHelper : public DistributedObjectClassHelper, public Singleton<ZoneHelper> {
	static ZoneHelper* staticInitializer;

public:
	ZoneHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneHelper>;
};

class MockZone : public Zone {
public:

	MOCK_METHOD2(getHeight,float(float x, float y));
	MOCK_METHOD2(getHeightNoCache,float(float x, float y));
	MOCK_METHOD2(isInRange,bool(SceneObject* obj, float range));
	MOCK_METHOD1(getSlottedObjects,void(VectorMap<String, ManagedReference<SceneObject* > >& objects));
	MOCK_METHOD1(getDistanceTo,float(SceneObject* object));
	MOCK_METHOD1(getDistanceTo,float(Coordinate* coordinate));
	MOCK_METHOD0(getZone,Zone*());
	MOCK_METHOD0(getZoneUnsafe,Zone*());
	MOCK_METHOD0(getWorldPositionX,float());
	MOCK_METHOD0(getWorldPositionY,float());
	MOCK_METHOD0(getWorldPositionZ,float());
	MOCK_METHOD0(getWorldPosition,Vector3());
	MOCK_METHOD1(getSlottedObject,Reference<SceneObject* >(const String& slot));
	MOCK_METHOD1(isFacingObject,bool(SceneObject* obj));
	MOCK_METHOD0(getParent,ManagedWeakReference<SceneObject* >());
	MOCK_METHOD0(asCreatureObject,CreatureObject*());
	MOCK_METHOD0(asAiAgent,AiAgent*());
	MOCK_METHOD0(asTangibleObject,TangibleObject*());
	MOCK_METHOD0(getTemplateRadius,float());

};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZonePOD : public SceneObjectPOD {
public:
	Optional<String> zoneName;

	Optional<unsigned int> zoneCRC;

	Optional<QuadTreeReference> quadTree;

	Optional<AtomicInteger> spawnedAiAgents;

	String _className;
	ZonePOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ZonePOD();

};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONEPOD_H_*/
