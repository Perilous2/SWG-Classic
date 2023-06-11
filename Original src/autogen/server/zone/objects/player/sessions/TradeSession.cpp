/*
 *	autogen/server/zone/objects/player/sessions/TradeSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "TradeSession.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	TradeSessionStub
 */

enum {RPC_GETACCEPTEDTRADE__ = 1291877752,RPC_ADDTRADEITEM__SCENEOBJECT_,RPC_GETTRADEITEM__INT_,RPC_GETTRADESIZE__,RPC_GETMONEYTOTRADE__,RPC_GETTRADETARGETPLAYER__,RPC_ISTRYINGTOTRADE__,RPC_HASVERIFIEDTRADE__,RPC_SETACCEPTEDTRADE__BOOL_,RPC_SETMONEYTOTRADE__INT_,RPC_SETTRADETARGETPLAYER__LONG_,RPC_SETVERIFIEDTRADE__BOOL_};

TradeSession::TradeSession() : Facade(DummyConstructorParameter::instance()) {
	TradeSessionImplementation* _implementation = new TradeSessionImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TradeSession");
}

TradeSession::TradeSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("TradeSession");
}

TradeSession::~TradeSession() {
}



bool TradeSession::getAcceptedTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACCEPTEDTRADE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->getAcceptedTrade();
	}
}

void TradeSession::addTradeItem(SceneObject* object) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTRADEITEM__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else {
		_implementation->addTradeItem(object);
	}
}

SortedVector<ManagedReference<SceneObject* > >* TradeSession::getItemsToTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getItemsToTrade();
	}
}

SceneObject* TradeSession::getTradeItem(int index) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRADEITEM__INT_);
		method.addSignedIntParameter(index);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getTradeItem(index);
	}
}

int TradeSession::getTradeSize() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRADESIZE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getTradeSize();
	}
}

int TradeSession::getMoneyToTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMONEYTOTRADE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getMoneyToTrade();
	}
}

unsigned long long TradeSession::getTradeTargetPlayer() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRADETARGETPLAYER__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getTradeTargetPlayer();
	}
}

bool TradeSession::isTryingToTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTRYINGTOTRADE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isTryingToTrade();
	}
}

bool TradeSession::hasVerifiedTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASVERIFIEDTRADE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->hasVerifiedTrade();
	}
}

void TradeSession::setAcceptedTrade(bool val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCEPTEDTRADE__BOOL_);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setAcceptedTrade(val);
	}
}

void TradeSession::setMoneyToTrade(int val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMONEYTOTRADE__INT_);
		method.addSignedIntParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setMoneyToTrade(val);
	}
}

void TradeSession::setTradeTargetPlayer(unsigned long long val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTRADETARGETPLAYER__LONG_);
		method.addUnsignedLongParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setTradeTargetPlayer(val);
	}
}

void TradeSession::setVerifiedTrade(bool val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETVERIFIEDTRADE__BOOL_);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setVerifiedTrade(val);
	}
}

DistributedObjectServant* TradeSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* TradeSession::_getImplementationForRead() const {
	return _impl;
}

void TradeSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TradeSessionImplementation
 */

TradeSessionImplementation::TradeSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


TradeSessionImplementation::~TradeSessionImplementation() {
}


void TradeSessionImplementation::finalize() {
}

void TradeSessionImplementation::_initializeImplementation() {
	_setClassHelper(TradeSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TradeSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TradeSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* TradeSessionImplementation::_getStub() {
	return _this.get();
}

TradeSessionImplementation::operator const TradeSession*() {
	return _this.get();
}

void TradeSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TradeSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TradeSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TradeSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TradeSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TradeSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TradeSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TradeSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("TradeSession");

}

void TradeSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TradeSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TradeSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x4b59ee3a: //TradeSession.tradeTargetPlayer
		TypeInfo<unsigned long long >::parseFromBinaryStream(&tradeTargetPlayer, stream);
		return true;

	case 0x445df906: //TradeSession.itemsToTrade
		TypeInfo<SortedVector<ManagedReference<SceneObject* > > >::parseFromBinaryStream(&itemsToTrade, stream);
		return true;

	case 0xc2bf13de: //TradeSession.verifiedTrade
		TypeInfo<bool >::parseFromBinaryStream(&verifiedTrade, stream);
		return true;

	case 0xc4a09e07: //TradeSession.acceptedTrade
		TypeInfo<bool >::parseFromBinaryStream(&acceptedTrade, stream);
		return true;

	case 0x5b6aa3d6: //TradeSession.moneyToTrade
		TypeInfo<int >::parseFromBinaryStream(&moneyToTrade, stream);
		return true;

	}

	return false;
}

void TradeSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TradeSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TradeSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x4b59ee3a; //TradeSession.tradeTargetPlayer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&tradeTargetPlayer, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x445df906; //TradeSession.itemsToTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<SceneObject* > > >::toBinaryStream(&itemsToTrade, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc2bf13de; //TradeSession.verifiedTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&verifiedTrade, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc4a09e07; //TradeSession.acceptedTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&acceptedTrade, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x5b6aa3d6; //TradeSession.moneyToTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&moneyToTrade, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

