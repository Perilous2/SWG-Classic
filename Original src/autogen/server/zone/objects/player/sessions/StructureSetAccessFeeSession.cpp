/*
 *	autogen/server/zone/objects/player/sessions/StructureSetAccessFeeSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "StructureSetAccessFeeSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/building/BuildingObject.h"

/*
 *	StructureSetAccessFeeSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 596554260,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_PROMPTSETACCESSFEE__,RPC_SETACCESSFEE__INT_,RPC_PROMPTSETACCESSDURATION__,RPC_SETACCESSDURATION__INT_};

StructureSetAccessFeeSession::StructureSetAccessFeeSession(CreatureObject* play, BuildingObject* struc) : Facade(DummyConstructorParameter::instance()) {
	StructureSetAccessFeeSessionImplementation* _implementation = new StructureSetAccessFeeSessionImplementation(play, struc);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("StructureSetAccessFeeSession");
}

StructureSetAccessFeeSession::StructureSetAccessFeeSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("StructureSetAccessFeeSession");
}

StructureSetAccessFeeSession::~StructureSetAccessFeeSession() {
}



int StructureSetAccessFeeSession::initializeSession() {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int StructureSetAccessFeeSession::cancelSession() {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int StructureSetAccessFeeSession::clearSession() {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

void StructureSetAccessFeeSession::promptSetAccessFee() {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTSETACCESSFEE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->promptSetAccessFee();
	}
}

void StructureSetAccessFeeSession::setAccessFee(const int fee) {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCESSFEE__INT_);
		method.addSignedIntParameter(fee);

		method.executeWithVoidReturn();
	} else {
		_implementation->setAccessFee(fee);
	}
}

void StructureSetAccessFeeSession::promptSetAccessDuration() {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTSETACCESSDURATION__);

		method.executeWithVoidReturn();
	} else {
		_implementation->promptSetAccessDuration();
	}
}

void StructureSetAccessFeeSession::setAccessDuration(const int duration) {
	StructureSetAccessFeeSessionImplementation* _implementation = static_cast<StructureSetAccessFeeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCESSDURATION__INT_);
		method.addSignedIntParameter(duration);

		method.executeWithVoidReturn();
	} else {
		_implementation->setAccessDuration(duration);
	}
}

DistributedObjectServant* StructureSetAccessFeeSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* StructureSetAccessFeeSession::_getImplementationForRead() const {
	return _impl;
}

void StructureSetAccessFeeSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StructureSetAccessFeeSessionImplementation
 */

StructureSetAccessFeeSessionImplementation::StructureSetAccessFeeSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


StructureSetAccessFeeSessionImplementation::~StructureSetAccessFeeSessionImplementation() {
}


void StructureSetAccessFeeSessionImplementation::finalize() {
}

void StructureSetAccessFeeSessionImplementation::_initializeImplementation() {
	_setClassHelper(StructureSetAccessFeeSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StructureSetAccessFeeSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StructureSetAccessFeeSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* StructureSetAccessFeeSessionImplementation::_getStub() {
	return _this.get();
}

StructureSetAccessFeeSessionImplementation::operator const StructureSetAccessFeeSession*() {
	return _this.get();
}

void StructureSetAccessFeeSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void StructureSetAccessFeeSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void StructureSetAccessFeeSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void StructureSetAccessFeeSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void StructureSetAccessFeeSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void StructureSetAccessFeeSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void StructureSetAccessFeeSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void StructureSetAccessFeeSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("StructureSetAccessFeeSession");

}

void StructureSetAccessFeeSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StructureSetAccessFeeSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StructureSetAccessFeeSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x44ef65f: //StructureSetAccessFeeSession.player
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;

	case 0xac925d3: //StructureSetAccessFeeSession.structure
		TypeInfo<ManagedWeakReference<BuildingObject* > >::parseFromBinaryStream(&structure, stream);
		return true;

	case 0x190facb5: //StructureSetAccessFeeSession.feeAmountBox
		TypeInfo<ManagedReference<SuiInputBox* > >::parseFromBinaryStream(&feeAmountBox, stream);
		return true;

	case 0x9f5a3474: //StructureSetAccessFeeSession.durationBox
		TypeInfo<ManagedReference<SuiInputBox* > >::parseFromBinaryStream(&durationBox, stream);
		return true;

	case 0x5a6c3682: //StructureSetAccessFeeSession.accessFee
		TypeInfo<int >::parseFromBinaryStream(&accessFee, stream);
		return true;

	}

	return false;
}

void StructureSetAccessFeeSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StructureSetAccessFeeSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StructureSetAccessFeeSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x44ef65f; //StructureSetAccessFeeSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xac925d3; //StructureSetAccessFeeSession.structure
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<BuildingObject* > >::toBinaryStream(&structure, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x190facb5; //StructureSetAccessFeeSession.feeAmountBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBox* > >::toBinaryStream(&feeAmountBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x9f5a3474; //StructureSetAccessFeeSession.durationBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBox* > >::toBinaryStream(&durationBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x5a6c3682; //StructureSetAccessFeeSession.accessFee
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&accessFee, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

StructureSetAccessFeeSessionImplementation::StructureSetAccessFeeSessionImplementation(CreatureObject* play, BuildingObject* struc) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		player = play;
	player = play;
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		structure = struc;
	structure = struc;
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		feeAmountBox = null;
	feeAmountBox = NULL;
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		durationBox = null;
	durationBox = NULL;
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		accessFee = 0;
	accessFee = 0;
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		Logger.setLoggingName("StructureSetAccessFeeSession");
	Logger::setLoggingName("StructureSetAccessFeeSession");
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
}

int StructureSetAccessFeeSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		CreatureObject strongRef = player;
	ManagedReference<CreatureObject* > strongRef = player;
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		clearSession(
	if (strongRef)	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  			strongRef.dropActiveSession(SessionFacadeType.SETSTRUCTUREACCESSFEE);
	strongRef->dropActiveSession(SessionFacadeType::SETSTRUCTUREACCESSFEE);
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/StructureSetAccessFeeSession.idl():  		return 0;
	return 0;
}

/*
 *	StructureSetAccessFeeSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


StructureSetAccessFeeSessionAdapter::StructureSetAccessFeeSessionAdapter(StructureSetAccessFeeSession* obj) : FacadeAdapter(obj) {
}

void StructureSetAccessFeeSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_PROMPTSETACCESSFEE__:
		{
			
			promptSetAccessFee();
			
		}
		break;
	case RPC_SETACCESSFEE__INT_:
		{
			 int fee = inv->getSignedIntParameter();
			
			setAccessFee(fee);
			
		}
		break;
	case RPC_PROMPTSETACCESSDURATION__:
		{
			
			promptSetAccessDuration();
			
		}
		break;
	case RPC_SETACCESSDURATION__INT_:
		{
			 int duration = inv->getSignedIntParameter();
			
			setAccessDuration(duration);
			
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

int StructureSetAccessFeeSessionAdapter::initializeSession() {
	return (static_cast<StructureSetAccessFeeSession*>(stub))->initializeSession();
}

int StructureSetAccessFeeSessionAdapter::cancelSession() {
	return (static_cast<StructureSetAccessFeeSession*>(stub))->cancelSession();
}

int StructureSetAccessFeeSessionAdapter::clearSession() {
	return (static_cast<StructureSetAccessFeeSession*>(stub))->clearSession();
}

void StructureSetAccessFeeSessionAdapter::promptSetAccessFee() {
	(static_cast<StructureSetAccessFeeSession*>(stub))->promptSetAccessFee();
}

void StructureSetAccessFeeSessionAdapter::setAccessFee(const int fee) {
	(static_cast<StructureSetAccessFeeSession*>(stub))->setAccessFee(fee);
}

void StructureSetAccessFeeSessionAdapter::promptSetAccessDuration() {
	(static_cast<StructureSetAccessFeeSession*>(stub))->promptSetAccessDuration();
}

void StructureSetAccessFeeSessionAdapter::setAccessDuration(const int duration) {
	(static_cast<StructureSetAccessFeeSession*>(stub))->setAccessDuration(duration);
}

/*
 *	StructureSetAccessFeeSessionHelper
 */

StructureSetAccessFeeSessionHelper* StructureSetAccessFeeSessionHelper::staticInitializer = StructureSetAccessFeeSessionHelper::instance();

