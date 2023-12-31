/*
 *	autogen/server/login/account/Account.h generated by engine3 IDL compiler 0.70
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

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

#include "server/login/objects/CharacterList.h"

#include "server/login/objects/CharacterListEntry.h"

#include "server/login/objects/GalaxyBanEntry.h"

#include "server/login/account/GalaxyAccountInfo.h"

#include "server/login/account/GalaxyAccountInfoMap.h"

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace login {
namespace account {

class Account : public ManagedObject {
public:
	Account();

	void initializeTransientMembers();

	void setActive(bool act);

	void setAccountID(unsigned int accountid);

	void setStationID(unsigned int stationid);

	void setAdminLevel(unsigned int adminlvl);

	void setUsername(const String& usern);

	void setBanExpires(unsigned int expires);

	void setBanReason(const String& reason);

	void setSalt(const String& s);

	void setBanAdmin(unsigned int value);

	unsigned int getBanAdmin();

	void setTimeCreated(unsigned int seconds);

	bool isActive();

	unsigned int getAccountID() const;

	Reference<GalaxyAccountInfo* > getGalaxyAccountInfo(const String& galaxyName);

	GalaxyAccountInfoMap* getGalaxyAccountInfo();

	unsigned int getStationID() const;

	unsigned int getAdminLevel() const;

	String getUsername() const;

	String getSalt() const;

	unsigned int getTimeCreated() const;

	void updateFromDatabase();

	void updateAccount();

	void updateCharacters();

	void updateGalaxyBans();

	unsigned int getBanExpires() const;

	String getBanReason() const;

	bool isBanned() const;

	CharacterList* getCharacterList();

	const GalaxyBanEntry* getGalaxyBan(unsigned const int galaxy) const;

	GalaxyBanEntry* getGalaxyBan(unsigned const int galaxy);

	void addGalaxyBan(GalaxyBanEntry* ban, unsigned int galaxy);

	void removeGalaxyBan(unsigned const int galaxy);

	const CharacterListEntry* getCharacterBan(unsigned const int galaxy, const String& name) const;

	CharacterListEntry* getCharacterBan(unsigned const int galaxy, const String& name);

	unsigned int getAgeInDays() const;

	bool isSqlLoaded() const;

	void setSessionId(const String& newSessionId);

	String getSessionId();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Account(DummyConstructorParameter* param);

	virtual ~Account();

	friend class AccountHelper;
};

} // namespace account
} // namespace login
} // namespace server

using namespace server::login::account;

namespace server {
namespace login {
namespace account {

class AccountImplementation : public ManagedObjectImplementation, public Logger {
protected:
	bool active;

	String username;

	String salt;

	unsigned int accountID;

	unsigned int stationID;

	unsigned int adminLevel;

	unsigned int created;

	Reference<CharacterList* > characterList;

	VectorMap<unsigned int, Reference<GalaxyBanEntry*> > galaxyBans;

	GalaxyAccountInfoMap galaxyAccountInfo;

	unsigned int banExpires;

	String banReason;

	unsigned int banAdmin;

	String sessionId;

public:
	AccountImplementation();

	AccountImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void setActive(bool act);

	void setAccountID(unsigned int accountid);

	void setStationID(unsigned int stationid);

	void setAdminLevel(unsigned int adminlvl);

	void setUsername(const String& usern);

	void setBanExpires(unsigned int expires);

	void setBanReason(const String& reason);

	void setSalt(const String& s);

	void setBanAdmin(unsigned int value);

	unsigned int getBanAdmin();

	void setTimeCreated(unsigned int seconds);

	bool isActive();

	unsigned int getAccountID() const;

	Reference<GalaxyAccountInfo* > getGalaxyAccountInfo(const String& galaxyName);

	GalaxyAccountInfoMap* getGalaxyAccountInfo();

	unsigned int getStationID() const;

	unsigned int getAdminLevel() const;

	String getUsername() const;

	String getSalt() const;

	unsigned int getTimeCreated() const;

	void updateFromDatabase();

	void updateAccount();

	void updateCharacters();

	void updateGalaxyBans();

	unsigned int getBanExpires() const;

	String getBanReason() const;

	bool isBanned() const;

	CharacterList* getCharacterList();

	const GalaxyBanEntry* getGalaxyBan(unsigned const int galaxy) const;

	GalaxyBanEntry* getGalaxyBan(unsigned const int galaxy);

	void addGalaxyBan(GalaxyBanEntry* ban, unsigned int galaxy);

	void removeGalaxyBan(unsigned const int galaxy);

	const CharacterListEntry* getCharacterBan(unsigned const int galaxy, const String& name) const;

	CharacterListEntry* getCharacterBan(unsigned const int galaxy, const String& name);

	unsigned int getAgeInDays() const;

	bool isSqlLoaded() const;

	void setSessionId(const String& newSessionId);

	String getSessionId();

	WeakReference<Account*> _this;

	operator const Account*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~AccountImplementation();

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

	friend class Account;
};

class AccountAdapter : public ManagedObjectAdapter {
public:
	AccountAdapter(Account* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void setActive(bool act);

	void setAccountID(unsigned int accountid);

	void setStationID(unsigned int stationid);

	void setAdminLevel(unsigned int adminlvl);

	void setUsername(const String& usern);

	void setBanExpires(unsigned int expires);

	void setBanReason(const String& reason);

	void setSalt(const String& s);

	void setBanAdmin(unsigned int value);

	unsigned int getBanAdmin();

	void setTimeCreated(unsigned int seconds);

	bool isActive();

	unsigned int getAccountID() const;

	unsigned int getStationID() const;

	unsigned int getAdminLevel() const;

	String getUsername() const;

	String getSalt() const;

	unsigned int getTimeCreated() const;

	void updateFromDatabase();

	void updateAccount();

	void updateCharacters();

	void updateGalaxyBans();

	unsigned int getBanExpires() const;

	String getBanReason() const;

	bool isBanned() const;

	void removeGalaxyBan(unsigned const int galaxy);

	bool isSqlLoaded() const;

	void setSessionId(const String& newSessionId);

	String getSessionId();

};

class AccountHelper : public DistributedObjectClassHelper, public Singleton<AccountHelper> {
	static AccountHelper* staticInitializer;

public:
	AccountHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AccountHelper>;
};

} // namespace account
} // namespace login
} // namespace server

using namespace server::login::account;

namespace server {
namespace login {
namespace account {

class AccountPOD : public ManagedObjectPOD {
public:
	Optional<unsigned int> created;

	Optional<GalaxyAccountInfoMap> galaxyAccountInfo;

	String _className;
	AccountPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~AccountPOD();

};

} // namespace account
} // namespace login
} // namespace server

using namespace server::login::account;

#endif /*ACCOUNTPOD_H_*/
