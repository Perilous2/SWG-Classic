/*
 *	autogen/server/zone/managers/gcw/observers/SquadObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef SQUADOBSERVER_H_
#define SQUADOBSERVER_H_

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
namespace ai {

class AiAgent;

class AiAgentPOD;

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

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

#include "engine/log/Logger.h"

#include "system/util/Vector.h"

#include "engine/util/u3d/Vector3.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "system/thread/Mutex.h"

namespace server {
namespace zone {
namespace managers {
namespace gcw {
namespace observers {

class SquadObserver : public Observer {
public:
	SquadObserver();

	void addMember(AiAgent* member);

	int size();

	AiAgent* getMember(unsigned int teamMemberIndex);

	void removeMember(unsigned int teamMemberIndex);

	void despawnSquad();

	bool despawnMembersCloseToLambdaShuttle(const Vector3& landingPosition, bool forcedCleanup);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SquadObserver(DummyConstructorParameter* param);

	virtual ~SquadObserver();

	friend class SquadObserverHelper;
};

} // namespace observers
} // namespace gcw
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::gcw::observers;

namespace server {
namespace zone {
namespace managers {
namespace gcw {
namespace observers {

class SquadObserverImplementation : public ObserverImplementation, public Logger {
protected:
	Vector<ManagedReference<AiAgent* > > teamMembers;

	Mutex squadLock;

public:
	SquadObserverImplementation();

	SquadObserverImplementation(DummyConstructorParameter* param);

	void addMember(AiAgent* member);

	int size();

	AiAgent* getMember(unsigned int teamMemberIndex);

	void removeMember(unsigned int teamMemberIndex);

	void despawnSquad();

	bool despawnMembersCloseToLambdaShuttle(const Vector3& landingPosition, bool forcedCleanup);

	WeakReference<SquadObserver*> _this;

	operator const SquadObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SquadObserverImplementation();

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

	friend class SquadObserver;
};

class SquadObserverAdapter : public ObserverAdapter {
public:
	SquadObserverAdapter(SquadObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class SquadObserverHelper : public DistributedObjectClassHelper, public Singleton<SquadObserverHelper> {
	static SquadObserverHelper* staticInitializer;

public:
	SquadObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SquadObserverHelper>;
};

} // namespace observers
} // namespace gcw
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::gcw::observers;

namespace server {
namespace zone {
namespace managers {
namespace gcw {
namespace observers {

class SquadObserverPOD : public ObserverPOD {
public:
	Optional<Vector<ManagedReference<AiAgentPOD* > >> teamMembers;

	String _className;
	SquadObserverPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SquadObserverPOD();

};

} // namespace observers
} // namespace gcw
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::gcw::observers;

#endif /*SQUADOBSERVERPOD_H_*/
