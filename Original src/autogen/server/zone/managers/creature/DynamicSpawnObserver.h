/*
 *	autogen/server/zone/managers/creature/DynamicSpawnObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef DYNAMICSPAWNOBSERVER_H_
#define DYNAMICSPAWNOBSERVER_H_

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

#include "templates/mobile/LairTemplate.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observable.h"

#include "server/zone/managers/creature/SpawnObserver.h"

namespace server {
namespace zone {
namespace managers {
namespace creature {

class DynamicSpawnObserver : public SpawnObserver {
public:
	static const int BABY_SPAWN_CHANCE = 500;

	DynamicSpawnObserver();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void spawnInitialMobiles(SceneObject* building);

	bool isTheaterSpawnObserver();

	bool isDynamicSpawnObserver();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DynamicSpawnObserver(DummyConstructorParameter* param);

	virtual ~DynamicSpawnObserver();

	friend class DynamicSpawnObserverHelper;
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

class DynamicSpawnObserverImplementation : public SpawnObserverImplementation {
public:
	static const int BABY_SPAWN_CHANCE = 500;

	DynamicSpawnObserverImplementation();

	DynamicSpawnObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void spawnInitialMobiles(SceneObject* building);

	bool isTheaterSpawnObserver();

	bool isDynamicSpawnObserver();

	WeakReference<DynamicSpawnObserver*> _this;

	operator const DynamicSpawnObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DynamicSpawnObserverImplementation();

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

	friend class DynamicSpawnObserver;
};

class DynamicSpawnObserverAdapter : public SpawnObserverAdapter {
public:
	DynamicSpawnObserverAdapter(DynamicSpawnObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void spawnInitialMobiles(SceneObject* building);

	bool isTheaterSpawnObserver();

	bool isDynamicSpawnObserver();

};

class DynamicSpawnObserverHelper : public DistributedObjectClassHelper, public Singleton<DynamicSpawnObserverHelper> {
	static DynamicSpawnObserverHelper* staticInitializer;

public:
	DynamicSpawnObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DynamicSpawnObserverHelper>;
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

class DynamicSpawnObserverPOD : public SpawnObserverPOD {
public:
	String _className;
	DynamicSpawnObserverPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~DynamicSpawnObserverPOD();

};

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

#endif /*DYNAMICSPAWNOBSERVERPOD_H_*/