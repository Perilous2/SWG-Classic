/*
 *	autogen/server/zone/objects/tangible/consumable/DelayedBuffObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef DELAYEDBUFFOBSERVER_H_
#define DELAYEDBUFFOBSERVER_H_

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
namespace creature {
namespace buffs {

class DelayedBuff;

class DelayedBuffPOD;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "engine/log/Logger.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DelayedBuffObserver : public Observer {
public:
	DelayedBuffObserver(DelayedBuff* b);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DelayedBuffObserver(DummyConstructorParameter* param);

	virtual ~DelayedBuffObserver();

	friend class DelayedBuffObserverHelper;
};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DelayedBuffObserverImplementation : public ObserverImplementation, public Logger {
protected:
	ManagedWeakReference<DelayedBuff* > buff;

public:
	DelayedBuffObserverImplementation(DelayedBuff* b);

	DelayedBuffObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<DelayedBuffObserver*> _this;

	operator const DelayedBuffObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~DelayedBuffObserverImplementation();

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

	friend class DelayedBuffObserver;
};

class DelayedBuffObserverAdapter : public ObserverAdapter {
public:
	DelayedBuffObserverAdapter(DelayedBuffObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class DelayedBuffObserverHelper : public DistributedObjectClassHelper, public Singleton<DelayedBuffObserverHelper> {
	static DelayedBuffObserverHelper* staticInitializer;

public:
	DelayedBuffObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DelayedBuffObserverHelper>;
};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DelayedBuffObserverPOD : public ObserverPOD {
public:
	Optional<ManagedWeakReference<DelayedBuffPOD* >> buff;

	String _className;
	DelayedBuffObserverPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~DelayedBuffObserverPOD();

};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

#endif /*DELAYEDBUFFOBSERVERPOD_H_*/