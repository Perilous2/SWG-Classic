/*
 *	autogen/server/zone/objects/installation/factory/FactoryHopperObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef FACTORYHOPPEROBSERVER_H_
#define FACTORYHOPPEROBSERVER_H_

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

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "templates/params/ObserverEventType.h"

#include "server/zone/objects/installation/factory/FactoryObject.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/Task.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryHopperObserver : public Observer {
public:
	FactoryHopperObserver(FactoryObject* fact);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FactoryHopperObserver(DummyConstructorParameter* param);

	virtual ~FactoryHopperObserver();

	friend class FactoryHopperObserverHelper;
};

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryHopperObserverImplementation : public ObserverImplementation {
protected:
	ManagedWeakReference<FactoryObject* > factory;

public:
	FactoryHopperObserverImplementation(FactoryObject* fact);

	FactoryHopperObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<FactoryHopperObserver*> _this;

	operator const FactoryHopperObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~FactoryHopperObserverImplementation();

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

	friend class FactoryHopperObserver;
};

class FactoryHopperObserverAdapter : public ObserverAdapter {
public:
	FactoryHopperObserverAdapter(FactoryHopperObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class FactoryHopperObserverHelper : public DistributedObjectClassHelper, public Singleton<FactoryHopperObserverHelper> {
	static FactoryHopperObserverHelper* staticInitializer;

public:
	FactoryHopperObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FactoryHopperObserverHelper>;
};

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryHopperObserverPOD : public ObserverPOD {
public:
	Optional<ManagedWeakReference<FactoryObjectPOD* >> factory;

	String _className;
	FactoryHopperObserverPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~FactoryHopperObserverPOD();

};

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

#endif /*FACTORYHOPPEROBSERVERPOD_H_*/
