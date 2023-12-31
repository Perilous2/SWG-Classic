/*
 *	autogen/server/zone/objects/tangible/eventperk/ShuttleBeacon.cpp generated by engine3 IDL compiler 0.70
 */

#include "ShuttleBeacon.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/tasks/RemoveEventPerkItemTask.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	ShuttleBeaconStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 64217072,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_ACTIVATEREMOVEEVENT__BOOL_,RPC_CALLSHUTTLE__CREATUREOBJECT_,RPC_SPAWNSHUTTLE__CREATUREOBJECT_INT_,RPC_LANDSHUTTLE__CREATUREOBJECT_,RPC_DISMISSSHUTTLE__CREATUREOBJECT_,RPC_DESTROYSHUTTLE__CREATUREOBJECT_,RPC_CANSPAWNSHUTTLE__CREATUREOBJECT_,RPC_GETDURATIONSTRING__,RPC_SETOWNER__CREATUREOBJECT_,RPC_SETREADYTOTAKEOFF__BOOL_,RPC_ISEVENTPERKITEM__};

ShuttleBeacon::ShuttleBeacon() : TangibleObject(DummyConstructorParameter::instance()) {
	ShuttleBeaconImplementation* _implementation = new ShuttleBeaconImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ShuttleBeacon");
}

ShuttleBeacon::ShuttleBeacon(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("ShuttleBeacon");
}

ShuttleBeacon::~ShuttleBeacon() {
}



void ShuttleBeacon::initializeTransientMembers() {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

int ShuttleBeacon::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void ShuttleBeacon::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(alm, object);
	}
}

void ShuttleBeacon::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

void ShuttleBeacon::destroyObjectFromDatabase(bool destroyContainedObjects) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
	}
}

void ShuttleBeacon::activateRemoveEvent(bool immediate) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEREMOVEEVENT__BOOL_);
		method.addBooleanParameter(immediate);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->activateRemoveEvent(immediate);
	}
}

void ShuttleBeacon::callShuttle(CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALLSHUTTLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->callShuttle(player);
	}
}

void ShuttleBeacon::spawnShuttle(CreatureObject* player, int type) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNSHUTTLE__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else {
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->spawnShuttle(player, type);
	}
}

void ShuttleBeacon::landShuttle(CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LANDSHUTTLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->landShuttle(player);
	}
}

void ShuttleBeacon::dismissShuttle(CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DISMISSSHUTTLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->dismissShuttle(player);
	}
}

void ShuttleBeacon::destroyShuttle(CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYSHUTTLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->destroyShuttle(player);
	}
}

bool ShuttleBeacon::canSpawnShuttle(CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANSPAWNSHUTTLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->canSpawnShuttle(player);
	}
}

String ShuttleBeacon::getDurationString() {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDURATIONSTRING__);

		String _return_getDurationString;
		method.executeWithAsciiReturn(_return_getDurationString);
		return _return_getDurationString;
	} else {
		return _implementation->getDurationString();
	}
}

void ShuttleBeacon::setOwner(CreatureObject* player) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOWNER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setOwner(player);
	}
}

Time* ShuttleBeacon::getPurchaseTime() {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getPurchaseTime();
	}
}

void ShuttleBeacon::setReadyToTakeOff(bool status) {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETREADYTOTAKEOFF__BOOL_);
		method.addBooleanParameter(status);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setReadyToTakeOff(status);
	}
}

bool ShuttleBeacon::isEventPerkItem() {
	ShuttleBeaconImplementation* _implementation = static_cast<ShuttleBeaconImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISEVENTPERKITEM__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isEventPerkItem();
	}
}

DistributedObjectServant* ShuttleBeacon::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ShuttleBeacon::_getImplementationForRead() const {
	return _impl;
}

void ShuttleBeacon::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ShuttleBeaconImplementation
 */

ShuttleBeaconImplementation::ShuttleBeaconImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ShuttleBeaconImplementation::~ShuttleBeaconImplementation() {
}


void ShuttleBeaconImplementation::finalize() {
}

