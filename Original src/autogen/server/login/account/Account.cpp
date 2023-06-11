/*
 *	autogen/server/login/account/Account.cpp generated by engine3 IDL compiler 0.70
 */

#include "Account.h"

/*
 *	AccountStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 2608110191,RPC_SETACTIVE__BOOL_,RPC_SETACCOUNTID__INT_,RPC_SETSTATIONID__INT_,RPC_SETADMINLEVEL__INT_,RPC_SETUSERNAME__STRING_,RPC_SETBANEXPIRES__INT_,RPC_SETBANREASON__STRING_,RPC_SETSALT__STRING_,RPC_SETBANADMIN__INT_,RPC_GETBANADMIN__,RPC_SETTIMECREATED__INT_,RPC_ISACTIVE__,RPC_GETACCOUNTID__,RPC_GETSTATIONID__,RPC_GETADMINLEVEL__,RPC_GETUSERNAME__,RPC_GETSALT__,RPC_GETTIMECREATED__,RPC_UPDATEFROMDATABASE__,RPC_UPDATEACCOUNT__,RPC_UPDATECHARACTERS__,RPC_UPDATEGALAXYBANS__,RPC_GETBANEXPIRES__,RPC_GETBANREASON__,RPC_ISBANNED__,RPC_REMOVEGALAXYBAN__INT_,RPC_ISSQLLOADED__,RPC_SETSESSIONID__STRING_,RPC_GETSESSIONID__};

Account::Account() : ManagedObject(DummyConstructorParameter::instance()) {
	AccountImplementation* _implementation = new AccountImplementation();
	_impl = _implementation;
	_implementation->_initializeImplementation();
	_impl->_setStub(this);
	_setClassName("Account");
}

Account::Account(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("Account");
}

Account::~Account() {
}



void Account::initializeTransientMembers() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void Account::setActive(bool act) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACTIVE__BOOL_);
		method.addBooleanParameter(act);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setActive(act);
	}
}

void Account::setAccountID(unsigned int accountid) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCOUNTID__INT_);
		method.addUnsignedIntParameter(accountid);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setAccountID(accountid);
	}
}

void Account::setStationID(unsigned int stationid) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSTATIONID__INT_);
		method.addUnsignedIntParameter(stationid);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setStationID(stationid);
	}
}

void Account::setAdminLevel(unsigned int adminlvl) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETADMINLEVEL__INT_);
		method.addUnsignedIntParameter(adminlvl);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setAdminLevel(adminlvl);
	}
}

void Account::setUsername(const String& usern) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUSERNAME__STRING_);
		method.addAsciiParameter(usern);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setUsername(usern);
	}
}

void Account::setBanExpires(unsigned int expires) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBANEXPIRES__INT_);
		method.addUnsignedIntParameter(expires);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setBanExpires(expires);
	}
}

void Account::setBanReason(const String& reason) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBANREASON__STRING_);
		method.addAsciiParameter(reason);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setBanReason(reason);
	}
}

void Account::setSalt(const String& s) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSALT__STRING_);
		method.addAsciiParameter(s);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setSalt(s);
	}
}

void Account::setBanAdmin(unsigned int value) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBANADMIN__INT_);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setBanAdmin(value);
	}
}

unsigned int Account::getBanAdmin() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBANADMIN__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getBanAdmin();
	}
}

void Account::setTimeCreated(unsigned int seconds) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTIMECREATED__INT_);
		method.addUnsignedIntParameter(seconds);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setTimeCreated(seconds);
	}
}

bool Account::isActive() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISACTIVE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isActive();
	}
}

unsigned int Account::getAccountID() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACCOUNTID__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getAccountID();
	}
}

Reference<GalaxyAccountInfo* > Account::getGalaxyAccountInfo(const String& galaxyName) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getGalaxyAccountInfo(galaxyName);
	}
}

GalaxyAccountInfoMap* Account::getGalaxyAccountInfo() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getGalaxyAccountInfo();
	}
}

unsigned int Account::getStationID() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATIONID__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getStationID();
	}
}

unsigned int Account::getAdminLevel() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETADMINLEVEL__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getAdminLevel();
	}
}

String Account::getUsername() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETUSERNAME__);

		String _return_getUsername;
		method.executeWithAsciiReturn(_return_getUsername);
		return _return_getUsername;
	} else {
		return _implementation->getUsername();
	}
}

String Account::getSalt() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSALT__);

		String _return_getSalt;
		method.executeWithAsciiReturn(_return_getSalt);
		return _return_getSalt;
	} else {
		return _implementation->getSalt();
	}
}

unsigned int Account::getTimeCreated() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMECREATED__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getTimeCreated();
	}
}

void Account::updateFromDatabase() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEFROMDATABASE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->updateFromDatabase();
	}
}

void Account::updateAccount() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEACCOUNT__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->updateAccount();
	}
}

void Account::updateCharacters() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECHARACTERS__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->updateCharacters();
	}
}

void Account::updateGalaxyBans() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEGALAXYBANS__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->updateGalaxyBans();
	}
}

unsigned int Account::getBanExpires() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBANEXPIRES__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getBanExpires();
	}
}

String Account::getBanReason() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBANREASON__);

		String _return_getBanReason;
		method.executeWithAsciiReturn(_return_getBanReason);
		return _return_getBanReason;
	} else {
		return _implementation->getBanReason();
	}
}

bool Account::isBanned() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBANNED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isBanned();
	}
}

CharacterList* Account::getCharacterList() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getCharacterList();
	}
}

const GalaxyBanEntry* Account::getGalaxyBan(unsigned const int galaxy) const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getGalaxyBan(galaxy);
	}
}

GalaxyBanEntry* Account::getGalaxyBan(unsigned const int galaxy) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getGalaxyBan(galaxy);
	}
}

void Account::addGalaxyBan(GalaxyBanEntry* ban, unsigned int galaxy) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->addGalaxyBan(ban, galaxy);
	}
}

void Account::removeGalaxyBan(unsigned const int galaxy) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEGALAXYBAN__INT_);
		method.addUnsignedIntParameter(galaxy);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->removeGalaxyBan(galaxy);
	}
}

const CharacterListEntry* Account::getCharacterBan(unsigned const int galaxy, const String& name) const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getCharacterBan(galaxy, name);
	}
}

CharacterListEntry* Account::getCharacterBan(unsigned const int galaxy, const String& name) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getCharacterBan(galaxy, name);
	}
}

unsigned int Account::getAgeInDays() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getAgeInDays();
	}
}

bool Account::isSqlLoaded() const {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSQLLOADED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isSqlLoaded();
	}
}

void Account::setSessionId(const String& newSessionId) {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSESSIONID__STRING_);
		method.addAsciiParameter(newSessionId);

		method.executeWithVoidReturn();
	} else {
		_implementation->setSessionId(newSessionId);
	}
}

String Account::getSessionId() {
	AccountImplementation* _implementation = static_cast<AccountImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSESSIONID__);

		String _return_getSessionId;
		method.executeWithAsciiReturn(_return_getSessionId);
		return _return_getSessionId;
	} else {
		return _implementation->getSessionId();
	}
}

DistributedObjectServant* Account::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* Account::_getImplementationForRead() const {
	return _impl;
}

void Account::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AccountImplementation
 */

