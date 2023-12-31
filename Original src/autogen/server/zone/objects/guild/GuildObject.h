/*
 *	autogen/server/zone/objects/guild/GuildObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef GUILDOBJECT_H_
#define GUILDOBJECT_H_

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
namespace chat {
namespace room {

class ChatRoom;

class ChatRoomPOD;

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

namespace server {
namespace zone {
namespace objects {
namespace guild {

class GuildUpdateEvent;

} // namespace guild
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::guild;

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

#include "system/lang/Time.h"

#include "server/zone/objects/guild/GuildMemberList.h"

#include "server/zone/objects/guild/GuildMemberInfo.h"

#include "system/thread/ReadWriteLock.h"

#include "system/lang/System.h"

#include "system/util/VectorMap.h"

#include "engine/util/JSONSerializationType.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/lang/String.h"

#include "system/util/SortedVector.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace guild {

class GuildObject : public SceneObject {
public:
	static const byte PERMISSION_NONE;

	static const byte PERMISSION_MAIL;

	static const byte PERMISSION_SPONSOR;

	static const byte PERMISSION_TITLE;

	static const byte PERMISSION_ACCEPT;

	static const byte PERMISSION_KICK;

	static const byte PERMISSION_WAR;

	static const byte PERMISSION_NAME;

	static const byte PERMISSION_DISBAND;

	static const byte PERMISSION_ALL;

	static const byte WAR_NONE;

	static const byte WAR_MUTUAL;

	static const byte WAR_IN;

	static const byte WAR_OUT;

	static const byte ELECTION_DISABLED;

	static const byte ELECTION_FIRST_WEEK;

	static const byte ELECTION_SECOND_WEEK;

	GuildObject();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void rescheduleUpdateEvent(unsigned int seconds);

	Time* getNextUpdateTime();

	void sendBaselinesTo(SceneObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessage(CreatureObject* player, BaseMessage* msg, bool sendSelf = false);

	/**
	 * Adds the Player to the GuildMemberList. Doesn't do anything else!
	 * Use the GuildManager for adding and removing of players that sends messages etc.
	 * @param player The player's objectid to add
	 */
	void addMember(unsigned long long playerID);

	void removeMember(unsigned long long playerID);

	bool hasMember(unsigned long long playerID);

	GuildMemberInfo* getMember(unsigned long long playerID);

	unsigned long long getMember(int index);

	void setGuildMemberTitle(unsigned long long playerID, const String& title);

	String getGuildMemberTitle(unsigned long long playerID);

	void addSponsoredPlayer(unsigned long long playerID);

	void removeSponsoredPlayer(unsigned long long playerID);

	bool hasSponsoredPlayer(unsigned long long playerID);

	unsigned long long getSponsoredPlayer(int idx);

	int getSponsoredPlayerCount() const;

	void setChatRoom(ChatRoom* room);

	ChatRoom* getChatRoom() const;

	int getTotalMembers() const;

	unsigned long long getGuildLeaderID() const;

	GuildMemberList* getGuildMemberList();

	String getGuildAbbrev() const;

	void setGuildAbbrev(const String& abbrev);

	void setGuildLeaderID(unsigned long long leaderID);

	void setGuildID(unsigned int id);

	unsigned int getGuildID() const;

	void setGuildName(const String& gname);

	String getGuildName() const;

	void setPendingNewName(const String& newName);

	String getPendingNewName() const;

	void setPendingNewAbbrev(const String& newAbbrev);

	String getPendingNewAbbrev() const;

	void setRenamePending(bool pending);

	bool isRenamePending() const;

	void setRenamerID(unsigned long long id);

	unsigned long long getRenamerID() const;

	void resetRename();

	String getGuildKey() const;

	bool isGuildObject();

	bool isGuildLeader(CreatureObject* player) const;

	byte getWarStatus(unsigned long long guildoid);

	void setWarStatus(unsigned long long guildoid, byte status);

	bool isInWaringGuild(CreatureObject* creature);

	bool isAtWarWith(unsigned long long guildoid);

	bool hasDeclaredWarOn(unsigned long long guildoid);

	bool hasDeclaredWarBy(unsigned long long guildoid);

	VectorMap<unsigned long long, byte>* getWaringGuilds();

	bool hasMailPermission(unsigned long long playerID);

	bool hasSponsorPermission(unsigned long long playerID);

	bool hasAcceptPermission(unsigned long long playerID);

	bool hasDisbandPermission(unsigned long long playerID);

	bool hasKickPermission(unsigned long long playerID);

	bool hasNamePermission(unsigned long long playerID);

	bool hasTitlePermission(unsigned long long playerID);

	bool hasWarPermission(unsigned long long playerID);

	void toggleMemberPermission(unsigned long long playerID, byte permission);

	void setTransferPending(bool transfer);

	bool isTransferPending() const;

	bool isElectionEnabled();

	byte getElectionState() const;

	void setElectionState(byte state);

	void addCandidate(unsigned long long candidateoid);

	void setVote(unsigned long long voteroid, unsigned long long candidateoid);

	VectorMap<unsigned long long, int>* getCandidates();

	void resetElection(bool disable);

	void removeCandidate(unsigned long long candidateoid);

	bool isCandidate(unsigned long long candidateoid);

	unsigned long long getMemberWithHighestPermission();

	int writeRecursiveJSON(JSONSerializationType& j, int maxDepth, Vector<unsigned long long>* oidPath = NULL);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GuildObject(DummyConstructorParameter* param);

	virtual ~GuildObject();

	friend class GuildObjectHelper;
};

} // namespace guild
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::guild;