void ShuttleBeaconImplementation::_initializeImplementation() {
	_setClassHelper(ShuttleBeaconHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ShuttleBeaconImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ShuttleBeacon*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ShuttleBeaconImplementation::_getStub() {
	return _this.get();
}

ShuttleBeaconImplementation::operator const ShuttleBeacon*() {
	return _this.get();
}

void ShuttleBeaconImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ShuttleBeaconImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ShuttleBeaconImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ShuttleBeaconImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ShuttleBeaconImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ShuttleBeaconImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ShuttleBeaconImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ShuttleBeaconImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ShuttleBeacon");

}

void ShuttleBeaconImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ShuttleBeaconImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ShuttleBeaconImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xbef06f3c: //ShuttleBeacon.owner
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&owner, stream);
		return true;

	case 0xde5a9cb4: //ShuttleBeacon.purchaseTime
		TypeInfo<Time >::parseFromBinaryStream(&purchaseTime, stream);
		return true;

	case 0x654d3562: //ShuttleBeacon.shuttle
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&shuttle, stream);
		return true;

	case 0x81f088f8: //ShuttleBeacon.shuttleStatus
		TypeInfo<int >::parseFromBinaryStream(&shuttleStatus, stream);
		return true;

	case 0x10aae5d1: //ShuttleBeacon.shuttleType
		TypeInfo<int >::parseFromBinaryStream(&shuttleType, stream);
		return true;

	case 0x27750518: //ShuttleBeacon.readyToTakeOff
		TypeInfo<bool >::parseFromBinaryStream(&readyToTakeOff, stream);
		return true;

	}

	return false;
}

void ShuttleBeaconImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ShuttleBeaconImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ShuttleBeaconImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xbef06f3c; //ShuttleBeacon.owner
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&owner, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xde5a9cb4; //ShuttleBeacon.purchaseTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&purchaseTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x654d3562; //ShuttleBeacon.shuttle
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&shuttle, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x81f088f8; //ShuttleBeacon.shuttleStatus
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&shuttleStatus, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x10aae5d1; //ShuttleBeacon.shuttleType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&shuttleType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x27750518; //ShuttleBeacon.readyToTakeOff
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&readyToTakeOff, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void ShuttleBeaconImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["owner"] = owner;

	thisObject["purchaseTime"] = purchaseTime;

	thisObject["shuttle"] = shuttle;

	thisObject["shuttleStatus"] = shuttleStatus;

	thisObject["shuttleType"] = shuttleType;

	thisObject["readyToTakeOff"] = readyToTakeOff;

	j["ShuttleBeacon"] = thisObject;
}

ShuttleBeaconImplementation::ShuttleBeaconImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		Logger.setLoggingName("ShuttleBeacon");
	Logger::setLoggingName("ShuttleBeacon");
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		shuttleStatus = 0;
	shuttleStatus = 0;
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		shuttleType = 0;
	shuttleType = 0;
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		owner = null;
	owner = NULL;
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		readyToTakeOff = false;
	readyToTakeOff = false;
}

void ShuttleBeaconImplementation::setOwner(CreatureObject* player) {
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		owner = player;
	owner = player;
}

Time* ShuttleBeaconImplementation::getPurchaseTime() {
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		return purchaseTime;
	return (&purchaseTime);
}

void ShuttleBeaconImplementation::setReadyToTakeOff(bool status) {
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		readyToTakeOff = status;
	readyToTakeOff = status;
}

bool ShuttleBeaconImplementation::isEventPerkItem() {
	// server/zone/objects/tangible/eventperk/ShuttleBeacon.idl():  		return true;
	return true;
}

