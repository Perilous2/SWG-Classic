/*
 *	autogen/server/zone/objects/player/sessions/admin/PlayerManagementSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef PLAYERMANAGEMENTSESSION_H_
#define PLAYERMANAGEMENTSESSION_H_

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
namespace managers {
namespace player {

class PlayerManager;

class PlayerManagerPOD;

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace login {
namespace account {

class Account;

class AccountPOD;

} // namespace account
} // namespace login
} // namespace server

using namespace server::login::account;

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

#include "server/zone/objects/player/sui/inputbox/SuiInputBox.h"

#include "server/zone/objects/player/sui/messagebox/SuiMessageBox.h"

#include "engine/log/Logger.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {
namespace admin {

class PlayerManagementSession : public Facade {
public:
	PlayerManagementSession(Account* account, CreatureObject* adm);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addAccountSui(SuiListBox* box);

	void ban(const int tablevel, unsigned const int galaxy, const String& gname, const String& name);

	void getPlayerInfo(const int tablevel, const String& firstName);

	void sendAccountInfo();

	void sendBanDuration();

	void parseBanDuration(const String& duration);

	void sendBanReason(bool unban = false);

	void setBanReason(const String& reason);

	void showBanSummary();

	void showUnbanSummary();

	void completeBan();

	String getBanDuration(unsigned int timestamp);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlayerManagementSession(DummyConstructorParameter* param);

	virtual ~PlayerManagementSession();

	friend class PlayerManagementSessionHelper;
};

} // namespace admin
} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions::admin;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {
namespace admin {

class PlayerManagementSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > admin;

	ManagedReference<SuiListBox* > accountBox;

	ManagedReference<SuiInputBox* > durationBox;

	ManagedReference<SuiInputBox* > reasonBox;

	ManagedReference<SuiListBox* > summaryBox;

	ManagedReference<SuiMessageBox* > unbanSummaryBox;

	ManagedReference<PlayerManager* > playerManager;

	int banType;

	int banMode;

	ManagedReference<Account* > targetAccount;

	unsigned int galaxyID;

	String galaxyName;

	unsigned int banExpiration;

	String banReason;

	String targetName;

	static const int NONE = 0;

	static const int ACCOUNT = 1;

	static const int GALAXY = 2;

	static const int CHARACTER = 3;

	static const int BAN = 1;

	static const int UNBAN = 2;

public:
	PlayerManagementSessionImplementation(Account* account, CreatureObject* adm);

	PlayerManagementSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addAccountSui(SuiListBox* box);

	void ban(const int tablevel, unsigned const int galaxy, const String& gname, const String& name);

	void getPlayerInfo(const int tablevel, const String& firstName);

	void sendAccountInfo();

	void sendBanDuration();

	void parseBanDuration(const String& duration);

	void sendBanReason(bool unban = false);

	void setBanReason(const String& reason);

	void showBanSummary();

	void showUnbanSummary();

	void completeBan();

	String getBanDuration(unsigned int timestamp);

	WeakReference<PlayerManagementSession*> _this;

	operator const PlayerManagementSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlayerManagementSessionImplementation();

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

	friend class PlayerManagementSession;
};

class PlayerManagementSessionAdapter : public FacadeAdapter {
public:
	PlayerManagementSessionAdapter(PlayerManagementSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void addAccountSui(SuiListBox* box);

	void ban(const int tablevel, unsigned const int galaxy, const String& gname, const String& name);

	void getPlayerInfo(const int tablevel, const String& firstName);

	void sendAccountInfo();

	void sendBanDuration();

	void parseBanDuration(const String& duration);

	void sendBanReason(bool unban);

	void setBanReason(const String& reason);

	void showBanSummary();

	void showUnbanSummary();

	void completeBan();

	String getBanDuration(unsigned int timestamp);

};

class PlayerManagementSessionHelper : public DistributedObjectClassHelper, public Singleton<PlayerManagementSessionHelper> {
	static PlayerManagementSessionHelper* staticInitializer;

public:
	PlayerManagementSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerManagementSessionHelper>;
};

} // namespace admin
} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions::admin;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {
namespace admin {

class PlayerManagementSessionPOD : public FacadePOD {
public:
	Optional<ManagedWeakReference<CreatureObjectPOD* >> admin;

	Optional<ManagedReference<SuiListBoxPOD* >> accountBox;

	Optional<ManagedReference<SuiInputBoxPOD* >> durationBox;

	Optional<ManagedReference<SuiInputBoxPOD* >> reasonBox;

	Optional<ManagedReference<SuiListBoxPOD* >> summaryBox;

	Optional<ManagedReference<SuiMessageBoxPOD* >> unbanSummaryBox;

	Optional<ManagedReference<PlayerManagerPOD* >> playerManager;

	Optional<int> banType;

	Optional<int> banMode;

	Optional<ManagedReference<AccountPOD* >> targetAccount;

	Optional<unsigned int> galaxyID;

	Optional<String> galaxyName;

	Optional<unsigned int> banExpiration;

	Optional<String> banReason;

	Optional<String> targetName;

	String _className;
	PlayerManagementSessionPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~PlayerManagementSessionPOD();

};

} // namespace admin
} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions::admin;

#endif /*PLAYERMANAGEMENTSESSIONPOD_H_*/
