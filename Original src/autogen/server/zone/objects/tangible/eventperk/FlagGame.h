/*
 *	autogen/server/zone/objects/tangible/eventperk/FlagGame.h generated by engine3 IDL compiler 0.70
 */

#ifndef FLAGGAME_H_
#define FLAGGAME_H_

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

class Zone;

class ZonePOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tasks {

class FlagGamePulseTask;

} // namespace tasks
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tasks;

#include "system/lang/Time.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace eventperk {

class FlagGame : public TangibleObject {
public:
	FlagGame();

	void initializeTransientMembers();

	void notifyInsertToZone(Zone* zone);

	unsigned int getFlagTemplate(unsigned int faction);

	void doVictoryEffects(unsigned int faction);

	void changeFlag(unsigned int faction);

	void tryFlagChange(CreatureObject* player);

	void showScores(CreatureObject* player);

	void removeCurFlag();

	bool canUseFlag(CreatureObject* player);

	void startGame();

	void activateGamePulse();

	void endGame();

	void announceToPlayers(const String& message);

	void destroyObjectFromWorld(bool sendSelfDestroy);

	void setTimeLimit(unsigned long long limit);

	unsigned long long getTimeLimit() const;

	bool isGameStarted();

	bool isGameEnded();

	void increaseRebelScore();

	void increaseImperialScore();

	unsigned int getFactionControl() const;

	Time* getGameStartTime();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FlagGame(DummyConstructorParameter* param);

	virtual ~FlagGame();

	friend class FlagGameHelper;
};

} // namespace eventperk
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::eventperk;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace eventperk {

class FlagGameImplementation : public TangibleObjectImplementation {
protected:
	ManagedWeakReference<CreatureObject* > owner;

	ManagedWeakReference<TangibleObject* > curFlag;

	Time lastFlagChange;

	Time gameStartTime;

	unsigned long long timeLimit;

	int gameStatus;

	int impScore;

	int rebScore;

	unsigned int factionControl;

	Reference<FlagGamePulseTask*> gamePulse;

public:
	FlagGameImplementation();

	FlagGameImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void notifyInsertToZone(Zone* zone);

	unsigned int getFlagTemplate(unsigned int faction);

	void doVictoryEffects(unsigned int faction);

	void changeFlag(unsigned int faction);

	void tryFlagChange(CreatureObject* player);

	void showScores(CreatureObject* player);

	void removeCurFlag();

	bool canUseFlag(CreatureObject* player);

	void startGame();

	void activateGamePulse();

	void endGame();

	void announceToPlayers(const String& message);

	void destroyObjectFromWorld(bool sendSelfDestroy);

	void setTimeLimit(unsigned long long limit);

	unsigned long long getTimeLimit() const;

	bool isGameStarted();

	bool isGameEnded();

	void increaseRebelScore();

	void increaseImperialScore();

	unsigned int getFactionControl() const;

	Time* getGameStartTime();

	WeakReference<FlagGame*> _this;

	operator const FlagGame*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~FlagGameImplementation();

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

	friend class FlagGame;
};

class FlagGameAdapter : public TangibleObjectAdapter {
public:
	FlagGameAdapter(FlagGame* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void notifyInsertToZone(Zone* zone);

	unsigned int getFlagTemplate(unsigned int faction);

	void doVictoryEffects(unsigned int faction);

	void changeFlag(unsigned int faction);

	void tryFlagChange(CreatureObject* player);

	void showScores(CreatureObject* player);

	void removeCurFlag();

	bool canUseFlag(CreatureObject* player);

	void startGame();

	void activateGamePulse();

	void endGame();

	void announceToPlayers(const String& message);

	void destroyObjectFromWorld(bool sendSelfDestroy);

	void setTimeLimit(unsigned long long limit);

	unsigned long long getTimeLimit() const;

	bool isGameStarted();

	bool isGameEnded();

	void increaseRebelScore();

	void increaseImperialScore();

	unsigned int getFactionControl() const;

};

class FlagGameHelper : public DistributedObjectClassHelper, public Singleton<FlagGameHelper> {
	static FlagGameHelper* staticInitializer;

public:
	FlagGameHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FlagGameHelper>;
};

} // namespace eventperk
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::eventperk;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace eventperk {

class FlagGamePOD : public TangibleObjectPOD {
public:
	Optional<ManagedWeakReference<CreatureObjectPOD* >> owner;

	Optional<ManagedWeakReference<TangibleObjectPOD* >> curFlag;

	Optional<Time> lastFlagChange;

	Optional<Time> gameStartTime;

	Optional<unsigned long long> timeLimit;

	Optional<int> gameStatus;

	Optional<int> impScore;

	Optional<int> rebScore;

	Optional<unsigned int> factionControl;

	String _className;
	FlagGamePOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~FlagGamePOD();

};

} // namespace eventperk
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::eventperk;

#endif /*FLAGGAMEPOD_H_*/