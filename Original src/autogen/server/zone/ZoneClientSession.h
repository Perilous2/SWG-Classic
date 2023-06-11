/*
 *	autogen/server/zone/ZoneClientSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef ZONECLIENTSESSION_H_
#define ZONECLIENTSESSION_H_

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

#include "engine/log/LoggerHelperStream.h"

#include "system/util/SynchronizedVectorMap.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/scene/variables/OrderedTaskExecutioner.h"

#include "engine/service/proto/BaseClientProxy.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/core/ManagedObject.h"

#include "system/lang/Time.h"

#include "system/util/VectorMap.h"

#include "engine/core/Task.h"

namespace server {
namespace zone {

class ZoneClientSession : public ManagedObject {
public:
	ZoneClientSession(BaseClientProxy* session);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void setupLogging();

	void info(const String& msg, bool force = false);

	void debug(const String& msg);

	void error(const String& msg);

	void executeOrderedTask(Task* task);

	PendingTasksMap* getPendingTasks();

	LoggerHelperStream info(int forced = false) const;

	LoggerHelperStream error() const;

	LoggerHelperStream debug() const;

	String getAddress() const;

	String getIPAddress() const;

	void setPlayer(CreatureObject* playerCreature);

	void setSessionID(const String& id);

	void setAccountID(unsigned int acc);

	int getCommandCount() const;

	void increaseCommandCount();

	void resetCommandCount();

	const Time* getCommandSpamCooldown() const;

	Time* getCommandSpamCooldown();

	BaseClientProxy* getSession();

	Reference<CreatureObject* > getPlayer();

	String getSessionID() const;

	unsigned int getAccountID() const;

	bool hasCharacter(unsigned long long cid, unsigned int galaxyId) const;

	void addCharacter(unsigned long long cid, unsigned int galaxyId);

	void addBannedCharacter(unsigned long long cid, unsigned int galaxyId);

	int getCharacterCount() const;

	int getCharacterCount(int galaxyId) const;

	void resetCharacters();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ZoneClientSession(DummyConstructorParameter* param);

	virtual ~ZoneClientSession();

	friend class ZoneClientSessionHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSessionImplementation : public ManagedObjectImplementation {
protected:
	Reference<BaseClientProxy* > session;

private:
	String ipAddress;

protected:
	SynchronizedVectorMap<unsigned int, unsigned long long> characters;

	SynchronizedVectorMap<unsigned int, unsigned long long> bannedCharacters;

	ManagedWeakReference<CreatureObject* > player;

	String sessionID;

	unsigned int accountID;

	Reference<PendingTasksMap* > pendingTasks;

private:
	bool disconnecting;

protected:
	Time commandSpamCooldown;

	int commandCount;

public:
	ZoneClientSessionImplementation(BaseClientProxy* session);

	ZoneClientSessionImplementation(DummyConstructorParameter* param);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void setupLogging();

	void info(const String& msg, bool force = false);

	void debug(const String& msg);

	void error(const String& msg);

	void executeOrderedTask(Task* task);

	PendingTasksMap* getPendingTasks();

	LoggerHelperStream info(int forced = false) const;

	LoggerHelperStream error() const;

	LoggerHelperStream debug() const;

	String getAddress() const;

	String getIPAddress() const;

	void setPlayer(CreatureObject* playerCreature);

	void setSessionID(const String& id);

	void setAccountID(unsigned int acc);

	int getCommandCount() const;

	void increaseCommandCount();

	void resetCommandCount();

	const Time* getCommandSpamCooldown() const;

	Time* getCommandSpamCooldown();

	BaseClientProxy* getSession();

	Reference<CreatureObject* > getPlayer();

	String getSessionID() const;

	unsigned int getAccountID() const;

	bool hasCharacter(unsigned long long cid, unsigned int galaxyId) const;

	void addCharacter(unsigned long long cid, unsigned int galaxyId);

	void addBannedCharacter(unsigned long long cid, unsigned int galaxyId);

	int getCharacterCount() const;

	int getCharacterCount(int galaxyId) const;

	void resetCharacters();

	WeakReference<ZoneClientSession*> _this;

	operator const ZoneClientSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneClientSessionImplementation();

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

	friend class ZoneClientSession;
};

class ZoneClientSessionAdapter : public ManagedObjectAdapter {
public:
	ZoneClientSessionAdapter(ZoneClientSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void disconnect();

	void disconnect(bool doLock);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock);

	void setupLogging();

	void info(const String& msg, bool force);

	void debug(const String& msg);

	void error(const String& msg);

	String getAddress() const;

	String getIPAddress() const;

	void setPlayer(CreatureObject* playerCreature);

	void setSessionID(const String& id);

	void setAccountID(unsigned int acc);

	int getCommandCount() const;

	void increaseCommandCount();

	void resetCommandCount();

	Reference<CreatureObject* > getPlayer();

	String getSessionID() const;

	unsigned int getAccountID() const;

	bool hasCharacter(unsigned long long cid, unsigned int galaxyId) const;

	void addCharacter(unsigned long long cid, unsigned int galaxyId);

	void addBannedCharacter(unsigned long long cid, unsigned int galaxyId);

	int getCharacterCount() const;

	int getCharacterCount(int galaxyId) const;

	void resetCharacters();

};

class ZoneClientSessionHelper : public DistributedObjectClassHelper, public Singleton<ZoneClientSessionHelper> {
	static ZoneClientSessionHelper* staticInitializer;

public:
	ZoneClientSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneClientSessionHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSessionPOD : public ManagedObjectPOD {
public:
	Optional<String> ipAddress;

	Optional<SynchronizedVectorMap<unsigned int, unsigned long long>> characters;

	Optional<SynchronizedVectorMap<unsigned int, unsigned long long>> bannedCharacters;

	Optional<ManagedWeakReference<CreatureObjectPOD* >> player;

	Optional<String> sessionID;

	Optional<unsigned int> accountID;

	Optional<bool> disconnecting;

	Optional<Time> commandSpamCooldown;

	Optional<int> commandCount;

	String _className;
	ZoneClientSessionPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ZoneClientSessionPOD();

};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONECLIENTSESSIONPOD_H_*/