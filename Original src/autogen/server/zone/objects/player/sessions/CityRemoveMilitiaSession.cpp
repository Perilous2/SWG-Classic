/*
 *	autogen/server/zone/objects/player/sessions/CityRemoveMilitiaSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "CityRemoveMilitiaSession.h"

/*
 *	CityRemoveMilitiaSessionStub
 */

enum {RPC_GETMILITIAID__ = 1585133605,RPC_INITIALIZESESSION__,RPC_CANCELSESSION__,RPC_CLEARSESSION__};

CityRemoveMilitiaSession::CityRemoveMilitiaSession(CreatureObject* creature, CityRegion* city, unsigned long long militiaid, SceneObject* terminal) : Facade(DummyConstructorParameter::instance()) {
	CityRemoveMilitiaSessionImplementation* _implementation = new CityRemoveMilitiaSessionImplementation(creature, city, militiaid, terminal);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CityRemoveMilitiaSession");
}

CityRemoveMilitiaSession::CityRemoveMilitiaSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("CityRemoveMilitiaSession");
}

CityRemoveMilitiaSession::~CityRemoveMilitiaSession() {
}



unsigned long long CityRemoveMilitiaSession::getMilitiaID() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMILITIAID__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getMilitiaID();
	}
}

int CityRemoveMilitiaSession::initializeSession() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int CityRemoveMilitiaSession::cancelSession() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int CityRemoveMilitiaSession::clearSession() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

DistributedObjectServant* CityRemoveMilitiaSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CityRemoveMilitiaSession::_getImplementationForRead() const {
	return _impl;
}

void CityRemoveMilitiaSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CityRemoveMilitiaSessionImplementation
 */

CityRemoveMilitiaSessionImplementation::CityRemoveMilitiaSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


CityRemoveMilitiaSessionImplementation::~CityRemoveMilitiaSessionImplementation() {
}


void CityRemoveMilitiaSessionImplementation::finalize() {
}

void CityRemoveMilitiaSessionImplementation::_initializeImplementation() {
	_setClassHelper(CityRemoveMilitiaSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CityRemoveMilitiaSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CityRemoveMilitiaSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* CityRemoveMilitiaSessionImplementation::_getStub() {
	return _this.get();
}

CityRemoveMilitiaSessionImplementation::operator const CityRemoveMilitiaSession*() {
	return _this.get();
}

void CityRemoveMilitiaSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CityRemoveMilitiaSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CityRemoveMilitiaSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CityRemoveMilitiaSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("CityRemoveMilitiaSession");

}

void CityRemoveMilitiaSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CityRemoveMilitiaSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CityRemoveMilitiaSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xeef906b7: //CityRemoveMilitiaSession.creatureObject
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;

	case 0x3f728ac4: //CityRemoveMilitiaSession.cityRegion
		TypeInfo<ManagedWeakReference<CityRegion* > >::parseFromBinaryStream(&cityRegion, stream);
		return true;

	case 0x6f8fd1ec: //CityRemoveMilitiaSession.terminalObject
		TypeInfo<ManagedWeakReference<SceneObject* > >::parseFromBinaryStream(&terminalObject, stream);
		return true;

	case 0xce89787f: //CityRemoveMilitiaSession.militiaID
		TypeInfo<unsigned long long >::parseFromBinaryStream(&militiaID, stream);
		return true;

	}

	return false;
}

void CityRemoveMilitiaSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityRemoveMilitiaSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityRemoveMilitiaSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xeef906b7; //CityRemoveMilitiaSession.creatureObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x3f728ac4; //CityRemoveMilitiaSession.cityRegion
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CityRegion* > >::toBinaryStream(&cityRegion, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x6f8fd1ec; //CityRemoveMilitiaSession.terminalObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SceneObject* > >::toBinaryStream(&terminalObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xce89787f; //CityRemoveMilitiaSession.militiaID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&militiaID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

CityRemoveMilitiaSessionImplementation::CityRemoveMilitiaSessionImplementation(CreatureObject* creature, CityRegion* city, unsigned long long militiaid, SceneObject* terminal) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		Logger.setLoggingName("CityRemoveMilitiaSession");
	Logger::setLoggingName("CityRemoveMilitiaSession");
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		cityRegion = city;
	cityRegion = city;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		terminalObject = terminal;
	terminalObject = terminal;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		militiaID = militiaid;
	militiaID = militiaid;
}

unsigned long long CityRemoveMilitiaSessionImplementation::getMilitiaID() {
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return militiaID;
	return militiaID;
}

int CityRemoveMilitiaSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		CreatureObject creature = creatureObject;
	ManagedReference<CreatureObject* > creature = creatureObject;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return 
	if (creature)	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  			creature.dropActiveSession(SessionFacadeType.CITYMILITIA);
	creature->dropActiveSession(SessionFacadeType::CITYMILITIA);
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return 0;
	return 0;
}

int CityRemoveMilitiaSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return 0;
	return 0;
}

/*
 *	CityRemoveMilitiaSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CityRemoveMilitiaSessionAdapter::CityRemoveMilitiaSessionAdapter(CityRemoveMilitiaSession* obj) : FacadeAdapter(obj) {
}

void CityRemoveMilitiaSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETMILITIAID__:
		{
			
			unsigned long long _m_res = getMilitiaID();
			resp->insertLong(_m_res);
		}
		break;
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
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

unsigned long long CityRemoveMilitiaSessionAdapter::getMilitiaID() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->getMilitiaID();
}

int CityRemoveMilitiaSessionAdapter::initializeSession() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->initializeSession();
}

int CityRemoveMilitiaSessionAdapter::cancelSession() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->cancelSession();
}

int CityRemoveMilitiaSessionAdapter::clearSession() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->clearSession();
}

/*
 *	CityRemoveMilitiaSessionHelper
 */

CityRemoveMilitiaSessionHelper* CityRemoveMilitiaSessionHelper::staticInitializer = CityRemoveMilitiaSessionHelper::instance();

CityRemoveMilitiaSessionHelper::CityRemoveMilitiaSessionHelper() {
	className = "CityRemoveMilitiaSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void CityRemoveMilitiaSessionHelper::finalizeHelper() {
	CityRemoveMilitiaSessionHelper::finalize();
}

DistributedObject* CityRemoveMilitiaSessionHelper::instantiateObject() {
	return new CityRemoveMilitiaSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityRemoveMilitiaSessionHelper::instantiateServant() {
	return new CityRemoveMilitiaSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* CityRemoveMilitiaSessionHelper::instantiatePOD() {
	return new CityRemoveMilitiaSessionPOD();
}

DistributedObjectAdapter* CityRemoveMilitiaSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityRemoveMilitiaSessionAdapter(static_cast<CityRemoveMilitiaSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CityRemoveMilitiaSessionPOD
 */

CityRemoveMilitiaSessionPOD::~CityRemoveMilitiaSessionPOD() {
}

CityRemoveMilitiaSessionPOD::CityRemoveMilitiaSessionPOD(void) {
	_className = "CityRemoveMilitiaSession";
}


void CityRemoveMilitiaSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityRemoveMilitiaSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityRemoveMilitiaSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (creatureObject) {
	_nameHashCode = 0xeef906b7; //CityRemoveMilitiaSession.creatureObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&creatureObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (cityRegion) {
	_nameHashCode = 0x3f728ac4; //CityRemoveMilitiaSession.cityRegion
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CityRegionPOD* > >::toBinaryStream(&cityRegion.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (terminalObject) {
	_nameHashCode = 0x6f8fd1ec; //CityRemoveMilitiaSession.terminalObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SceneObjectPOD* > >::toBinaryStream(&terminalObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (militiaID) {
	_nameHashCode = 0xce89787f; //CityRemoveMilitiaSession.militiaID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&militiaID.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool CityRemoveMilitiaSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xeef906b7: //CityRemoveMilitiaSession.creatureObject
		{
			ManagedWeakReference<CreatureObjectPOD* > _mncreatureObject;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mncreatureObject, stream);
			creatureObject = std::move(_mncreatureObject);
		}
		return true;

	case 0x3f728ac4: //CityRemoveMilitiaSession.cityRegion
		{
			ManagedWeakReference<CityRegionPOD* > _mncityRegion;
			TypeInfo<ManagedWeakReference<CityRegionPOD* > >::parseFromBinaryStream(&_mncityRegion, stream);
			cityRegion = std::move(_mncityRegion);
		}
		return true;

	case 0x6f8fd1ec: //CityRemoveMilitiaSession.terminalObject
		{
			ManagedWeakReference<SceneObjectPOD* > _mnterminalObject;
			TypeInfo<ManagedWeakReference<SceneObjectPOD* > >::parseFromBinaryStream(&_mnterminalObject, stream);
			terminalObject = std::move(_mnterminalObject);
		}
		return true;

	case 0xce89787f: //CityRemoveMilitiaSession.militiaID
		{
			unsigned long long _mnmilitiaID;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mnmilitiaID, stream);
			militiaID = std::move(_mnmilitiaID);
		}
		return true;

	}

	return false;
}

void CityRemoveMilitiaSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CityRemoveMilitiaSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void CityRemoveMilitiaSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&creatureObject.value(), stream);

	TypeInfo<ManagedWeakReference<CityRegionPOD* > >::toBinaryStream(&cityRegion.value(), stream);

	TypeInfo<ManagedWeakReference<SceneObjectPOD* > >::toBinaryStream(&terminalObject.value(), stream);

	TypeInfo<unsigned long long >::toBinaryStream(&militiaID.value(), stream);


}