TradeSessionImplementation::TradeSessionImplementation() {
	_initializeImplementation();
	// server/zone/objects/player/sessions/TradeSession.idl():  		tradeTargetPlayer = 0;
	tradeTargetPlayer = 0;
	// server/zone/objects/player/sessions/TradeSession.idl():  		itemsToTrade.setNoDuplicateInsertPlan();
	(&itemsToTrade)->setNoDuplicateInsertPlan();
	// server/zone/objects/player/sessions/TradeSession.idl():  		acceptedTrade = false;
	acceptedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		verifiedTrade = false;
	verifiedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		moneyToTrade = 0;
	moneyToTrade = 0;
}

bool TradeSessionImplementation::getAcceptedTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return acceptedTrade;
	return acceptedTrade;
}

void TradeSessionImplementation::addTradeItem(SceneObject* object) {
	// server/zone/objects/player/sessions/TradeSession.idl():   	itemsToTrade.put(object);
	(&itemsToTrade)->put(object);
}

SortedVector<ManagedReference<SceneObject* > >* TradeSessionImplementation::getItemsToTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return itemsToTrade;
	return (&itemsToTrade);
}

SceneObject* TradeSessionImplementation::getTradeItem(int index) {
	// server/zone/objects/player/sessions/TradeSession.idl():   	return itemsToTrade.get(index);
	return (&itemsToTrade)->get(index);
}

int TradeSessionImplementation::getTradeSize() {
	// server/zone/objects/player/sessions/TradeSession.idl():   	return itemsToTrade.size();
	return (&itemsToTrade)->size();
}

int TradeSessionImplementation::getMoneyToTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return moneyToTrade;
	return moneyToTrade;
}

unsigned long long TradeSessionImplementation::getTradeTargetPlayer() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return tradeTargetPlayer;
	return tradeTargetPlayer;
}

bool TradeSessionImplementation::isTryingToTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():   	return tradeTargetPlayer != 0;
	return tradeTargetPlayer != 0;
}

bool TradeSessionImplementation::hasVerifiedTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return verifiedTrade;
	return verifiedTrade;
}

void TradeSessionImplementation::setAcceptedTrade(bool val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		acceptedTrade = val;
	acceptedTrade = val;
}

void TradeSessionImplementation::setMoneyToTrade(int val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		moneyToTrade = val;
	moneyToTrade = val;
}

void TradeSessionImplementation::setTradeTargetPlayer(unsigned long long val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		tradeTargetPlayer = val;
	tradeTargetPlayer = val;
}

void TradeSessionImplementation::setVerifiedTrade(bool val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		verifiedTrade = val;
	verifiedTrade = val;
}

/*
 *	TradeSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TradeSessionAdapter::TradeSessionAdapter(TradeSession* obj) : FacadeAdapter(obj) {
}

void TradeSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETACCEPTEDTRADE__:
		{
			
			bool _m_res = getAcceptedTrade();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ADDTRADEITEM__SCENEOBJECT_:
		{
			SceneObject* object = static_cast<SceneObject*>(inv->getObjectParameter());
			
			addTradeItem(object);
			
		}
		break;
	case RPC_GETTRADEITEM__INT_:
		{
			int index = inv->getSignedIntParameter();
			
			DistributedObject* _m_res = getTradeItem(index);
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_GETTRADESIZE__:
		{
			
			int _m_res = getTradeSize();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETMONEYTOTRADE__:
		{
			
			int _m_res = getMoneyToTrade();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETTRADETARGETPLAYER__:
		{
			
			unsigned long long _m_res = getTradeTargetPlayer();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_ISTRYINGTOTRADE__:
		{
			
			bool _m_res = isTryingToTrade();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_HASVERIFIEDTRADE__:
		{
			
			bool _m_res = hasVerifiedTrade();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETACCEPTEDTRADE__BOOL_:
		{
			bool val = inv->getBooleanParameter();
			
			setAcceptedTrade(val);
			
		}
		break;
	case RPC_SETMONEYTOTRADE__INT_:
		{
			int val = inv->getSignedIntParameter();
			
			setMoneyToTrade(val);
			
		}
		break;
	case RPC_SETTRADETARGETPLAYER__LONG_:
		{
			unsigned long long val = inv->getUnsignedLongParameter();
			
			setTradeTargetPlayer(val);
			
		}
		break;
	case RPC_SETVERIFIEDTRADE__BOOL_:
		{
			bool val = inv->getBooleanParameter();
			
			setVerifiedTrade(val);
			
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

bool TradeSessionAdapter::getAcceptedTrade() {
	return (static_cast<TradeSession*>(stub))->getAcceptedTrade();
}

void TradeSessionAdapter::addTradeItem(SceneObject* object) {
	(static_cast<TradeSession*>(stub))->addTradeItem(object);
}

SceneObject* TradeSessionAdapter::getTradeItem(int index) {
	return (static_cast<TradeSession*>(stub))->getTradeItem(index);
}

int TradeSessionAdapter::getTradeSize() {
	return (static_cast<TradeSession*>(stub))->getTradeSize();
}

int TradeSessionAdapter::getMoneyToTrade() {
	return (static_cast<TradeSession*>(stub))->getMoneyToTrade();
}

unsigned long long TradeSessionAdapter::getTradeTargetPlayer() {
	return (static_cast<TradeSession*>(stub))->getTradeTargetPlayer();
}

bool TradeSessionAdapter::isTryingToTrade() {
	return (static_cast<TradeSession*>(stub))->isTryingToTrade();
}

bool TradeSessionAdapter::hasVerifiedTrade() {
	return (static_cast<TradeSession*>(stub))->hasVerifiedTrade();
}

void TradeSessionAdapter::setAcceptedTrade(bool val) {
	(static_cast<TradeSession*>(stub))->setAcceptedTrade(val);
}

void TradeSessionAdapter::setMoneyToTrade(int val) {
	(static_cast<TradeSession*>(stub))->setMoneyToTrade(val);
}

void TradeSessionAdapter::setTradeTargetPlayer(unsigned long long val) {
	(static_cast<TradeSession*>(stub))->setTradeTargetPlayer(val);
}

void TradeSessionAdapter::setVerifiedTrade(bool val) {
	(static_cast<TradeSession*>(stub))->setVerifiedTrade(val);
}

/*
 *	TradeSessionHelper
 */

