/*
 *	autogen/server/zone/objects/tangible/components/droid/DroidPlaybackObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef DROIDPLAYBACKOBSERVER_H_
#define DROIDPLAYBACKOBSERVER_H_

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
namespace tangible {
namespace components {
namespace droid {

class DroidPlaybackModuleDataComponent;

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidPlaybackObserver : public Observer {
public:
	DroidPlaybackObserver(DroidPlaybackModuleDataComponent* m);

	void setSlot(int i);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DroidPlaybackObserver(DummyConstructorParameter* param);

	virtual ~DroidPlaybackObserver();

	friend class DroidPlaybackObserverHelper;
};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidPlaybackObserverImplementation : public ObserverImplementation {
protected:
	WeakReference<DroidPlaybackModuleDataComponent* > module;

	int slot;

public:
	DroidPlaybackObserverImplementation(DroidPlaybackModuleDataComponent* m);

	DroidPlaybackObserverImplementation(DummyConstructorParameter* param);

	void setSlot(int i);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<DroidPlaybackObserver*> _this;

	operator const DroidPlaybackObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DroidPlaybackObserverImplementation();

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

	friend class DroidPlaybackObserver;
};

class DroidPlaybackObserverAdapter : public ObserverAdapter {
public:
	DroidPlaybackObserverAdapter(DroidPlaybackObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setSlot(int i);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class DroidPlaybackObserverHelper : public DistributedObjectClassHelper, public Singleton<DroidPlaybackObserverHelper> {
	static DroidPlaybackObserverHelper* staticInitializer;

public:
	DroidPlaybackObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DroidPlaybackObserverHelper>;
};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidPlaybackObserverPOD : public ObserverPOD {
public:
	Optional<WeakReference<DroidPlaybackModuleDataComponent* >> module;

	Optional<int> slot;

	String _className;
	DroidPlaybackObserverPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~DroidPlaybackObserverPOD();

};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

#endif /*DROIDPLAYBACKOBSERVERPOD_H_*/