AccountImplementation::AccountImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


AccountImplementation::~AccountImplementation() {
}


void AccountImplementation::finalize() {
}

void AccountImplementation::_initializeImplementation() {
	_setClassHelper(AccountHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AccountImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Account*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AccountImplementation::_getStub() {
	return _this.get();
}

AccountImplementation::operator const Account*() {
	return _this.get();
}

void AccountImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AccountImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AccountImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AccountImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AccountImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AccountImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AccountImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AccountImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("Account");

}

void AccountImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AccountImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AccountImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcc242a49: //Account.created
		TypeInfo<unsigned int >::parseFromBinaryStream(&created, stream);
		return true;

	case 0xbcb3362e: //Account.galaxyAccountInfo
		TypeInfo<GalaxyAccountInfoMap >::parseFromBinaryStream(&galaxyAccountInfo, stream);
		return true;

	}

	return false;
}

void AccountImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AccountImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AccountImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xcc242a49; //Account.created
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&created, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xbcb3362e; //Account.galaxyAccountInfo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<GalaxyAccountInfoMap >::toBinaryStream(&galaxyAccountInfo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void AccountImplementation::writeJSON(nlohmann::json& j) {
	ManagedObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["created"] = created;

	thisObject["galaxyAccountInfo"] = galaxyAccountInfo;

	j["Account"] = thisObject;
}

void AccountImplementation::setActive(bool act) {
	// server/login/account/Account.idl():  		active = act;
	active = act;
}