namespace server {
namespace zone {
namespace objects {
namespace guild {

class GuildObjectImplementation : public SceneObjectImplementation {
protected:
	ManagedReference<ChatRoom* > chatRoom;

	GuildMemberList guildMembers;

	SortedVector<unsigned long long> sponsoredPlayers;

	VectorMap<unsigned long long, byte> waringGuilds;

	unsigned int guildID;

	String guildName;

	String guildAbbrev;

	String pendingNewName;

	String pendingNewAbbrev;

	bool renamePending;

	unsigned long long renamerID;

	bool transferPending;

	Time nextUpdateTime;

	Reference<GuildUpdateEvent* > guildUpdateEvent;

	ReadWriteLock waringGuildsMutex;

	unsigned long long guildLeaderID;

	byte electionState;

	VectorMap<unsigned long long, int> candidates;

	VectorMap<unsigned long long, unsigned long long> votes;

public:
	static const byte PERMISSION_NONE;

	static const byte PERMISSION_MAIL;

	static const byte PERMISSION_SPONSOR;

	static const byte PERMISSION_TITLE;

	static const byte PERMISSION_ACCEPT;

	static const byte PERMISSION_KICK;

	static const byte PERMISSION_WAR;

	static const byte PERMISSION_NAME;

	static const byte PERMISSION_DISBAND;

	static const byte PERMISSION_ALL;

	static const byte WAR_NONE;

	static const byte WAR_MUTUAL;

	static const byte WAR_IN;

	static const byte WAR_OUT;

	static const byte ELECTION_DISABLED;

	static const byte ELECTION_FIRST_WEEK;

	static const byte ELECTION_SECOND_WEEK;

	GuildObjectImplementation();

	GuildObjectImplementation(DummyConstructorParameter* param);

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void rescheduleUpdateEvent(unsigned int seconds);

	Time* getNextUpdateTime();

