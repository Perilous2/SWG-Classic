/*
 *	autogen/server/zone/objects/mission/CraftingMissionObjective.h generated by engine3 IDL compiler 0.70
 */

#ifndef CRAFTINGMISSIONOBJECTIVE_H_
#define CRAFTINGMISSIONOBJECTIVE_H_

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
namespace creature {

class CreatureObject;

class CreatureObjectPOD;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/mission/DeliverMissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class CraftingMissionObjective : public DeliverMissionObjective {
public:
	CraftingMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void updateMissionStatus(CreatureObject* player);

	void abort();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CraftingMissionObjective(DummyConstructorParameter* param);

	virtual ~CraftingMissionObjective();

	friend class CraftingMissionObjectiveHelper;
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

class CraftingMissionObjectiveImplementation : public DeliverMissionObjectiveImplementation {

public:
	CraftingMissionObjectiveImplementation(MissionObject* mission);

	CraftingMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	virtual void updateMissionStatus(CreatureObject* player);

	virtual void abort();

	WeakReference<CraftingMissionObjective*> _this;

	operator const CraftingMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CraftingMissionObjectiveImplementation();

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

	friend class CraftingMissionObjective;
};

class CraftingMissionObjectiveAdapter : public DeliverMissionObjectiveAdapter {
public:
	CraftingMissionObjectiveAdapter(CraftingMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void updateMissionStatus(CreatureObject* player);

	void abort();

};

class CraftingMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<CraftingMissionObjectiveHelper> {
	static CraftingMissionObjectiveHelper* staticInitializer;

public:
	CraftingMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingMissionObjectiveHelper>;
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

class CraftingMissionObjectivePOD : public DeliverMissionObjectivePOD {
public:

	CraftingMissionObjectivePOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~CraftingMissionObjectivePOD();

};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*CRAFTINGMISSIONOBJECTIVEPOD_H_*/