/*
 *	ShuttleBeaconAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ShuttleBeaconAdapter::ShuttleBeaconAdapter(ShuttleBeacon* obj) : TangibleObjectAdapter(obj) {
}

void ShuttleBeaconAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		{
			bool destroyContainedObjects = inv->getBooleanParameter();
			
			destroyObjectFromDatabase(destroyContainedObjects);
			
		}
		break;
	case RPC_ACTIVATEREMOVEEVENT__BOOL_:
		{
			bool immediate = inv->getBooleanParameter();
			
			activateRemoveEvent(immediate);
			
		}
		break;
	case RPC_CALLSHUTTLE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			callShuttle(player);
			
		}
		break;
	case RPC_SPAWNSHUTTLE__CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			int type = inv->getSignedIntParameter();
			
			spawnShuttle(player, type);
			
		}
		break;
	case RPC_LANDSHUTTLE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			landShuttle(player);
			
		}
		break;
	case RPC_DISMISSSHUTTLE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			dismissShuttle(player);
			
		}
		break;
	case RPC_DESTROYSHUTTLE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			destroyShuttle(player);
			
		}
		break;
	case RPC_CANSPAWNSHUTTLE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			bool _m_res = canSpawnShuttle(player);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETDURATIONSTRING__:
		{
			
			String _m_res = getDurationString();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_SETOWNER__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			setOwner(player);
			
		}
		break;
	case RPC_SETREADYTOTAKEOFF__BOOL_:
		{
			bool status = inv->getBooleanParameter();
			
			setReadyToTakeOff(status);
			
		}
		break;
	case RPC_ISEVENTPERKITEM__:
		{
			
			bool _m_res = isEventPerkItem();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void ShuttleBeaconAdapter::initializeTransientMembers() {
	(static_cast<ShuttleBeacon*>(stub))->initializeTransientMembers();
}

int ShuttleBeaconAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<ShuttleBeacon*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void ShuttleBeaconAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<ShuttleBeacon*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void ShuttleBeaconAdapter::activateRemoveEvent(bool immediate) {
	(static_cast<ShuttleBeacon*>(stub))->activateRemoveEvent(immediate);
}

void ShuttleBeaconAdapter::callShuttle(CreatureObject* player) {
	(static_cast<ShuttleBeacon*>(stub))->callShuttle(player);
}

void ShuttleBeaconAdapter::spawnShuttle(CreatureObject* player, int type) {
	(static_cast<ShuttleBeacon*>(stub))->spawnShuttle(player, type);
}

void ShuttleBeaconAdapter::landShuttle(CreatureObject* player) {
	(static_cast<ShuttleBeacon*>(stub))->landShuttle(player);
}

void ShuttleBeaconAdapter::dismissShuttle(CreatureObject* player) {
	(static_cast<ShuttleBeacon*>(stub))->dismissShuttle(player);
}

void ShuttleBeaconAdapter::destroyShuttle(CreatureObject* player) {
	(static_cast<ShuttleBeacon*>(stub))->destroyShuttle(player);
}

bool ShuttleBeaconAdapter::canSpawnShuttle(CreatureObject* player) {
	return (static_cast<ShuttleBeacon*>(stub))->canSpawnShuttle(player);
}

String ShuttleBeaconAdapter::getDurationString() {
	return (static_cast<ShuttleBeacon*>(stub))->getDurationString();
}

void ShuttleBeaconAdapter::setOwner(CreatureObject* player) {
	(static_cast<ShuttleBeacon*>(stub))->setOwner(player);
}

void ShuttleBeaconAdapter::setReadyToTakeOff(bool status) {
	(static_cast<ShuttleBeacon*>(stub))->setReadyToTakeOff(status);
}

bool ShuttleBeaconAdapter::isEventPerkItem() {
	return (static_cast<ShuttleBeacon*>(stub))->isEventPerkItem();
}

/*
 *	ShuttleBeaconHelper
 */

ShuttleBeaconHelper* ShuttleBeaconHelper::staticInitializer = ShuttleBeaconHelper::instance();

ShuttleBeaconHelper::ShuttleBeaconHelper() {
	className = "ShuttleBeacon";

	Core::getObjectBroker()->registerClass(className, this);
}

void ShuttleBeaconHelper::finalizeHelper() {
	ShuttleBeaconHelper::finalize();
}

DistributedObject* ShuttleBeaconHelper::instantiateObject() {
	return new ShuttleBeacon(DummyConstructorParameter::instance());
}

DistributedObjectServant* ShuttleBeaconHelper::instantiateServant() {
	return new ShuttleBeaconImplementation();
}

DistributedObjectPOD* ShuttleBeaconHelper::instantiatePOD() {
	return new ShuttleBeaconPOD();
}

