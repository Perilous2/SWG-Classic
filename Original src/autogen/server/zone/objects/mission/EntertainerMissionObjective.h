/*
 *	autogen/server/zone/objects/mission/EntertainerMissionObjective.h generated by engine3 IDL compiler 0.70
 */

#ifndef ENTERTAINERMISSIONOBJECTIVE_H_
#define ENTERTAINERMISSIONOBJECTIVE_H_

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
namespace mission {

class MissionObject;

class MissionObjectPOD;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver;

class MissionObserverPOD;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

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

#include "server/zone/objects/mission/events/CompleteMissionAfterCertainTimeTask.h"

#include "engine/log/Logger.h"

#include "engine/util/u3d/Vector3.h"

#include "engine/util/Observable.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class EntertainerMissionObjective : public MissionObjective {
public:
	EntertainerMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void setIsEntertaining(bool value);

	void clearLocationActiveAreaAndObservers();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void startCompleteTask();

	Vector3 getEndPosition();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	EntertainerMissionObjective(DummyConstructorParameter* param);

	virtual ~EntertainerMissionObjective();

	friend class EntertainerMissionObjectiveHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class EntertainerMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	bool inMissionArea;

	bool isEntertaining;

	ManagedReference<ActiveArea* > locationActiveArea;

	Reference<CompleteMissionAfterCertainTimeTask* > completeTask;

public:
	EntertainerMissionObjectiveImplementation(MissionObject* mission);

	EntertainerMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void setIsEntertaining(bool value);

	void clearLocationActiveAreaAndObservers();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void startCompleteTask();

	Vector3 getEndPosition();

	WeakReference<EntertainerMissionObjective*> _this;

	operator const EntertainerMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~EntertainerMissionObjectiveImplementation();

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

	friend class EntertainerMissionObjective;
};

class EntertainerMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	EntertainerMissionObjectiveAdapter(EntertainerMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void setIsEntertaining(bool value);

	void clearLocationActiveAreaAndObservers();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void startCompleteTask();

};

class EntertainerMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<EntertainerMissionObjectiveHelper> {
	static EntertainerMissionObjectiveHelper* staticInitializer;

public:
	EntertainerMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<EntertainerMissionObjectiveHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class EntertainerMissionObjectivePOD : public MissionObjectivePOD {
public:
	Optional<bool> inMissionArea;

	Optional<bool> isEntertaining;

	Optional<ManagedReference<ActiveAreaPOD* >> locationActiveArea;

	Optional<Reference<CompleteMissionAfterCertainTimeTask* >> completeTask;

	String _className;
	EntertainerMissionObjectivePOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~EntertainerMissionObjectivePOD();

};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*ENTERTAINERMISSIONOBJECTIVEPOD_H_*/
