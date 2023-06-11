/*
 *	autogen/server/zone/objects/player/sessions/LootLotterySession.h generated by engine3 IDL compiler 0.70
 */

#ifndef LOOTLOTTERYSESSION_H_
#define LOOTLOTTERYSESSION_H_

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

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/ai/AiAgent.h"

#include "server/zone/objects/player/sessions/LootLotteryBallot.h"

#include "engine/log/Logger.h"

#include "engine/util/Facade.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class LootLotterySession : public Facade {
public:
	LootLotterySession(unsigned long long id, AiAgent* ai);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addEligiblePlayer(CreatureObject* player);

	void removeEligiblePlayer(CreatureObject* player);

	bool containsEligiblePlayer(CreatureObject* player);

	bool isLotteryFinished();

	void setLotteryFinished(bool value);

	AiAgent* getCorpse();

	void addPlayerSelections(CreatureObject* player, LootLotteryBallot* ballot);

	void doLotteryDraw();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LootLotterySession(DummyConstructorParameter* param);

	virtual ~LootLotterySession();

	friend class LootLotterySessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class LootLotterySessionImplementation : public FacadeImplementation {
protected:
	ManagedReference<AiAgent* > corpse;

	bool lotteryFinished;

	unsigned long long groupID;

	SortedVector<ManagedReference<CreatureObject* > > eligiblePlayers;

	SortedVector<LootLotteryBallot*> playerSelections;

public:
	LootLotterySessionImplementation(unsigned long long id, AiAgent* ai);

	LootLotterySessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addEligiblePlayer(CreatureObject* player);

	void removeEligiblePlayer(CreatureObject* player);

	bool containsEligiblePlayer(CreatureObject* player);

	bool isLotteryFinished();

	void setLotteryFinished(bool value);

	AiAgent* getCorpse();

	void addPlayerSelections(CreatureObject* player, LootLotteryBallot* ballot);

	void doLotteryDraw();

	WeakReference<LootLotterySession*> _this;

	operator const LootLotterySession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LootLotterySessionImplementation();

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

	friend class LootLotterySession;
};

class LootLotterySessionAdapter : public FacadeAdapter {
public:
	LootLotterySessionAdapter(LootLotterySession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addEligiblePlayer(CreatureObject* player);

	void removeEligiblePlayer(CreatureObject* player);

	bool containsEligiblePlayer(CreatureObject* player);

	bool isLotteryFinished();

	void setLotteryFinished(bool value);

	AiAgent* getCorpse();

	void doLotteryDraw();

};

class LootLotterySessionHelper : public DistributedObjectClassHelper, public Singleton<LootLotterySessionHelper> {
	static LootLotterySessionHelper* staticInitializer;

public:
	LootLotterySessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LootLotterySessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class LootLotterySessionPOD : public FacadePOD {
public:
	Optional<ManagedReference<AiAgentPOD* >> corpse;

	Optional<bool> lotteryFinished;

	Optional<unsigned long long> groupID;

	Optional<SortedVector<ManagedReference<CreatureObjectPOD* > >> eligiblePlayers;

	Optional<SortedVector<LootLotteryBallot*>> playerSelections;

	String _className;
	LootLotterySessionPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~LootLotterySessionPOD();

};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*LOOTLOTTERYSESSIONPOD_H_*/