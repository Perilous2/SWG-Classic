/*
 *	autogen/server/zone/objects/mission/ReconMissionObjective.h generated by engine3 IDL compiler 0.70
 */

#ifndef RECONMISSIONOBJECTIVE_H_
#define RECONMISSIONOBJECTIVE_H_

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
namespace area {

class MissionReconActiveArea;

class MissionReconActiveAreaPOD;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "engine/util/u3d/Vector3.h"

#include "engine/log/Logger.h"

#include "server/zone/objects/mission/MissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class ReconMissionObjective : public MissionObjective {
public:
	ReconMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	Vector3 getEndPosition();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ReconMissionObjective(DummyConstructorParameter* param);

	virtual ~ReconMissionObjective();

	friend class ReconMissionObjectiveHelper;
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

class ReconMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	ManagedReference<MissionReconActiveArea* > locationActiveArea;

public:
	ReconMissionObjectiveImplementation(MissionObject* mission);

	ReconMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	Vector3 getEndPosition();

	WeakReference<ReconMissionObjective*> _this;

	operator const ReconMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~ReconMissionObjectiveImplementation();

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

	friend class ReconMissionObjective;
};

class ReconMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	ReconMissionObjectiveAdapter(ReconMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

};

class ReconMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<ReconMissionObjectiveHelper> {
	static ReconMissionObjectiveHelper* staticInitializer;

public:
	ReconMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ReconMissionObjectiveHelper>;
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

class ReconMissionObjectivePOD : public MissionObjectivePOD {
public:
	Optional<ManagedReference<MissionReconActiveAreaPOD* >> locationActiveArea;

	String _className;
	ReconMissionObjectivePOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ReconMissionObjectivePOD();

};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*RECONMISSIONOBJECTIVEPOD_H_*/