/*
 *	autogen/server/zone/objects/region/SpawnArea.h generated by engine3 IDL compiler 0.70
 */

#ifndef SPAWNAREA_H_
#define SPAWNAREA_H_

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
namespace region {

class SpawnAreaObserver;

class SpawnAreaObserverPOD;

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

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

class QuadTreeEntry;

class QuadTreeEntryPOD;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/managers/creature/LairSpawn.h"

#include "system/util/Vector.h"

#include "engine/util/u3d/Vector3.h"

#include "system/thread/atomic/AtomicInteger.h"

#include "server/zone/objects/region/Region.h"

#include "system/util/HashTable.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observable.h"

#include "system/lang/Time.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace objects {
namespace region {

class SpawnArea : public Region {
public:
	static const int MINSPAWNINTERVAL = 5000;

	SpawnArea();

	void notifyPositionUpdate(QuadTreeEntry* entry);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	Vector3 getRandomPosition(SceneObject* player);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void buildSpawnList(Vector<unsigned int>* groupCRCs);

	const Vector<Reference<LairSpawn*> >* getSpawnList() const;

	int getTotalWeighting() const;

	void setMaxSpawnLimit(int n);

	void addNoSpawnArea(SpawnArea* area);

	void tryToSpawn(CreatureObject* player);

	int getPlayerSpawnLevel(CreatureObject* player);

	bool isSpawnAreaObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SpawnArea(DummyConstructorParameter* param);

	virtual ~SpawnArea();

	friend class SpawnAreaHelper;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace region {

class SpawnAreaImplementation : public RegionImplementation {
protected:
	AtomicInteger numberOfPlayersInRange;

	Vector<Reference<LairSpawn*> > possibleSpawns;

	int totalWeighting;

	int totalSpawnCount;

	int maxSpawnLimit;

	HashTable<unsigned int, int> spawnCountByType;

	HashTable<unsigned long long, unsigned int> spawnTypes;

	Time lastSpawn;

	ManagedReference<SpawnAreaObserver* > spawnAreaObserver;

	Vector<ManagedWeakReference<SpawnArea*> > noSpawnAreas;

public:
	static const int MINSPAWNINTERVAL = 5000;

	SpawnAreaImplementation();

	SpawnAreaImplementation(DummyConstructorParameter* param);

	void notifyPositionUpdate(QuadTreeEntry* entry);

	virtual void notifyEnter(SceneObject* object);

	virtual void notifyExit(SceneObject* object);

	Vector3 getRandomPosition(SceneObject* player);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void buildSpawnList(Vector<unsigned int>* groupCRCs);

	const Vector<Reference<LairSpawn*> >* getSpawnList() const;

	int getTotalWeighting() const;

	void setMaxSpawnLimit(int n);

	void addNoSpawnArea(SpawnArea* area);

	void tryToSpawn(CreatureObject* player);

	int getPlayerSpawnLevel(CreatureObject* player);

	bool isSpawnAreaObject();

	WeakReference<SpawnArea*> _this;

	operator const SpawnArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~SpawnAreaImplementation();

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

	friend class SpawnArea;
};

class SpawnAreaAdapter : public RegionAdapter {
public:
	SpawnAreaAdapter(SpawnArea* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyPositionUpdate(QuadTreeEntry* entry);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int getTotalWeighting() const;

	void setMaxSpawnLimit(int n);

	void addNoSpawnArea(SpawnArea* area);

	void tryToSpawn(CreatureObject* player);

	int getPlayerSpawnLevel(CreatureObject* player);

	bool isSpawnAreaObject();

};

class SpawnAreaHelper : public DistributedObjectClassHelper, public Singleton<SpawnAreaHelper> {
	static SpawnAreaHelper* staticInitializer;

public:
	SpawnAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SpawnAreaHelper>;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace region {

class SpawnAreaPOD : public RegionPOD {
public:
	Optional<int> totalWeighting;

	Optional<int> totalSpawnCount;

	Optional<int> maxSpawnLimit;

	Optional<HashTable<unsigned int, int>> spawnCountByType;

	Optional<HashTable<unsigned long long, unsigned int>> spawnTypes;

	Optional<Time> lastSpawn;

	Optional<ManagedReference<SpawnAreaObserverPOD* >> spawnAreaObserver;

	Optional<Vector<ManagedWeakReference<SpawnArea*> >> noSpawnAreas;

	String _className;
	SpawnAreaPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SpawnAreaPOD();

};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

#endif /*SPAWNAREAPOD_H_*/