DistributedObjectAdapter* ShuttleBeaconHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ShuttleBeaconAdapter(static_cast<ShuttleBeacon*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ShuttleBeaconPOD
 */

ShuttleBeaconPOD::~ShuttleBeaconPOD() {
	finalize();
}

ShuttleBeaconPOD::ShuttleBeaconPOD(void) {
	_className = "ShuttleBeacon";
}


void ShuttleBeaconPOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (owner)
		thisObject["owner"] = owner.value();

	if (purchaseTime)
		thisObject["purchaseTime"] = purchaseTime.value();

	if (shuttle)
		thisObject["shuttle"] = shuttle.value();

	if (shuttleStatus)
		thisObject["shuttleStatus"] = shuttleStatus.value();

	if (shuttleType)
		thisObject["shuttleType"] = shuttleType.value();

	if (readyToTakeOff)
		thisObject["readyToTakeOff"] = readyToTakeOff.value();

	j["ShuttleBeacon"] = thisObject;
}


void ShuttleBeaconPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ShuttleBeaconPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ShuttleBeaconPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (owner) {
	_nameHashCode = 0xbef06f3c; //ShuttleBeacon.owner
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&owner.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (purchaseTime) {
	_nameHashCode = 0xde5a9cb4; //ShuttleBeacon.purchaseTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&purchaseTime.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (shuttle) {
	_nameHashCode = 0x654d3562; //ShuttleBeacon.shuttle
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&shuttle.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (shuttleStatus) {
	_nameHashCode = 0x81f088f8; //ShuttleBeacon.shuttleStatus
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&shuttleStatus.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (shuttleType) {
	_nameHashCode = 0x10aae5d1; //ShuttleBeacon.shuttleType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&shuttleType.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (readyToTakeOff) {
	_nameHashCode = 0x27750518; //ShuttleBeacon.readyToTakeOff
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&readyToTakeOff.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool ShuttleBeaconPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xbef06f3c: //ShuttleBeacon.owner
		{
			ManagedWeakReference<CreatureObjectPOD* > _mnowner;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnowner, stream);
			owner = std::move(_mnowner);
		}
		return true;

	case 0xde5a9cb4: //ShuttleBeacon.purchaseTime
		{
			Time _mnpurchaseTime;
			TypeInfo<Time >::parseFromBinaryStream(&_mnpurchaseTime, stream);
			purchaseTime = std::move(_mnpurchaseTime);
		}
		return true;

	case 0x654d3562: //ShuttleBeacon.shuttle
		{
			ManagedWeakReference<CreatureObjectPOD* > _mnshuttle;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnshuttle, stream);
			shuttle = std::move(_mnshuttle);
		}
		return true;

	case 0x81f088f8: //ShuttleBeacon.shuttleStatus
		{
			int _mnshuttleStatus;
			TypeInfo<int >::parseFromBinaryStream(&_mnshuttleStatus, stream);
			shuttleStatus = std::move(_mnshuttleStatus);
		}
		return true;

	case 0x10aae5d1: //ShuttleBeacon.shuttleType
		{
			int _mnshuttleType;
			TypeInfo<int >::parseFromBinaryStream(&_mnshuttleType, stream);
			shuttleType = std::move(_mnshuttleType);
		}
		return true;

	case 0x27750518: //ShuttleBeacon.readyToTakeOff
		{
			bool _mnreadyToTakeOff;
			TypeInfo<bool >::parseFromBinaryStream(&_mnreadyToTakeOff, stream);
			readyToTakeOff = std::move(_mnreadyToTakeOff);
		}
		return true;

	}

	return false;
}

void ShuttleBeaconPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ShuttleBeaconPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ShuttleBeaconPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&owner.value(), stream);

	TypeInfo<Time >::toBinaryStream(&purchaseTime.value(), stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&shuttle.value(), stream);

	TypeInfo<int >::toBinaryStream(&shuttleStatus.value(), stream);

	TypeInfo<int >::toBinaryStream(&shuttleType.value(), stream);

	TypeInfo<bool >::toBinaryStream(&readyToTakeOff.value(), stream);


}