TradeSessionHelper* TradeSessionHelper::staticInitializer = TradeSessionHelper::instance();

TradeSessionHelper::TradeSessionHelper() {
	className = "TradeSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void TradeSessionHelper::finalizeHelper() {
	TradeSessionHelper::finalize();
}

DistributedObject* TradeSessionHelper::instantiateObject() {
	return new TradeSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* TradeSessionHelper::instantiateServant() {
	return new TradeSessionImplementation();
}

DistributedObjectPOD* TradeSessionHelper::instantiatePOD() {
	return new TradeSessionPOD();
}

DistributedObjectAdapter* TradeSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TradeSessionAdapter(static_cast<TradeSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	TradeSessionPOD
 */

TradeSessionPOD::~TradeSessionPOD() {
}

TradeSessionPOD::TradeSessionPOD(void) {
	_className = "TradeSession";
}


void TradeSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TradeSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TradeSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (tradeTargetPlayer) {
	_nameHashCode = 0x4b59ee3a; //TradeSession.tradeTargetPlayer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&tradeTargetPlayer.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (itemsToTrade) {
	_nameHashCode = 0x445df906; //TradeSession.itemsToTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<SceneObjectPOD* > > >::toBinaryStream(&itemsToTrade.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (verifiedTrade) {
	_nameHashCode = 0xc2bf13de; //TradeSession.verifiedTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&verifiedTrade.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (acceptedTrade) {
	_nameHashCode = 0xc4a09e07; //TradeSession.acceptedTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&acceptedTrade.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (moneyToTrade) {
	_nameHashCode = 0x5b6aa3d6; //TradeSession.moneyToTrade
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&moneyToTrade.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool TradeSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x4b59ee3a: //TradeSession.tradeTargetPlayer
		{
			unsigned long long _mntradeTargetPlayer;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mntradeTargetPlayer, stream);
			tradeTargetPlayer = std::move(_mntradeTargetPlayer);
		}
		return true;

	case 0x445df906: //TradeSession.itemsToTrade
		{
			SortedVector<ManagedReference<SceneObjectPOD* > > _mnitemsToTrade;
			TypeInfo<SortedVector<ManagedReference<SceneObjectPOD* > > >::parseFromBinaryStream(&_mnitemsToTrade, stream);
			itemsToTrade = std::move(_mnitemsToTrade);
		}
		return true;

	case 0xc2bf13de: //TradeSession.verifiedTrade
		{
			bool _mnverifiedTrade;
			TypeInfo<bool >::parseFromBinaryStream(&_mnverifiedTrade, stream);
			verifiedTrade = std::move(_mnverifiedTrade);
		}
		return true;

	case 0xc4a09e07: //TradeSession.acceptedTrade
		{
			bool _mnacceptedTrade;
			TypeInfo<bool >::parseFromBinaryStream(&_mnacceptedTrade, stream);
			acceptedTrade = std::move(_mnacceptedTrade);
		}
		return true;

	case 0x5b6aa3d6: //TradeSession.moneyToTrade
		{
			int _mnmoneyToTrade;
			TypeInfo<int >::parseFromBinaryStream(&_mnmoneyToTrade, stream);
			moneyToTrade = std::move(_mnmoneyToTrade);
		}
		return true;

	}

	return false;
}

void TradeSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TradeSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void TradeSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<unsigned long long >::toBinaryStream(&tradeTargetPlayer.value(), stream);

	TypeInfo<SortedVector<ManagedReference<SceneObjectPOD* > > >::toBinaryStream(&itemsToTrade.value(), stream);

	TypeInfo<bool >::toBinaryStream(&verifiedTrade.value(), stream);

	TypeInfo<bool >::toBinaryStream(&acceptedTrade.value(), stream);

	TypeInfo<int >::toBinaryStream(&moneyToTrade.value(), stream);


}
