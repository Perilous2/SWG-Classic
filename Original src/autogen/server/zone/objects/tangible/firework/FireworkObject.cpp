/*
 *	autogen/server/zone/objects/tangible/firework/FireworkObject.cpp generated by engine3 IDL compiler 0.70
 */

#include "FireworkObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	FireworkObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 692104112,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_LAUNCH__CREATUREOBJECT_INT_,RPC_COMPLETELAUNCH__CREATUREOBJECT_INT_,RPC_BEGINSHOWLAUNCH__CREATUREOBJECT_,RPC_GETDISPLAYEDUSECOUNT__,RPC_SETDELAY__INT_,RPC_GETDELAY__,RPC_GETCAPACITY__,RPC_GETFIREWORKOBJECTPATH__,RPC_ISFIREWORKOBJECT__,RPC_ISFIREWORKSHOW__};

FireworkObject::FireworkObject() : TangibleObject(DummyConstructorParameter::instance()) {
	FireworkObjectImplementation* _implementation = new FireworkObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("FireworkObject");
}

FireworkObject::FireworkObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("FireworkObject");
}

FireworkObject::~FireworkObject() {
}



void FireworkObject::initializeTransientMembers() {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void FireworkObject::loadTemplateData(SharedObjectTemplate* templateData) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void FireworkObject::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void FireworkObject::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(alm, object);
	}
}

void FireworkObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else {
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
	}
}

void FireworkObject::launch(CreatureObject* player, int removeTime) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LAUNCH__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(removeTime);

		method.executeWithVoidReturn();
	} else {
		_implementation->launch(player, removeTime);
	}
}

void FireworkObject::completeLaunch(CreatureObject* player, int removeDelay) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETELAUNCH__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(removeDelay);

		method.executeWithVoidReturn();
	} else {
		_implementation->completeLaunch(player, removeDelay);
	}
}

void FireworkObject::beginShowLaunch(CreatureObject* player) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BEGINSHOWLAUNCH__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->beginShowLaunch(player);
	}
}

int FireworkObject::getDisplayedUseCount() {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDISPLAYEDUSECOUNT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getDisplayedUseCount();
	}
}

void FireworkObject::setDelay(int d) {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDELAY__INT_);
		method.addSignedIntParameter(d);

		method.executeWithVoidReturn();
	} else {
		_implementation->setDelay(d);
	}
}

int FireworkObject::getDelay() const {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDELAY__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getDelay();
	}
}

int FireworkObject::getCapacity() const {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCAPACITY__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getCapacity();
	}
}

String FireworkObject::getFireworkObjectPath() const {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFIREWORKOBJECTPATH__);

		String _return_getFireworkObjectPath;
		method.executeWithAsciiReturn(_return_getFireworkObjectPath);
		return _return_getFireworkObjectPath;
	} else {
		return _implementation->getFireworkObjectPath();
	}
}

bool FireworkObject::isFireworkObject() {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFIREWORKOBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isFireworkObject();
	}
}

bool FireworkObject::isFireworkShow() {
	FireworkObjectImplementation* _implementation = static_cast<FireworkObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFIREWORKSHOW__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isFireworkShow();
	}
}

DistributedObjectServant* FireworkObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* FireworkObject::_getImplementationForRead() const {
	return _impl;
}

void FireworkObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FireworkObjectImplementation
 */

FireworkObjectImplementation::FireworkObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FireworkObjectImplementation::~FireworkObjectImplementation() {
}


void FireworkObjectImplementation::finalize() {
}

void FireworkObjectImplementation::_initializeImplementation() {
	_setClassHelper(FireworkObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FireworkObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FireworkObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FireworkObjectImplementation::_getStub() {
	return _this.get();
}

FireworkObjectImplementation::operator const FireworkObject*() {
	return _this.get();
}

void FireworkObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void FireworkObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void FireworkObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void FireworkObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void FireworkObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void FireworkObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void FireworkObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void FireworkObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FireworkObject");

}

void FireworkObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FireworkObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FireworkObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x836465ab: //FireworkObject.fireworkObject
		TypeInfo<String >::parseFromBinaryStream(&fireworkObject, stream);
		return true;

	case 0x16edb81d: //FireworkObject.delay
		TypeInfo<int >::parseFromBinaryStream(&delay, stream);
		return true;

	case 0x69d0769f: //FireworkObject.isShow
		TypeInfo<bool >::parseFromBinaryStream(&isShow, stream);
		return true;

	case 0x935b2b7c: //FireworkObject.capacity
		TypeInfo<int >::parseFromBinaryStream(&capacity, stream);
		return true;

	}

	return false;
}

void FireworkObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FireworkObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FireworkObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x836465ab; //FireworkObject.fireworkObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&fireworkObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x16edb81d; //FireworkObject.delay
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&delay, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x69d0769f; //FireworkObject.isShow
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&isShow, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x935b2b7c; //FireworkObject.capacity
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&capacity, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void FireworkObjectImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["fireworkObject"] = fireworkObject;

	thisObject["delay"] = delay;

	thisObject["isShow"] = isShow;

	thisObject["capacity"] = capacity;

	j["FireworkObject"] = thisObject;
}

FireworkObjectImplementation::FireworkObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		Logger.setLoggingName("FireworkObject");
	Logger::setLoggingName("FireworkObject");
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		fireworkObject = "object/static/firework/fx_01.iff";
	fireworkObject = "object/static/firework/fx_01.iff";
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		delay = 0;
	delay = 0;
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		capacity = 2;
	capacity = 2;
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		isShow = false;
	isShow = false;
}

void FireworkObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		Logger.setLoggingName("FireworkObject");
	Logger::setLoggingName("FireworkObject");
}

void FireworkObjectImplementation::setDelay(int d) {
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		delay = d;
	delay = d;
}

int FireworkObjectImplementation::getDelay() const{
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		return delay;
	return delay;
}

int FireworkObjectImplementation::getCapacity() const{
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		return capacity;
	return capacity;
}

String FireworkObjectImplementation::getFireworkObjectPath() const{
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		return fireworkObject;
	return fireworkObject;
}

bool FireworkObjectImplementation::isFireworkObject() {
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		return true;
	return true;
}

bool FireworkObjectImplementation::isFireworkShow() {
	// server/zone/objects/tangible/firework/FireworkObject.idl():  		return isShow;
	return isShow;
}

/*
 *	FireworkObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


FireworkObjectAdapter::FireworkObjectAdapter(FireworkObject* obj) : TangibleObjectAdapter(obj) {
}

void FireworkObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		{
			bool destroyContainedObjects = inv->getBooleanParameter();
			
			destroyObjectFromDatabase(destroyContainedObjects);
			
		}
		break;
	case RPC_LAUNCH__CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			int removeTime = inv->getSignedIntParameter();
			
			launch(player, removeTime);
			
		}
		break;
	case RPC_COMPLETELAUNCH__CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			int removeDelay = inv->getSignedIntParameter();
			
			completeLaunch(player, removeDelay);
			
		}
		break;
	case RPC_BEGINSHOWLAUNCH__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			beginShowLaunch(player);
			
		}
		break;
	case RPC_GETDISPLAYEDUSECOUNT__:
		{
			
			int _m_res = getDisplayedUseCount();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETDELAY__INT_:
		{
			int d = inv->getSignedIntParameter();
			
			setDelay(d);
			
		}
		break;
	case RPC_GETDELAY__:
		{
			
			int _m_res = getDelay();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETCAPACITY__:
		{
			
			int _m_res = getCapacity();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETFIREWORKOBJECTPATH__:
		{
			
			String _m_res = getFireworkObjectPath();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_ISFIREWORKOBJECT__:
		{
			
			bool _m_res = isFireworkObject();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISFIREWORKSHOW__:
		{
			
			bool _m_res = isFireworkShow();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void FireworkObjectAdapter::initializeTransientMembers() {
	(static_cast<FireworkObject*>(stub))->initializeTransientMembers();
}

void FireworkObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<FireworkObject*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void FireworkObjectAdapter::launch(CreatureObject* player, int removeTime) {
	(static_cast<FireworkObject*>(stub))->launch(player, removeTime);
}

void FireworkObjectAdapter::completeLaunch(CreatureObject* player, int removeDelay) {
	(static_cast<FireworkObject*>(stub))->completeLaunch(player, removeDelay);
}

void FireworkObjectAdapter::beginShowLaunch(CreatureObject* player) {
	(static_cast<FireworkObject*>(stub))->beginShowLaunch(player);
}

int FireworkObjectAdapter::getDisplayedUseCount() {
	return (static_cast<FireworkObject*>(stub))->getDisplayedUseCount();
}

void FireworkObjectAdapter::setDelay(int d) {
	(static_cast<FireworkObject*>(stub))->setDelay(d);
}

int FireworkObjectAdapter::getDelay() const {
	return (static_cast<FireworkObject*>(stub))->getDelay();
}

int FireworkObjectAdapter::getCapacity() const {
	return (static_cast<FireworkObject*>(stub))->getCapacity();
}

String FireworkObjectAdapter::getFireworkObjectPath() const {
	return (static_cast<FireworkObject*>(stub))->getFireworkObjectPath();
}

bool FireworkObjectAdapter::isFireworkObject() {
	return (static_cast<FireworkObject*>(stub))->isFireworkObject();
}

bool FireworkObjectAdapter::isFireworkShow() {
	return (static_cast<FireworkObject*>(stub))->isFireworkShow();
}

/*
 *	FireworkObjectHelper
 */

