/*
 *	autogen/server/zone/objects/creature/buffs/SquadLeaderBuff.h generated by engine3 IDL compiler 0.70
 */

#ifndef SQUADLEADERBUFF_H_
#define SQUADLEADERBUFF_H_

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

class CreatureObject;

class CreatureObjectPOD;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

class PlayerObjectPOD;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SquadLeaderBuffObserver;

class SquadLeaderBuffObserverPOD;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "server/zone/objects/creature/commands/SquadLeaderCommand.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "templates/params/ObserverEventType.h"

#include "server/zone/objects/scene/SceneObjectType.h"

#include "server/zone/objects/creature/buffs/Buff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SquadLeaderBuff : public Buff {
public:
	SquadLeaderBuff(CreatureObject* creo, CreatureObject* lead, unsigned int buffCRC, int duration);

	CreatureObject* getPlayer();

	CreatureObject* getLeader();

	void activate();

	void doActivate(bool doCheck);

	bool qualifiesForActivation();

	bool checkRenew() const;

	void addObservers();

	bool removeOnClearBuffs() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SquadLeaderBuff(DummyConstructorParameter* param);

	virtual ~SquadLeaderBuff();

	friend class SquadLeaderBuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SquadLeaderBuffImplementation : public BuffImplementation {
protected:
	ManagedReference<SquadLeaderBuffObserver* > playerObserver;

	ManagedReference<SquadLeaderBuffObserver* > leaderObserver;

	ManagedReference<CreatureObject* > player;

	ManagedReference<CreatureObject* > leader;

public:
	SquadLeaderBuffImplementation(CreatureObject* creo, CreatureObject* lead, unsigned int buffCRC, int duration);

	SquadLeaderBuffImplementation(DummyConstructorParameter* param);

	void finalize();

	CreatureObject* getPlayer();

	CreatureObject* getLeader();

	void activate();

	void doActivate(bool doCheck);

	bool qualifiesForActivation();

	bool checkRenew() const;

	void addObservers();

	bool removeOnClearBuffs() const;

	WeakReference<SquadLeaderBuff*> _this;

	operator const SquadLeaderBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~SquadLeaderBuffImplementation();

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

	friend class SquadLeaderBuff;
};

class SquadLeaderBuffAdapter : public BuffAdapter {
public:
	SquadLeaderBuffAdapter(SquadLeaderBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	CreatureObject* getPlayer();

	CreatureObject* getLeader();

	void activate();

	void doActivate(bool doCheck);

	bool qualifiesForActivation();

	bool checkRenew() const;

	void addObservers();

	bool removeOnClearBuffs() const;

};

class SquadLeaderBuffHelper : public DistributedObjectClassHelper, public Singleton<SquadLeaderBuffHelper> {
	static SquadLeaderBuffHelper* staticInitializer;

public:
	SquadLeaderBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SquadLeaderBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class SquadLeaderBuffPOD : public BuffPOD {
public:
	Optional<ManagedReference<SquadLeaderBuffObserverPOD* >> playerObserver;

	Optional<ManagedReference<SquadLeaderBuffObserverPOD* >> leaderObserver;

	Optional<ManagedReference<CreatureObjectPOD* >> player;

	Optional<ManagedReference<CreatureObjectPOD* >> leader;

	String _className;
	SquadLeaderBuffPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SquadLeaderBuffPOD();

};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*SQUADLEADERBUFFPOD_H_*/