void AccountImplementation::setAccountID(unsigned int accountid) {
	// server/login/account/Account.idl():  		accountID = accountid;
	accountID = accountid;
}

void AccountImplementation::setStationID(unsigned int stationid) {
	// server/login/account/Account.idl():  		stationID = stationid;
	stationID = stationid;
}

void AccountImplementation::setAdminLevel(unsigned int adminlvl) {
	// server/login/account/Account.idl():  		adminLevel = adminlvl;
	adminLevel = adminlvl;
}

void AccountImplementation::setUsername(const String& usern) {
	// server/login/account/Account.idl():  		username = usern;
	username = usern;
}

void AccountImplementation::setBanExpires(unsigned int expires) {
	// server/login/account/Account.idl():  		banExpires = expires;
	banExpires = expires;
}

void AccountImplementation::setBanReason(const String& reason) {
	// server/login/account/Account.idl():  		banReason = reason;
	banReason = reason;
}

void AccountImplementation::setSalt(const String& s) {
	// server/login/account/Account.idl():  		salt = s;
	salt = s;
}

void AccountImplementation::setBanAdmin(unsigned int value) {
	// server/login/account/Account.idl():  		banAdmin = value;
	banAdmin = value;
}

unsigned int AccountImplementation::getBanAdmin() {
	// server/login/account/Account.idl():  		return banAdmin;
	return banAdmin;
}

void AccountImplementation::setTimeCreated(unsigned int seconds) {
	// server/login/account/Account.idl():  		created = seconds;
	created = seconds;
}

bool AccountImplementation::isActive() {
	// server/login/account/Account.idl():  		return active == true;
	return active == true;
}

unsigned int AccountImplementation::getAccountID() const{
	// server/login/account/Account.idl():  		return accountID;
	return accountID;
}

GalaxyAccountInfoMap* AccountImplementation::getGalaxyAccountInfo() {
	// server/login/account/Account.idl():  		return galaxyAccountInfo;
	return (&galaxyAccountInfo);
}

unsigned int AccountImplementation::getStationID() const{
	// server/login/account/Account.idl():  		return stationID;
	return stationID;
}

unsigned int AccountImplementation::getAdminLevel() const{
	// server/login/account/Account.idl():  		return adminLevel;
	return adminLevel;
}

String AccountImplementation::getUsername() const{
	// server/login/account/Account.idl():  		return username;
	return username;
}

String AccountImplementation::getSalt() const{
	// server/login/account/Account.idl():  		return salt;
	return salt;
}

unsigned int AccountImplementation::getTimeCreated() const{
	// server/login/account/Account.idl():  		return created;
	return created;
}

unsigned int AccountImplementation::getBanExpires() const{
	// server/login/account/Account.idl():  		return banExpires;
	return banExpires;
}

String AccountImplementation::getBanReason() const{
	// server/login/account/Account.idl():  		return banReason;
	return banReason;
}

void AccountImplementation::removeGalaxyBan(unsigned const int galaxy) {
	// server/login/account/Account.idl():  		galaxyBans.drop(galaxy);
	(&galaxyBans)->drop(galaxy);
}

void AccountImplementation::setSessionId(const String& newSessionId) {
	// server/login/account/Account.idl():  	 sessionId = newSessionId;
	sessionId = newSessionId;
}

String AccountImplementation::getSessionId() {
	// server/login/account/Account.idl():  	 return sessionId;
	return sessionId;
}

