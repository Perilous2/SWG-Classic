/*
 *	autogen/server/zone/objects/building/PoiBuilding.cpp generated by engine3 IDL compiler 0.70
 */

#include "PoiBuilding.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/QuadTreeEntry.h"

/*
 *	PoiBuildingStub
 */

enum {RPC_GETNUMBEROFPLAYERSINRANGE__ = 577384991,RPC_GETDESPAWNONNOPLAYERSINRANGE__,RPC_SETDESPAWNONNOPLAYERSINRANGE__BOOL_,RPC_NOTIFYINSERT__QUADTREEENTRY_,RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_,RPC_ACTIVATEDESPAWNEVENT__,RPC_CLEARDESPAWNEVENT__,RPC_ISPOIBUILDING__};

PoiBuilding::PoiBuilding() : BuildingObject(DummyConstructorParameter::instance()) {
	PoiBuildingImplementation* _implementation = new PoiBuildingImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PoiBuilding");
}

PoiBuilding::PoiBuilding(DummyConstructorParameter* param) : BuildingObject(param) {
	_setClassName("PoiBuilding");
}

PoiBuilding::~PoiBuilding() {
}



int PoiBuilding::getNumberOfPlayersInRange() {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNUMBEROFPLAYERSINRANGE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getNumberOfPlayersInRange();
	}
}

bool PoiBuilding::getDespawnOnNoPlayersInRange() const {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDESPAWNONNOPLAYERSINRANGE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->getDespawnOnNoPlayersInRange();
	}
}

void PoiBuilding::setDespawnOnNoPlayersInRange(bool b) {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDESPAWNONNOPLAYERSINRANGE__BOOL_);
		method.addBooleanParameter(b);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setDespawnOnNoPlayersInRange(b);
	}
}

void PoiBuilding::notifyInsert(QuadTreeEntry* entry) {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERT__QUADTREEENTRY_);
		method.addObjectParameter(entry);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyInsert(entry);
	}
}

void PoiBuilding::notifyDissapear(QuadTreeEntry* entry) {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_);
		method.addObjectParameter(entry);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyDissapear(entry);
	}
}

void PoiBuilding::activateDespawnEvent() {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEDESPAWNEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->activateDespawnEvent();
	}
}

void PoiBuilding::clearDespawnEvent() {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARDESPAWNEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->clearDespawnEvent();
	}
}

bool PoiBuilding::isPoiBuilding() {
	PoiBuildingImplementation* _implementation = static_cast<PoiBuildingImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPOIBUILDING__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isPoiBuilding();
	}
}

DistributedObjectServant* PoiBuilding::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PoiBuilding::_getImplementationForRead() const {
	return _impl;
}

void PoiBuilding::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PoiBuildingImplementation
 */

PoiBuildingImplementation::PoiBuildingImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


PoiBuildingImplementation::~PoiBuildingImplementation() {
}


void PoiBuildingImplementation::finalize() {
}

void PoiBuildingImplementation::_initializeImplementation() {
	_setClassHelper(PoiBuildingHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PoiBuildingImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PoiBuilding*>(stub);
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PoiBuildingImplementation::_getStub() {
	return _this.get();
}

PoiBuildingImplementation::operator const PoiBuilding*() {
	return _this.get();
}

void PoiBuildingImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PoiBuildingImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PoiBuildingImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PoiBuildingImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PoiBuildingImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PoiBuildingImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PoiBuildingImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PoiBuildingImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("PoiBuilding");

}

void PoiBuildingImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PoiBuildingImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PoiBuildingImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuildingObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x3951719c: //PoiBuilding.despawnOnNoPlayersInRange
		TypeInfo<bool >::parseFromBinaryStream(&despawnOnNoPlayersInRange, stream);
		return true;

	}

	return false;
}

void PoiBuildingImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PoiBuildingImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PoiBuildingImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x3951719c; //PoiBuilding.despawnOnNoPlayersInRange
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&despawnOnNoPlayersInRange, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

PoiBuildingImplementation::PoiBuildingImplementation() {
	_initializeImplementation();
	Reference<CloseObjectsVector*> _ref0;
	// server/zone/objects/building/PoiBuilding.idl():  		Logger.setLoggingName("PoiBuilding");
	Logger::setLoggingName("PoiBuilding");
	// server/zone/objects/building/PoiBuilding.idl():  		super.closeobjects = new CloseObjectsVector();
	BuildingObjectImplementation::closeobjects = _ref0 = new CloseObjectsVector();
	// server/zone/objects/building/PoiBuilding.idl():  		super.closeobjects.setNoDuplicateInsertPlan();
	BuildingObjectImplementation::closeobjects->setNoDuplicateInsertPlan();
	// server/zone/objects/building/PoiBuilding.idl():  		despawnOnNoPlayersInRange = false;
	despawnOnNoPlayersInRange = false;
}

