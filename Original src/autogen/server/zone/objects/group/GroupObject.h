/*
 *	autogen/server/zone/objects/group/GroupObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef GROUPOBJECT_H_
#define GROUPOBJECT_H_

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
namespace chat {
namespace room {

class ChatRoom;

class ChatRoomPOD;

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

#include "server/zone/objects/group/GroupList.h"

#include "server/zone/managers/group/GroupManager.h"

#include "server/zone/objects/group/tasks/UpdateNearestMissionForGroupTask.h"

#include "server/chat/StringIdChatParameter.h"

#include "system/lang/ref/Reference.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/service/proto/BaseMessage.h"

namespace server {
namespace zone {
namespace objects {
namespace group {

class GroupObject : public SceneObject {
public:
	GroupObject();

	void sendBaselinesTo(SceneObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessage(CreatureObject* player, BaseMessage* msg, bool sendSelf = false);

	void updatePvPStatusNearCreature(CreatureObject* creature);

	void sendSystemMessage(StringIdChatParameter& param, bool sendLeader = true);

	void sendSystemMessage(const String& fullPath, bool sendLeader = true);

	void sendSystemMessage(StringIdChatParameter& param, CreatureObject* excluded);

	void addMember(CreatureObject* newMember);

	void removeMember(CreatureObject* member);

	void disband();

	void makeLeader(CreatureObject* player);

	bool hasMember(CreatureObject* member);

	bool hasMember(unsigned long long member);

	void startChatRoom(CreatureObject* leader);

	void destroyChatRoom();

	float getGroupHarvestModifier(CreatureObject* player);

	void calcGroupLevel();

	int getGroupLevel(bool includeFactionPets = true) const;

	int getFactionPetLevel() const;

	ChatRoom* getChatRoom() const;

	int getGroupSize();

	int getNumberOfPlayerMembers();

	Reference<CreatureObject* > getGroupMember(int index);

	void initializeLeader(CreatureObject* player);

	Reference<CreatureObject* > getLeader();

	GroupList* getGroupList();

	bool isGroupObject();

	bool hasSquadLeader();

	void addGroupModifiers();

	void removeGroupModifiers();

	bool isOtherMemberPlayingMusic(CreatureObject* player);

	int getLootRule() const;

	void setLootRule(int newRule);

	unsigned long long getMasterLooterID() const;

	void setMasterLooterID(unsigned long long newID);

	bool checkMasterLooter(CreatureObject* object);

	void scheduleUpdateNearestMissionForGroup(unsigned int planetCRC);

	void updateLootRules();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GroupObject(DummyConstructorParameter* param);

	virtual ~GroupObject();

	friend class GroupObjectHelper;
};

} // namespace group
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::group;

namespace server {
namespace zone {
namespace objects {
namespace group {

class GroupObjectImplementation : public SceneObjectImplementation {
	GroupList groupMembers;

	VectorMap<unsigned int, Reference<UpdateNearestMissionForGroupTask*> > updateNearestMissionForGroupTasks;

	ManagedReference<ChatRoom* > chatRoom;

	int groupLevel;

	int factionPetLevel;

	int lootRule;

	unsigned long long masterLooterID;

public:
	GroupObjectImplementation();

	GroupObjectImplementation(DummyConstructorParameter* param);

	void sendBaselinesTo(SceneObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessage(CreatureObject* player, BaseMessage* msg, bool sendSelf = false);

	void updatePvPStatusNearCreature(CreatureObject* creature);

	void sendSystemMessage(StringIdChatParameter& param, bool sendLeader = true);

	void sendSystemMessage(const String& fullPath, bool sendLeader = true);

	void sendSystemMessage(StringIdChatParameter& param, CreatureObject* excluded);

	void addMember(CreatureObject* newMember);

	void removeMember(CreatureObject* member);

	void disband();

	void makeLeader(CreatureObject* player);

	bool hasMember(CreatureObject* member);

	bool hasMember(unsigned long long member);

	void startChatRoom(CreatureObject* leader);

	void destroyChatRoom();

	float getGroupHarvestModifier(CreatureObject* player);

	void calcGroupLevel();

	int getGroupLevel(bool includeFactionPets = true) const;

	int getFactionPetLevel() const;

	ChatRoom* getChatRoom() const;

	int getGroupSize();

	int getNumberOfPlayerMembers();

	Reference<CreatureObject* > getGroupMember(int index);

	void initializeLeader(CreatureObject* player);

	Reference<CreatureObject* > getLeader();

	GroupList* getGroupList();

	bool isGroupObject();

	bool hasSquadLeader();

	void addGroupModifiers();

	void removeGroupModifiers();

private:
	void addGroupModifiers(CreatureObject* player);

	void removeGroupModifiers(CreatureObject* player);

public:
	bool isOtherMemberPlayingMusic(CreatureObject* player);

	int getLootRule() const;

	void setLootRule(int newRule);

	unsigned long long getMasterLooterID() const;

	void setMasterLooterID(unsigned long long newID);

	bool checkMasterLooter(CreatureObject* object);

	void scheduleUpdateNearestMissionForGroup(unsigned int planetCRC);

	void updateLootRules();

	WeakReference<GroupObject*> _this;

	operator const GroupObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~GroupObjectImplementation();

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

	friend class GroupObject;
};

class GroupObjectAdapter : public SceneObjectAdapter {
public:
	GroupObjectAdapter(GroupObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendBaselinesTo(SceneObject* player);

	void updatePvPStatusNearCreature(CreatureObject* creature);

	void sendSystemMessage(const String& fullPath, bool sendLeader);

	void addMember(CreatureObject* newMember);

	void removeMember(CreatureObject* member);

	void disband();

	void makeLeader(CreatureObject* player);

	bool hasMember(CreatureObject* member);

	bool hasMember(unsigned long long member);

	void startChatRoom(CreatureObject* leader);

	void destroyChatRoom();

	float getGroupHarvestModifier(CreatureObject* player);

	void calcGroupLevel();

	int getGroupLevel(bool includeFactionPets) const;

	int getFactionPetLevel() const;

	ChatRoom* getChatRoom() const;

	int getGroupSize();

	int getNumberOfPlayerMembers();

	Reference<CreatureObject* > getGroupMember(int index);

	void initializeLeader(CreatureObject* player);

	Reference<CreatureObject* > getLeader();

	bool isGroupObject();

	bool hasSquadLeader();

	void addGroupModifiers();

	void removeGroupModifiers();

	bool isOtherMemberPlayingMusic(CreatureObject* player);

	int getLootRule() const;

	void setLootRule(int newRule);

	unsigned long long getMasterLooterID() const;

	void setMasterLooterID(unsigned long long newID);

	bool checkMasterLooter(CreatureObject* object);

	void scheduleUpdateNearestMissionForGroup(unsigned int planetCRC);

	void updateLootRules();

};

class GroupObjectHelper : public DistributedObjectClassHelper, public Singleton<GroupObjectHelper> {
	static GroupObjectHelper* staticInitializer;

public:
	GroupObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GroupObjectHelper>;
};

} // namespace group
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::group;

namespace server {
namespace zone {
namespace objects {
namespace group {

class GroupObjectPOD : public SceneObjectPOD {
public:
	Optional<GroupList> groupMembers;

	Optional<ManagedReference<ChatRoomPOD* >> chatRoom;

	Optional<int> groupLevel;

	Optional<int> factionPetLevel;

	Optional<int> lootRule;

	Optional<unsigned long long> masterLooterID;

	String _className;
	GroupObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~GroupObjectPOD();

};

} // namespace group
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::group;

#endif /*GROUPOBJECTPOD_H_*/