/*
 *	AccountAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AccountAdapter::AccountAdapter(Account* obj) : ManagedObjectAdapter(obj) {
}

void AccountAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_SETACTIVE__BOOL_:
		{
			bool act = inv->getBooleanParameter();
			
			setActive(act);
			
		}
		break;
	case RPC_SETACCOUNTID__INT_:
		{
			unsigned int accountid = inv->getUnsignedIntParameter();
			
			setAccountID(accountid);
			
		}
		break;
	case RPC_SETSTATIONID__INT_:
		{
			unsigned int stationid = inv->getUnsignedIntParameter();
			
			setStationID(stationid);
			
		}
		break;
	case RPC_SETADMINLEVEL__INT_:
		{
			unsigned int adminlvl = inv->getUnsignedIntParameter();
			
			setAdminLevel(adminlvl);
			
		}
		break;
	case RPC_SETUSERNAME__STRING_:
		{
			 String usern; inv->getAsciiParameter(usern);
			
			setUsername(usern);
			
		}
		break;
	case RPC_SETBANEXPIRES__INT_:
		{
			unsigned int expires = inv->getUnsignedIntParameter();
			
			setBanExpires(expires);
			
		}
		break;
	case RPC_SETBANREASON__STRING_:
		{
			 String reason; inv->getAsciiParameter(reason);
			
			setBanReason(reason);
			
		}
		break;
	case RPC_SETSALT__STRING_:
		{
			 String s; inv->getAsciiParameter(s);
			
			setSalt(s);
			
		}
		break;
	case RPC_SETBANADMIN__INT_:
		{
			unsigned int value = inv->getUnsignedIntParameter();
			
			setBanAdmin(value);
			
		}
		break;
	case RPC_GETBANADMIN__:
		{
			
			unsigned int _m_res = getBanAdmin();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_SETTIMECREATED__INT_:
		{
			unsigned int seconds = inv->getUnsignedIntParameter();
			
			setTimeCreated(seconds);
			
		}
		break;
	case RPC_ISACTIVE__:
		{
			
			bool _m_res = isActive();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETACCOUNTID__:
		{
			
			unsigned int _m_res = getAccountID();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETSTATIONID__:
		{
			
			unsigned int _m_res = getStationID();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETADMINLEVEL__:
		{
			
			unsigned int _m_res = getAdminLevel();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETUSERNAME__:
		{
			
			String _m_res = getUsername();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETSALT__:
		{
			
			String _m_res = getSalt();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETTIMECREATED__:
		{
			
			unsigned int _m_res = getTimeCreated();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_UPDATEFROMDATABASE__:
		{
			
			updateFromDatabase();
			
		}
		break;
	case RPC_UPDATEACCOUNT__:
		{
			
			updateAccount();
			
		}
		break;
	case RPC_UPDATECHARACTERS__:
		{
			
			updateCharacters();
			
		}
		break;
	case RPC_UPDATEGALAXYBANS__:
		{
			
			updateGalaxyBans();
			
		}
		break;
	case RPC_GETBANEXPIRES__:
		{
			
			unsigned int _m_res = getBanExpires();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETBANREASON__:
		{
			
			String _m_res = getBanReason();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_ISBANNED__:
		{
			
			bool _m_res = isBanned();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_REMOVEGALAXYBAN__INT_:
		{
			unsigned const int galaxy = inv->getUnsignedIntParameter();
			
			removeGalaxyBan(galaxy);
			
		}
		break;
	case RPC_ISSQLLOADED__:
		{
			
			bool _m_res = isSqlLoaded();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETSESSIONID__STRING_:
		{
			 String newSessionId; inv->getAsciiParameter(newSessionId);
			
			setSessionId(newSessionId);
			
		}
		break;
	case RPC_GETSESSIONID__:
		{
			
			String _m_res = getSessionId();
			resp->insertAscii(_m_res);
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

void AccountAdapter::initializeTransientMembers() {
	(static_cast<Account*>(stub))->initializeTransientMembers();
}

void AccountAdapter::setActive(bool act) {
	(static_cast<Account*>(stub))->setActive(act);
}

void AccountAdapter::setAccountID(unsigned int accountid) {
	(static_cast<Account*>(stub))->setAccountID(accountid);
}

void AccountAdapter::setStationID(unsigned int stationid) {
	(static_cast<Account*>(stub))->setStationID(stationid);
}

void AccountAdapter::setAdminLevel(unsigned int adminlvl) {
	(static_cast<Account*>(stub))->setAdminLevel(adminlvl);
}

void AccountAdapter::setUsername(const String& usern) {
	(static_cast<Account*>(stub))->setUsername(usern);
}

void AccountAdapter::setBanExpires(unsigned int expires) {
	(static_cast<Account*>(stub))->setBanExpires(expires);
}

void AccountAdapter::setBanReason(const String& reason) {
	(static_cast<Account*>(stub))->setBanReason(reason);
}

void AccountAdapter::setSalt(const String& s) {
	(static_cast<Account*>(stub))->setSalt(s);
}

void AccountAdapter::setBanAdmin(unsigned int value) {
	(static_cast<Account*>(stub))->setBanAdmin(value);
}

unsigned int AccountAdapter::getBanAdmin() {
	return (static_cast<Account*>(stub))->getBanAdmin();
}

void AccountAdapter::setTimeCreated(unsigned int seconds) {
	(static_cast<Account*>(stub))->setTimeCreated(seconds);
}

bool AccountAdapter::isActive() {
	return (static_cast<Account*>(stub))->isActive();
}

unsigned int AccountAdapter::getAccountID() const {
	return (static_cast<Account*>(stub))->getAccountID();
}

unsigned int AccountAdapter::getStationID() const {
	return (static_cast<Account*>(stub))->getStationID();
}

unsigned int AccountAdapter::getAdminLevel() const {
	return (static_cast<Account*>(stub))->getAdminLevel();
}

String AccountAdapter::getUsername() const {
	return (static_cast<Account*>(stub))->getUsername();
}

String AccountAdapter::getSalt() const {
	return (static_cast<Account*>(stub))->getSalt();
}

unsigned int AccountAdapter::getTimeCreated() const {
	return (static_cast<Account*>(stub))->getTimeCreated();
}

void AccountAdapter::updateFromDatabase() {
	(static_cast<Account*>(stub))->updateFromDatabase();
}

void AccountAdapter::updateAccount() {
	(static_cast<Account*>(stub))->updateAccount();
}

void AccountAdapter::updateCharacters() {
	(static_cast<Account*>(stub))->updateCharacters();
}

void AccountAdapter::updateGalaxyBans() {
	(static_cast<Account*>(stub))->updateGalaxyBans();
}

unsigned int AccountAdapter::getBanExpires() const {
	return (static_cast<Account*>(stub))->getBanExpires();
}

String AccountAdapter::getBanReason() const {
	return (static_cast<Account*>(stub))->getBanReason();
}

bool AccountAdapter::isBanned() const {
	return (static_cast<Account*>(stub))->isBanned();
}

void AccountAdapter::removeGalaxyBan(unsigned const int galaxy) {
	(static_cast<Account*>(stub))->removeGalaxyBan(galaxy);
}

bool AccountAdapter::isSqlLoaded() const {
	return (static_cast<Account*>(stub))->isSqlLoaded();
}

void AccountAdapter::setSessionId(const String& newSessionId) {
	(static_cast<Account*>(stub))->setSessionId(newSessionId);
}

String AccountAdapter::getSessionId() {
	return (static_cast<Account*>(stub))->getSessionId();
}

/*
 *	AccountHelper
 */

