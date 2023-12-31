/*
 *	autogen/server/zone/objects/player/sessions/FindSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "FindSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/waypoint/WaypointObject.h"

/*
 *	FindSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 1060689262,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_ADDWAYPOINT__FLOAT_FLOAT_STRING_,RPC_CLEARWAYPOINT__};

FindSession::FindSession(CreatureObject* pl) : Facade(DummyConstructorParameter::instance()) {
	FindSessionImplementation* _implementation = new FindSessionImplementation(pl);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("FindSession");
}

FindSession::FindSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("FindSession");
}

FindSession::~FindSession() {
}



int FindSession::initializeSession() {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int FindSession::cancelSession() {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int FindSession::clearSession() {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

void FindSession::initalizeFindMenu() {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->initalizeFindMenu();
	}
}

WaypointObject* FindSession::addWaypoint(float x, float y, const String& name) {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDWAYPOINT__FLOAT_FLOAT_STRING_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addAsciiParameter(name);

		return static_cast<WaypointObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->addWaypoint(x, y, name);
	}
}

void FindSession::findPlanetaryObject(String& maplocationtype) {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->findPlanetaryObject(maplocationtype);
	}
}

void FindSession::clearWaypoint() {
	FindSessionImplementation* _implementation = static_cast<FindSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARWAYPOINT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->clearWaypoint();
	}
}

DistributedObjectServant* FindSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* FindSession::_getImplementationForRead() const {
	return _impl;
}

void FindSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FindSessionImplementation
 */

FindSessionImplementation::FindSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


FindSessionImplementation::~FindSessionImplementation() {
}


void FindSessionImplementation::finalize() {
}

void FindSessionImplementation::_initializeImplementation() {
	_setClassHelper(FindSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FindSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FindSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* FindSessionImplementation::_getStub() {
	return _this.get();
}

FindSessionImplementation::operator const FindSession*() {
	return _this.get();
}

void FindSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void FindSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void FindSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void FindSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void FindSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void FindSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void FindSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void FindSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("FindSession");

}

void FindSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FindSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FindSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xfef3f39a: //FindSession.player
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;

	case 0xf7dba618: //FindSession.findSuiBox
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&findSuiBox, stream);
		return true;

	}

	return false;
}

void FindSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FindSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FindSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xfef3f39a; //FindSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf7dba618; //FindSession.findSuiBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&findSuiBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

FindSessionImplementation::FindSessionImplementation(CreatureObject* pl) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/FindSession.idl():  		Logger.setLoggingName("FindSession");
	Logger::setLoggingName("FindSession");
	// server/zone/objects/player/sessions/FindSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/FindSession.idl():  		initializeSession();
	initializeSession();
	// server/zone/objects/player/sessions/FindSession.idl():  		player = pl;
	player = pl;
}

int FindSessionImplementation::initializeSession() {
	// server/zone/objects/player/sessions/FindSession.idl():  		return 0;
	return 0;
}

int FindSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/FindSession.idl():  		CreatureObject play = player;
	ManagedReference<CreatureObject* > play = player;
	// server/zone/objects/player/sessions/FindSession.idl():  		clearSession(
	if (play)	// server/zone/objects/player/sessions/FindSession.idl():  			play.dropActiveSession(SessionFacadeType.FIND);
	play->dropActiveSession(SessionFacadeType::FIND);
	// server/zone/objects/player/sessions/FindSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/FindSession.idl():  		return 0;
	return 0;
}

int FindSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/FindSession.idl():  		player = null;
	player = NULL;
	// server/zone/objects/player/sessions/FindSession.idl():  		return 0;
	return 0;
}

/*
 *	FindSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


FindSessionAdapter::FindSessionAdapter(FindSession* obj) : FacadeAdapter(obj) {
}

void FindSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			
			int _m_res = initializeSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CLEARSESSION__:
		{
			
			int _m_res = clearSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ADDWAYPOINT__FLOAT_FLOAT_STRING_:
		{
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			 String name; inv->getAsciiParameter(name);
			
			DistributedObject* _m_res = addWaypoint(x, y, name);
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_CLEARWAYPOINT__:
		{
			
			clearWaypoint();
			
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

int FindSessionAdapter::initializeSession() {
	return (static_cast<FindSession*>(stub))->initializeSession();
}

int FindSessionAdapter::cancelSession() {
	return (static_cast<FindSession*>(stub))->cancelSession();
}

int FindSessionAdapter::clearSession() {
	return (static_cast<FindSession*>(stub))->clearSession();
}

WaypointObject* FindSessionAdapter::addWaypoint(float x, float y, const String& name) {
	return (static_cast<FindSession*>(stub))->addWaypoint(x, y, name);
}

void FindSessionAdapter::clearWaypoint() {
	(static_cast<FindSession*>(stub))->clearWaypoint();
}

/*
 *	FindSessionHelper
 */

FindSessionHelper* FindSessionHelper::staticInitializer = FindSessionHelper::instance();

FindSessionHelper::FindSessionHelper() {
	className = "FindSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void FindSessionHelper::finalizeHelper() {
	FindSessionHelper::finalize();
}

DistributedObject* FindSessionHelper::instantiateObject() {
	return new FindSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* FindSessionHelper::instantiateServant() {
	return new FindSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* FindSessionHelper::instantiatePOD() {
	return new FindSessionPOD();
}

DistributedObjectAdapter* FindSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FindSessionAdapter(static_cast<FindSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	FindSessionPOD
 */

FindSessionPOD::~FindSessionPOD() {
}

FindSessionPOD::FindSessionPOD(void) {
	_className = "FindSession";
}


void FindSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FindSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FindSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (player) {
	_nameHashCode = 0xfef3f39a; //FindSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (findSuiBox) {
	_nameHashCode = 0xf7dba618; //FindSession.findSuiBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiListBoxPOD* > >::toBinaryStream(&findSuiBox.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool FindSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xfef3f39a: //FindSession.player
		{
			ManagedWeakReference<CreatureObjectPOD* > _mnplayer;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnplayer, stream);
			player = std::move(_mnplayer);
		}
		return true;

	case 0xf7dba618: //FindSession.findSuiBox
		{
			ManagedReference<SuiListBoxPOD* > _mnfindSuiBox;
			TypeInfo<ManagedReference<SuiListBoxPOD* > >::parseFromBinaryStream(&_mnfindSuiBox, stream);
			findSuiBox = std::move(_mnfindSuiBox);
		}
		return true;

	}

	return false;
}

void FindSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FindSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void FindSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);

	TypeInfo<ManagedReference<SuiListBoxPOD* > >::toBinaryStream(&findSuiBox.value(), stream);


}

