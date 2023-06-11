/*
 *	autogen/server/zone/objects/mission/DestroyMissionObjective.h generated by engine3 IDL compiler 0.70
 */

#ifndef DESTROYMISSIONOBJECTIVE_H_
#define DESTROYMISSIONOBJECTIVE_H_

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

class Zone;

class ZonePOD;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/util/u3d/Vector3.h"

#include "engine/log/Logger.h"

#include "system/lang/Time.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "server/zone/objects/tangible/LairObject.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

#include "server/zone/objects/transaction/TransactionLog.h"

#include "engine/util/Observable.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class DestroyMissionObjective : public MissionObjective {
public:
	DestroyMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void spawnLair();

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 */
	void destroyObjectFromDatabase();

	Vector3 findValidSpawnPosition(Zone* zone);

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setLairTemplateToSpawn(const String& sp);

	void setDifficultyLevel(int diff);

	void setDifficulty(int diff);

	Vector3 getEndPosition();

	void addMissionStats(TransactionLog& trx);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DestroyMissionObjective(DummyConstructorParameter* param);

	virtual ~DestroyMissionObjective();

	friend class DestroyMissionObjectiveHelper;
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

class DestroyMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	String lairTemplate;

	ManagedReference<MissionSpawnActiveArea* > spawnActiveArea;

	ManagedReference<LairObject* > lairObject;

private:
	int difficultyLevel;

	int difficulty;

protected:
	Time lairSpawnTime;

public:
	DestroyMissionObjectiveImplementation(MissionObject* mission);

	DestroyMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void spawnLair();

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 */
	void destroyObjectFromDatabase();

	Vector3 findValidSpawnPosition(Zone* zone);

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setLairTemplateToSpawn(const String& sp);

	void setDifficultyLevel(int diff);

	void setDifficulty(int diff);

	Vector3 getEndPosition();

	void addMissionStats(TransactionLog& trx);

	WeakReference<DestroyMissionObjective*> _this;

	operator const DestroyMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~DestroyMissionObjectiveImplementation();

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

	friend class DestroyMissionObjective;
};

class DestroyMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	DestroyMissionObjectiveAdapter(DestroyMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void spawnLair();

	void destroyObjectFromDatabase();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setDifficultyLevel(int diff);

	void setDifficulty(int diff);

};

class DestroyMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<DestroyMissionObjectiveHelper> {
	static DestroyMissionObjectiveHelper* staticInitializer;

public:
	DestroyMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DestroyMissionObjectiveHelper>;
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

class DestroyMissionObjectivePOD : public MissionObjectivePOD {
public:
	Optional<String> lairTemplate;

	Optional<ManagedReference<MissionSpawnActiveAreaPOD* >> spawnActiveArea;

	Optional<ManagedReference<LairObjectPOD* >> lairObject;

	Optional<int> difficultyLevel;

	Optional<int> difficulty;

	Optional<Time> lairSpawnTime;

	String _className;
	DestroyMissionObjectivePOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~DestroyMissionObjectivePOD();

};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*DESTROYMISSIONOBJECTIVEPOD_H_*/