AccountHelper* AccountHelper::staticInitializer = AccountHelper::instance();

AccountHelper::AccountHelper() {
	className = "Account";

	Core::getObjectBroker()->registerClass(className, this);
}

void AccountHelper::finalizeHelper() {
	AccountHelper::finalize();
}

DistributedObject* AccountHelper::instantiateObject() {
	return new Account(DummyConstructorParameter::instance());
}

DistributedObjectServant* AccountHelper::instantiateServant() {
	return new AccountImplementation();
}

DistributedObjectPOD* AccountHelper::instantiatePOD() {
	return new AccountPOD();
}

DistributedObjectAdapter* AccountHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AccountAdapter(static_cast<Account*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	AccountPOD
 */

AccountPOD::~AccountPOD() {
}

AccountPOD::AccountPOD(void) {
	_className = "Account";
}


void AccountPOD::writeJSON(nlohmann::json& j) {
	ManagedObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (created)
		thisObject["created"] = created.value();

	if (galaxyAccountInfo)
		thisObject["galaxyAccountInfo"] = galaxyAccountInfo.value();

	j["Account"] = thisObject;
}


void AccountPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AccountPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AccountPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (created) {
	_nameHashCode = 0xcc242a49; //Account.created
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&created.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (galaxyAccountInfo) {
	_nameHashCode = 0xbcb3362e; //Account.galaxyAccountInfo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<GalaxyAccountInfoMap >::toBinaryStream(&galaxyAccountInfo.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool AccountPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcc242a49: //Account.created
		{
			unsigned int _mncreated;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mncreated, stream);
			created = std::move(_mncreated);
		}
		return true;

	case 0xbcb3362e: //Account.galaxyAccountInfo
		{
			GalaxyAccountInfoMap _mngalaxyAccountInfo;
			TypeInfo<GalaxyAccountInfoMap >::parseFromBinaryStream(&_mngalaxyAccountInfo, stream);
			galaxyAccountInfo = std::move(_mngalaxyAccountInfo);
		}
		return true;

	}

	return false;
}

void AccountPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AccountPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void AccountPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedObjectPOD::writeObjectCompact(stream);

	TypeInfo<unsigned int >::toBinaryStream(&created.value(), stream);

	TypeInfo<GalaxyAccountInfoMap >::toBinaryStream(&galaxyAccountInfo.value(), stream);


}