	void sendBaselinesTo(SceneObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessage(CreatureObject* player, BaseMessage* msg, bool sendSelf = false);

	/**
	 * Adds the Player to the GuildMemberList. Doesn't do anything else!
	 * Use the GuildManager for adding and removing of players that sends messages etc.
	 * @param player The player's objectid to add
	 */
	void addMember(unsigned long long playerID);

	void removeMember(unsigned long long playerID);

	bool hasMember(unsigned long long playerID);

	GuildMemberInfo* getMember(unsigned long long playerID);

	unsigned long long getMember(int index);

	void setGuildMemberTitle(unsigned long long playerID, const String& title);

	String getGuildMemberTitle(unsigned long long playerID);

	void addSponsoredPlayer(unsigned long long playerID);

	void removeSponsoredPlayer(unsigned long long playerID);

	bool hasSponsoredPlayer(unsigned long long playerID);

	unsigned long long getSponsoredPlayer(int idx);

	int getSponsoredPlayerCount() const;

	void setChatRoom(ChatRoom* room);

	ChatRoom* getChatRoom() const;

	int getTotalMembers() const;

	unsigned long long getGuildLeaderID() const;

	GuildMemberList* getGuildMemberList();

	String getGuildAbbrev() const;

	void setGuildAbbrev(const String& abbrev);

	void setGuildLeaderID(unsigned long long leaderID);

	void setGuildID(unsigned int id);

	unsigned int getGuildID() const;

	void setGuildName(const String& gname);

	String getGuildName() const;

	void setPendingNewName(const String& newName);

	String getPendingNewName() const;

	void setPendingNewAbbrev(const String& newAbbrev);

	String getPendingNewAbbrev() const;

	void setRenamePending(bool pending);

	bool isRenamePending() const;

	void setRenamerID(unsigned long long id);

	unsigned long long getRenamerID() const;

	void resetRename();

	String getGuildKey() const;

	bool isGuildObject();

	bool isGuildLeader(CreatureObject* player) const;

	byte getWarStatus(unsigned long long guildoid);

	void setWarStatus(unsigned long long guildoid, byte status);

	bool isInWaringGuild(CreatureObject* creature);

	bool isAtWarWith(unsigned long long guildoid);

	bool hasDeclaredWarOn(unsigned long long guildoid);

	bool hasDeclaredWarBy(unsigned long long guildoid);

	VectorMap<unsigned long long, byte>* getWaringGuilds();

	bool hasMailPermission(unsigned long long playerID);

	bool hasSponsorPermission(unsigned long long playerID);

	bool hasAcceptPermission(unsigned long long playerID);

	bool hasDisbandPermission(unsigned long long playerID);

	bool hasKickPermission(unsigned long long playerID);

	bool hasNamePermission(unsigned long long playerID);

	bool hasTitlePermission(unsigned long long playerID);

	bool hasWarPermission(unsigned long long playerID);

	void toggleMemberPermission(unsigned long long playerID, byte permission);

	void setTransferPending(bool transfer);

	bool isTransferPending() const;

	bool isElectionEnabled();

	byte getElectionState() const;

	void setElectionState(byte state);

	void addCandidate(unsigned long long candidateoid);

	void setVote(unsigned long long voteroid, unsigned long long candidateoid);

	VectorMap<unsigned long long, int>* getCandidates();

	void resetElection(bool disable);

	void removeCandidate(unsigned long long candidateoid);

	bool isCandidate(unsigned long long candidateoid);

	unsigned long long getMemberWithHighestPermission();

	int writeRecursiveJSON(JSONSerializationType& j, int maxDepth, Vector<unsigned long long>* oidPath = NULL);

	WeakReference<GuildObject*> _this;

	operator const GuildObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~GuildObjectImplementation();

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

	friend class GuildObject;
};

class GuildObjectAdapter : public SceneObjectAdapter {
public:
	GuildObjectAdapter(GuildObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void rescheduleUpdateEvent(unsigned int seconds);

	void sendBaselinesTo(SceneObject* player);

	void addMember(unsigned long long playerID);

	void removeMember(unsigned long long playerID);

	bool hasMember(unsigned long long playerID);

	unsigned long long getMember(int index);

	void setGuildMemberTitle(unsigned long long playerID, const String& title);

	String getGuildMemberTitle(unsigned long long playerID);

	void addSponsoredPlayer(unsigned long long playerID);

	void removeSponsoredPlayer(unsigned long long playerID);

	bool hasSponsoredPlayer(unsigned long long playerID);

	unsigned long long getSponsoredPlayer(int idx);

	int getSponsoredPlayerCount() const;

	void setChatRoom(ChatRoom* room);

	ChatRoom* getChatRoom() const;

	int getTotalMembers() const;

	unsigned long long getGuildLeaderID() const;

	String getGuildAbbrev() const;

	void setGuildAbbrev(const String& abbrev);

	void setGuildLeaderID(unsigned long long leaderID);

	void setGuildID(unsigned int id);

	unsigned int getGuildID() const;

	void setGuildName(const String& gname);

	String getGuildName() const;

	void setPendingNewName(const String& newName);

	String getPendingNewName() const;

	void setPendingNewAbbrev(const String& newAbbrev);

	String getPendingNewAbbrev() const;

	void setRenamePending(bool pending);

	bool isRenamePending() const;

	void setRenamerID(unsigned long long id);

	unsigned long long getRenamerID() const;

	void resetRename();

	String getGuildKey() const;

	bool isGuildObject();

	bool isGuildLeader(CreatureObject* player) const;

	byte getWarStatus(unsigned long long guildoid);

	void setWarStatus(unsigned long long guildoid, byte status);

	bool isInWaringGuild(CreatureObject* creature);

	bool isAtWarWith(unsigned long long guildoid);

	bool hasDeclaredWarOn(unsigned long long guildoid);

	bool hasDeclaredWarBy(unsigned long long guildoid);

	bool hasMailPermission(unsigned long long playerID);

	bool hasSponsorPermission(unsigned long long playerID);

	bool hasAcceptPermission(unsigned long long playerID);

	bool hasDisbandPermission(unsigned long long playerID);

	bool hasKickPermission(unsigned long long playerID);

	bool hasNamePermission(unsigned long long playerID);

	bool hasTitlePermission(unsigned long long playerID);

	bool hasWarPermission(unsigned long long playerID);

	void toggleMemberPermission(unsigned long long playerID, byte permission);

	void setTransferPending(bool transfer);

	bool isTransferPending() const;

	bool isElectionEnabled();

	byte getElectionState() const;

	void setElectionState(byte state);

	void addCandidate(unsigned long long candidateoid);

	void setVote(unsigned long long voteroid, unsigned long long candidateoid);

	void resetElection(bool disable);

	void removeCandidate(unsigned long long candidateoid);

	bool isCandidate(unsigned long long candidateoid);

	unsigned long long getMemberWithHighestPermission();

};

class GuildObjectHelper : public DistributedObjectClassHelper, public Singleton<GuildObjectHelper> {
	static GuildObjectHelper* staticInitializer;

public:
	GuildObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GuildObjectHelper>;
};

} // namespace guild
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::guild;

namespace server {
namespace zone {
namespace objects {
namespace guild {

class GuildObjectPOD : public SceneObjectPOD {
public:
	Optional<ManagedReference<ChatRoomPOD* >> chatRoom;

	Optional<GuildMemberList> guildMembers;

	Optional<SortedVector<unsigned long long>> sponsoredPlayers;

	Optional<VectorMap<unsigned long long, byte>> waringGuilds;

	Optional<unsigned int> guildID;

	Optional<String> guildName;

	Optional<String> guildAbbrev;

	Optional<String> pendingNewName;

	Optional<String> pendingNewAbbrev;

	Optional<bool> renamePending;

	Optional<unsigned long long> renamerID;

	Optional<Time> nextUpdateTime;

	Optional<unsigned long long> guildLeaderID;

	Optional<byte> electionState;

	Optional<VectorMap<unsigned long long, int>> candidates;

	Optional<VectorMap<unsigned long long, unsigned long long>> votes;

	String _className;
	GuildObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~GuildObjectPOD();

};

} // namespace guild
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::guild;

#endif /*GUILDOBJECTPOD_H_*/
