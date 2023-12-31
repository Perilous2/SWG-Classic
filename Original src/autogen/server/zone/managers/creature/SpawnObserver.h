/*
 *	autogen/server/zone/managers/creature/SpawnObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef SPAWNOBSERVER_H_
#define SPAWNOBSERVER_H_

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

#include "server/zone/objects/creature/CreatureObject.h"

#include "templates/mobile/LairTemplate.h"

#include "system/util/SynchronizedVector.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace managers {
namespace creature {

class SpawnObserver : public Observer {
public:
	SpawnObserver();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setLairTemplate(LairTemplate* tmpl);

	void setDifficulty(int diff);

	void setSize(float siz);

	String getLairTemplateName();

	SynchronizedVector<ManagedReference<CreatureObject* > >* getSpawnedCreatures();

	int getBabiesSpawned();

	bool isSpawnObserver();

	bool isLairObserver();

	bool isDestroyMissionLairObserver();

	bool isTheaterSpawnObserver();

	bool isDynamicSpawnObserver();

	void despawnSpawns();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SpawnObserver(DummyConstructorParameter* param);

	virtual ~SpawnObserver();

	friend class SpawnObserverHelper;
};

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class SpawnObserverImplementation : public ObserverImplementation, public Logger {
protected:
	Reference<LairTemplate* > lairTemplate;

	SynchronizedVector<ManagedReference<CreatureObject* > > spawnedCreatures;

	int difficulty;

	int babiesSpawned;

	float size;

public:
	SpawnObserverImplementation();

	SpawnObserverImplementation(DummyConstructorParameter* param);

	virtual int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setLairTemplate(LairTemplate* tmpl);

	void setDifficulty(int diff);

	void setSize(float siz);

	String getLairTemplateName();

	SynchronizedVector<ManagedReference<CreatureObject* > >* getSpawnedCreatures();

	int getBabiesSpawned();

	bool isSpawnObserver();

	bool isLairObserver();

	bool isDestroyMissionLairObserver();

	bool isTheaterSpawnObserver();

	bool isDynamicSpawnObserver();

	void despawnSpawns();

	WeakReference<SpawnObserver*> _this;

	operator const SpawnObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SpawnObserverImplementation();

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

	friend class SpawnObserver;
};

class SpawnObserverAdapter : public ObserverAdapter {
public:
	SpawnObserverAdapter(SpawnObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setDifficulty(int diff);

	void setSize(float siz);

	String getLairTemplateName();

	int getBabiesSpawned();

	bool isSpawnObserver();

	bool isLairObserver();

	bool isDestroyMissionLairObserver();

	bool isTheaterSpawnObserver();

	bool isDynamicSpawnObserver();

	void despawnSpawns();

};

class SpawnObserverHelper : public DistributedObjectClassHelper, public Singleton<SpawnObserverHelper> {
	static SpawnObserverHelper* staticInitializer;

public:
	SpawnObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SpawnObserverHelper>;
};

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class SpawnObserverPOD : public ObserverPOD {
public:
	Optional<SynchronizedVector<ManagedReference<CreatureObjectPOD* > >> spawnedCreatures;

	Optional<int> difficulty;

	Optional<int> babiesSpawned;

	Optional<float> size;

	String _className;
	SpawnObserverPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SpawnObserverPOD();

};

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

#endif /*SPAWNOBSERVERPOD_H_*/