int PoiBuildingImplementation::getNumberOfPlayersInRange() {
	// server/zone/objects/building/PoiBuilding.idl():  		return numberOfPlayersInRange.get();
	return (&numberOfPlayersInRange)->get();
}

bool PoiBuildingImplementation::getDespawnOnNoPlayersInRange() const{
	// server/zone/objects/building/PoiBuilding.idl():  		return despawnOnNoPlayersInRange;
	return despawnOnNoPlayersInRange;
}

void PoiBuildingImplementation::setDespawnOnNoPlayersInRange(bool b) {
	// server/zone/objects/building/PoiBuilding.idl():  		despawnOnNoPlayersInRange = b;
	despawnOnNoPlayersInRange = b;
}

void PoiBuildingImplementation::notifyInsert(QuadTreeEntry* entry) {
	// server/zone/objects/building/PoiBuilding.idl():  		SceneObject obj = (SceneObject) entry;
	ManagedReference<SceneObject* > obj = dynamic_cast<SceneObject*>(entry);
	// server/zone/objects/building/PoiBuilding.idl():  		if 
	if (obj == _this.getReferenceUnsafeStaticCast())	// server/zone/objects/building/PoiBuilding.idl():  			return;
	return;
	// server/zone/objects/building/PoiBuilding.idl():  	}
	if (obj->isPlayerCreature()){
	// server/zone/objects/building/PoiBuilding.idl():  			CreatureObject creo = (CreatureObject) obj;
	ManagedReference<CreatureObject* > creo = dynamic_cast<CreatureObject*>(obj.get());
	// server/zone/objects/building/PoiBuilding.idl():  		}
	if (!creo->isInvisible()){
	// server/zone/objects/building/PoiBuilding.idl():  				numberOfPlayersInRange.increment();
	(&numberOfPlayersInRange)->increment();
	// server/zone/objects/building/PoiBuilding.idl():  				clearDespawnEvent();
	clearDespawnEvent();
}
}
}

void PoiBuildingImplementation::notifyDissapear(QuadTreeEntry* entry) {
	// server/zone/objects/building/PoiBuilding.idl():  		SceneObject obj = (SceneObject) entry;
	ManagedReference<SceneObject* > obj = dynamic_cast<SceneObject*>(entry);
	// server/zone/objects/building/PoiBuilding.idl():  		if 
	if (obj == _this.getReferenceUnsafeStaticCast())	// server/zone/objects/building/PoiBuilding.idl():  			return;
	return;
	// server/zone/objects/building/PoiBuilding.idl():  	}
	if (obj->isPlayerCreature()){
	// server/zone/objects/building/PoiBuilding.idl():  			CreatureObject creo = (CreatureObject) obj;
	ManagedReference<CreatureObject* > creo = dynamic_cast<CreatureObject*>(obj.get());
	// server/zone/objects/building/PoiBuilding.idl():  		}
	if (!creo->isInvisible()){
	// server/zone/objects/building/PoiBuilding.idl():  				int val = numberOfPlayersInRange.decrement();
	int val = (&numberOfPlayersInRange)->decrement();
	// server/zone/objects/building/PoiBuilding.idl():  			}
	if (val <= 0 && despawnOnNoPlayersInRange)	// server/zone/objects/building/PoiBuilding.idl():  					activateDespawnEvent();
	activateDespawnEvent();
}
}
}

void PoiBuildingImplementation::activateDespawnEvent() {
	Reference<DespawnLairOnPlayerDisappear*> _ref0;
	// server/zone/objects/building/PoiBuilding.idl():  		despawnEvent 
	if (despawnEvent)	// server/zone/objects/building/PoiBuilding.idl():  			return;
	return;
	// server/zone/objects/building/PoiBuilding.idl():  		despawnEvent = new DespawnLairOnPlayerDisappear(this);
	despawnEvent = _ref0 = new DespawnLairOnPlayerDisappear(_this.getReferenceUnsafeStaticCast());
	// server/zone/objects/building/PoiBuilding.idl():  		despawnEvent.schedule(300000);
	despawnEvent->schedule(300000);
}

void PoiBuildingImplementation::clearDespawnEvent() {
	// server/zone/objects/building/PoiBuilding.idl():  		despawnEvent.
	if (!despawnEvent)	// server/zone/objects/building/PoiBuilding.idl():  			return;
	return;
	// server/zone/objects/building/PoiBuilding.idl():  		despawnEvent.cancel();
	despawnEvent->cancel();
	// server/zone/objects/building/PoiBuilding.idl():  		despawnEvent = null;
	despawnEvent = NULL;
}

bool PoiBuildingImplementation::isPoiBuilding() {
	// server/zone/objects/building/PoiBuilding.idl():  		return true;
	return true;
}

