/*
 *	autogen/server/login/LoginServer.cpp generated by engine3 IDL compiler 0.70
 */

#include "LoginServer.h"

#include "conf/ConfigManager.h"

#include "server/login/LoginClient.h"

#include "server/login/LoginProcessServerImplementation.h"

#include "server/login/LoginHandler.h"

#include "server/login/account/Account.h"

#include "server/login/account/AccountManager.h"

#include "server/login/packets/LoginClusterStatus.h"

#include "server/login/packets/LoginEnumCluster.h"

/*
 *	LoginServerStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 2339364972,RPC_INITIALIZE__,RPC_SHUTDOWN__,RPC_STARTMANAGERS__,RPC_STOPMANAGERS__,RPC_START__INT_INT_,RPC_STOP__,RPC_PRINTINFO__,};

LoginServer::LoginServer(ConfigManager* config) : ManagedService(DummyConstructorParameter::instance()) {
	LoginServerImplementation* _implementation = new LoginServerImplementation(config);
	_impl = _implementation;
	_implementation->_initializeImplementation();
	_impl->_setStub(this);
	_setClassName("LoginServer");
}

LoginServer::LoginServer(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("LoginServer");
}

LoginServer::~LoginServer() {
}



void LoginServer::initializeTransientMembers() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

LoginClient* LoginServer::createConnection(Socket* sock, SocketAddress& addr) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->createConnection(sock, addr);
	}
}

void LoginServer::initialize() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initialize();
	}
}

void LoginServer::shutdown() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SHUTDOWN__);

		method.executeWithVoidReturn();
	} else {
		_implementation->shutdown();
	}
}

void LoginServer::startManagers() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTMANAGERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->startManagers();
	}
}

void LoginServer::stopManagers() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOPMANAGERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->stopManagers();
	}
}

void LoginServer::start(int p, int mconn) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_START__INT_INT_);
		method.addSignedIntParameter(p);
		method.addSignedIntParameter(mconn);

		method.executeWithVoidReturn();
	} else {
		_implementation->start(p, mconn);
	}
}

void LoginServer::stop() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOP__);

		method.executeWithVoidReturn();
	} else {
		_implementation->stop();
	}
}

void LoginServer::handleMessage(LoginClient* client, Packet* message) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->handleMessage(client, message);
	}
}

void LoginServer::processMessage(Message* message) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->processMessage(message);
	}
}

bool LoginServer::handleError(ServiceClient* client, Exception& e) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->handleError(client, e);
	}
}

void LoginServer::printInfo() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PRINTINFO__);

		method.executeWithVoidReturn();
	} else {
		_implementation->printInfo();
	}
}

AccountManager* LoginServer::getAccountManager() {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getAccountManager();
	}
}

LoginClient* LoginServer::getLoginClient(ServiceClient* session) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getLoginClient(session);
	}
}

LoginEnumCluster* LoginServer::getLoginEnumClusterMessage(Account* account) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getLoginEnumClusterMessage(account);
	}
}

LoginClusterStatus* LoginServer::getLoginClusterStatusMessage(Account* account) {
	LoginServerImplementation* _implementation = static_cast<LoginServerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getLoginClusterStatusMessage(account);
	}
}

DistributedObjectServant* LoginServer::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* LoginServer::_getImplementationForRead() const {
	return _impl;
}

void LoginServer::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LoginServerImplementation
 */

LoginServerImplementation::LoginServerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


LoginServerImplementation::~LoginServerImplementation() {
}


void LoginServerImplementation::finalize() {
}

void LoginServerImplementation::_initializeImplementation() {
	_setClassHelper(LoginServerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LoginServerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LoginServer*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* LoginServerImplementation::_getStub() {
	return _this.get();
}

LoginServerImplementation::operator const LoginServer*() {
	return _this.get();
}

void LoginServerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void LoginServerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void LoginServerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void LoginServerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void LoginServerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void LoginServerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void LoginServerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void LoginServerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("LoginServer");

}

void LoginServerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LoginServerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LoginServerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedServiceImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void LoginServerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LoginServerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LoginServerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

AccountManager* LoginServerImplementation::getAccountManager() {
	// server/login/LoginServer.idl():  		return accountManager;
	return accountManager;
}

/*
 *	LoginServerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


LoginServerAdapter::LoginServerAdapter(LoginServer* obj) : ManagedServiceAdapter(obj) {
}

void LoginServerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_INITIALIZE__:
		{
			
			initialize();
			
		}
		break;
	case RPC_SHUTDOWN__:
		{
			
			shutdown();
			
		}
		break;
	case RPC_STARTMANAGERS__:
		{
			
			startManagers();
			
		}
		break;
	case RPC_STOPMANAGERS__:
		{
			
			stopManagers();
			
		}
		break;
	case RPC_START__INT_INT_:
		{
			int p = inv->getSignedIntParameter();
			int mconn = inv->getSignedIntParameter();
			
			start(p, mconn);
			
		}
		break;
	case RPC_STOP__:
		{
			
			stop();
			
		}
		break;
	case RPC_PRINTINFO__:
		{
			
			printInfo();
			
		}
		break;
	default:
		ManagedServiceAdapter::invokeMethod(methid, inv);
	}
}

void LoginServerAdapter::initializeTransientMembers() {
	(static_cast<LoginServer*>(stub))->initializeTransientMembers();
}

void LoginServerAdapter::initialize() {
	(static_cast<LoginServer*>(stub))->initialize();
}

void LoginServerAdapter::shutdown() {
	(static_cast<LoginServer*>(stub))->shutdown();
}

void LoginServerAdapter::startManagers() {
	(static_cast<LoginServer*>(stub))->startManagers();
}

void LoginServerAdapter::stopManagers() {
	(static_cast<LoginServer*>(stub))->stopManagers();
}

void LoginServerAdapter::start(int p, int mconn) {
	(static_cast<LoginServer*>(stub))->start(p, mconn);
}

void LoginServerAdapter::stop() {
	(static_cast<LoginServer*>(stub))->stop();
}

void LoginServerAdapter::printInfo() {
	(static_cast<LoginServer*>(stub))->printInfo();
}

/*
 *	LoginServerHelper
 */

LoginServerHelper* LoginServerHelper::staticInitializer = LoginServerHelper::instance();

LoginServerHelper::LoginServerHelper() {
	className = "LoginServer";

	Core::getObjectBroker()->registerClass(className, this);
}

void LoginServerHelper::finalizeHelper() {
	LoginServerHelper::finalize();
}

DistributedObject* LoginServerHelper::instantiateObject() {
	return new LoginServer(DummyConstructorParameter::instance());
}

DistributedObjectServant* LoginServerHelper::instantiateServant() {
	return new LoginServerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* LoginServerHelper::instantiatePOD() {
	return new LoginServerPOD();
}

DistributedObjectAdapter* LoginServerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LoginServerAdapter(static_cast<LoginServer*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	LoginServerPOD
 */

LoginServerPOD::~LoginServerPOD() {
}

LoginServerPOD::LoginServerPOD(void) {
	_className = "LoginServer";
}


void LoginServerPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LoginServerPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LoginServerPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServicePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool LoginServerPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedServicePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void LoginServerPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LoginServerPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void LoginServerPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedServicePOD::writeObjectCompact(stream);


}