FireworkObjectHelper* FireworkObjectHelper::staticInitializer = FireworkObjectHelper::instance();

FireworkObjectHelper::FireworkObjectHelper() {
	className = "FireworkObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void FireworkObjectHelper::finalizeHelper() {
	FireworkObjectHelper::finalize();
}

DistributedObject* FireworkObjectHelper::instantiateObject() {
	return new FireworkObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FireworkObjectHelper::instantiateServant() {
	return new FireworkObjectImplementation();
}

DistributedObjectPOD* FireworkObjectHelper::instantiatePOD() {
	return new FireworkObjectPOD();
}

DistributedObjectAdapter* FireworkObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FireworkObjectAdapter(static_cast<FireworkObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	FireworkObjectPOD
 */

FireworkObjectPOD::~FireworkObjectPOD() {
	finalize();
}

FireworkObjectPOD::FireworkObjectPOD(void) {
	_className = "FireworkObject";
}


void FireworkObjectPOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (fireworkObject)
		thisObject["fireworkObject"] = fireworkObject.value();

	if (delay)
		thisObject["delay"] = delay.value();

	if (isShow)
		thisObject["isShow"] = isShow.value();

	if (capacity)
		thisObject["capacity"] = capacity.value();

	j["FireworkObject"] = thisObject;
}


void FireworkObjectPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FireworkObjectPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FireworkObjectPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (fireworkObject) {
	_nameHashCode = 0x836465ab; //FireworkObject.fireworkObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&fireworkObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (delay) {
	_nameHashCode = 0x16edb81d; //FireworkObject.delay
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&delay.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (isShow) {
	_nameHashCode = 0x69d0769f; //FireworkObject.isShow
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&isShow.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (capacity) {
	_nameHashCode = 0x935b2b7c; //FireworkObject.capacity
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&capacity.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool FireworkObjectPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x836465ab: //FireworkObject.fireworkObject
		{
			String _mnfireworkObject;
			TypeInfo<String >::parseFromBinaryStream(&_mnfireworkObject, stream);
			fireworkObject = std::move(_mnfireworkObject);
		}
		return true;

	case 0x16edb81d: //FireworkObject.delay
		{
			int _mndelay;
			TypeInfo<int >::parseFromBinaryStream(&_mndelay, stream);
			delay = std::move(_mndelay);
		}
		return true;

	case 0x69d0769f: //FireworkObject.isShow
		{
			bool _mnisShow;
			TypeInfo<bool >::parseFromBinaryStream(&_mnisShow, stream);
			isShow = std::move(_mnisShow);
		}
		return true;

	case 0x935b2b7c: //FireworkObject.capacity
		{
			int _mncapacity;
			TypeInfo<int >::parseFromBinaryStream(&_mncapacity, stream);
			capacity = std::move(_mncapacity);
		}
		return true;

	}

	return false;
}

void FireworkObjectPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FireworkObjectPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void FireworkObjectPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<String >::toBinaryStream(&fireworkObject.value(), stream);

	TypeInfo<int >::toBinaryStream(&delay.value(), stream);

	TypeInfo<bool >::toBinaryStream(&isShow.value(), stream);

	TypeInfo<int >::toBinaryStream(&capacity.value(), stream);


}