/*
 *	PoiBuildingAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PoiBuildingAdapter::PoiBuildingAdapter(PoiBuilding* obj) : BuildingObjectAdapter(obj) {
}

void PoiBuildingAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETNUMBEROFPLAYERSINRANGE__:
		{
			
			int _m_res = getNumberOfPlayersInRange();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETDESPAWNONNOPLAYERSINRANGE__:
		{
			
			bool _m_res = getDespawnOnNoPlayersInRange();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETDESPAWNONNOPLAYERSINRANGE__BOOL_:
		{
			bool b = inv->getBooleanParameter();
			
			setDespawnOnNoPlayersInRange(b);
			
		}
		break;
	case RPC_NOTIFYINSERT__QUADTREEENTRY_:
		{
			QuadTreeEntry* entry = static_cast<QuadTreeEntry*>(inv->getObjectParameter());
			
			notifyInsert(entry);
			
		}
		break;
	case RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_:
		{
			QuadTreeEntry* entry = static_cast<QuadTreeEntry*>(inv->getObjectParameter());
			
			notifyDissapear(entry);
			
		}
		break;
	case RPC_ACTIVATEDESPAWNEVENT__:
		{
			
			activateDespawnEvent();
			
		}
		break;
	case RPC_CLEARDESPAWNEVENT__:
		{
			
			clearDespawnEvent();
			
		}
		break;
	case RPC_ISPOIBUILDING__:
		{
			
			bool _m_res = isPoiBuilding();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		BuildingObjectAdapter::invokeMethod(methid, inv);
	}
}

int PoiBuildingAdapter::getNumberOfPlayersInRange() {
	return (static_cast<PoiBuilding*>(stub))->getNumberOfPlayersInRange();
}

bool PoiBuildingAdapter::getDespawnOnNoPlayersInRange() const {
	return (static_cast<PoiBuilding*>(stub))->getDespawnOnNoPlayersInRange();
}

void PoiBuildingAdapter::setDespawnOnNoPlayersInRange(bool b) {
	(static_cast<PoiBuilding*>(stub))->setDespawnOnNoPlayersInRange(b);
}

void PoiBuildingAdapter::notifyInsert(QuadTreeEntry* entry) {
	(static_cast<PoiBuilding*>(stub))->notifyInsert(entry);
}

void PoiBuildingAdapter::notifyDissapear(QuadTreeEntry* entry) {
	(static_cast<PoiBuilding*>(stub))->notifyDissapear(entry);
}

void PoiBuildingAdapter::activateDespawnEvent() {
	(static_cast<PoiBuilding*>(stub))->activateDespawnEvent();
}

void PoiBuildingAdapter::clearDespawnEvent() {
	(static_cast<PoiBuilding*>(stub))->clearDespawnEvent();
}

bool PoiBuildingAdapter::isPoiBuilding() {
	return (static_cast<PoiBuilding*>(stub))->isPoiBuilding();
}

/*
 *	PoiBuildingHelper
 */

PoiBuildingHelper* PoiBuildingHelper::staticInitializer = PoiBuildingHelper::instance();

PoiBuildingHelper::PoiBuildingHelper() {
	className = "PoiBuilding";

	Core::getObjectBroker()->registerClass(className, this);
}

void PoiBuildingHelper::finalizeHelper() {
	PoiBuildingHelper::finalize();
}

DistributedObject* PoiBuildingHelper::instantiateObject() {
	return new PoiBuilding(DummyConstructorParameter::instance());
}

DistributedObjectServant* PoiBuildingHelper::instantiateServant() {
	return new PoiBuildingImplementation();
}

DistributedObjectPOD* PoiBuildingHelper::instantiatePOD() {
	return new PoiBuildingPOD();
}

DistributedObjectAdapter* PoiBuildingHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PoiBuildingAdapter(static_cast<PoiBuilding*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PoiBuildingPOD
 */

PoiBuildingPOD::~PoiBuildingPOD() {
	finalize();
}

PoiBuildingPOD::PoiBuildingPOD(void) {
	_className = "PoiBuilding";
}


void PoiBuildingPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PoiBuildingPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PoiBuildingPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (despawnOnNoPlayersInRange) {
	_nameHashCode = 0x3951719c; //PoiBuilding.despawnOnNoPlayersInRange
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&despawnOnNoPlayersInRange.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool PoiBuildingPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuildingObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x3951719c: //PoiBuilding.despawnOnNoPlayersInRange
		{
			bool _mndespawnOnNoPlayersInRange;
			TypeInfo<bool >::parseFromBinaryStream(&_mndespawnOnNoPlayersInRange, stream);
			despawnOnNoPlayersInRange = std::move(_mndespawnOnNoPlayersInRange);
		}
		return true;

	}

	return false;
}

void PoiBuildingPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PoiBuildingPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void PoiBuildingPOD::writeObjectCompact(ObjectOutputStream* stream) {
	BuildingObjectPOD::writeObjectCompact(stream);

	TypeInfo<bool >::toBinaryStream(&despawnOnNoPlayersInRange.value(), stream);


}