StructureSetAccessFeeSessionHelper::StructureSetAccessFeeSessionHelper() {
	className = "StructureSetAccessFeeSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void StructureSetAccessFeeSessionHelper::finalizeHelper() {
	StructureSetAccessFeeSessionHelper::finalize();
}

DistributedObject* StructureSetAccessFeeSessionHelper::instantiateObject() {
	return new StructureSetAccessFeeSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* StructureSetAccessFeeSessionHelper::instantiateServant() {
	return new StructureSetAccessFeeSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* StructureSetAccessFeeSessionHelper::instantiatePOD() {
	return new StructureSetAccessFeeSessionPOD();
}

DistributedObjectAdapter* StructureSetAccessFeeSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureSetAccessFeeSessionAdapter(static_cast<StructureSetAccessFeeSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	StructureSetAccessFeeSessionPOD
 */

StructureSetAccessFeeSessionPOD::~StructureSetAccessFeeSessionPOD() {
}

StructureSetAccessFeeSessionPOD::StructureSetAccessFeeSessionPOD(void) {
	_className = "StructureSetAccessFeeSession";
}


void StructureSetAccessFeeSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StructureSetAccessFeeSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StructureSetAccessFeeSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (player) {
	_nameHashCode = 0x44ef65f; //StructureSetAccessFeeSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (structure) {
	_nameHashCode = 0xac925d3; //StructureSetAccessFeeSession.structure
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<BuildingObjectPOD* > >::toBinaryStream(&structure.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (feeAmountBox) {
	_nameHashCode = 0x190facb5; //StructureSetAccessFeeSession.feeAmountBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBoxPOD* > >::toBinaryStream(&feeAmountBox.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (durationBox) {
	_nameHashCode = 0x9f5a3474; //StructureSetAccessFeeSession.durationBox
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBoxPOD* > >::toBinaryStream(&durationBox.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (accessFee) {
	_nameHashCode = 0x5a6c3682; //StructureSetAccessFeeSession.accessFee
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&accessFee.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool StructureSetAccessFeeSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x44ef65f: //StructureSetAccessFeeSession.player
		{
			ManagedWeakReference<CreatureObjectPOD* > _mnplayer;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnplayer, stream);
			player = std::move(_mnplayer);
		}
		return true;

	case 0xac925d3: //StructureSetAccessFeeSession.structure
		{
			ManagedWeakReference<BuildingObjectPOD* > _mnstructure;
			TypeInfo<ManagedWeakReference<BuildingObjectPOD* > >::parseFromBinaryStream(&_mnstructure, stream);
			structure = std::move(_mnstructure);
		}
		return true;

	case 0x190facb5: //StructureSetAccessFeeSession.feeAmountBox
		{
			ManagedReference<SuiInputBoxPOD* > _mnfeeAmountBox;
			TypeInfo<ManagedReference<SuiInputBoxPOD* > >::parseFromBinaryStream(&_mnfeeAmountBox, stream);
			feeAmountBox = std::move(_mnfeeAmountBox);
		}
		return true;

	case 0x9f5a3474: //StructureSetAccessFeeSession.durationBox
		{
			ManagedReference<SuiInputBoxPOD* > _mndurationBox;
			TypeInfo<ManagedReference<SuiInputBoxPOD* > >::parseFromBinaryStream(&_mndurationBox, stream);
			durationBox = std::move(_mndurationBox);
		}
		return true;

	case 0x5a6c3682: //StructureSetAccessFeeSession.accessFee
		{
			int _mnaccessFee;
			TypeInfo<int >::parseFromBinaryStream(&_mnaccessFee, stream);
			accessFee = std::move(_mnaccessFee);
		}
		return true;

	}

	return false;
}

void StructureSetAccessFeeSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StructureSetAccessFeeSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void StructureSetAccessFeeSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);

	TypeInfo<ManagedWeakReference<BuildingObjectPOD* > >::toBinaryStream(&structure.value(), stream);

	TypeInfo<ManagedReference<SuiInputBoxPOD* > >::toBinaryStream(&feeAmountBox.value(), stream);

	TypeInfo<ManagedReference<SuiInputBoxPOD* > >::toBinaryStream(&durationBox.value(), stream);

	TypeInfo<int >::toBinaryStream(&accessFee.value(), stream);


}

