/*
 *	autogen/server/zone/objects/creature/buffs/DelayedBuff.cpp generated by engine3 IDL compiler 0.70
 */

#include "DelayedBuff.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/consumable/DelayedBuffObserver.h"

/*
 *	DelayedBuffStub
 */

enum {RPC_ACTIVATE__,RPC_DEACTIVATE__,RPC_USECHARGE__,RPC_SETUSESREMAINING__INT_,};

DelayedBuff::DelayedBuff(CreatureObject* creo, unsigned int buffcrc, int effectCount) : Buff(DummyConstructorParameter::instance()) {
	DelayedBuffImplementation* _implementation = new DelayedBuffImplementation(creo, buffcrc, effectCount);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DelayedBuff");
}

DelayedBuff::DelayedBuff(DummyConstructorParameter* param) : Buff(param) {
	_setClassName("DelayedBuff");
}

DelayedBuff::~DelayedBuff() {
}



void DelayedBuff::init(Vector<int>* events) {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->init(events);
	}
}

void DelayedBuff::activate() {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->activate();
	}
}

void DelayedBuff::deactivate() {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->deactivate();
	}
}

void DelayedBuff::useCharge() {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USECHARGE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->useCharge();
	}
}

void DelayedBuff::setUsesRemaining(int uses) {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUSESREMAINING__INT_);
		method.addSignedIntParameter(uses);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setUsesRemaining(uses);
	}
}

DistributedObjectServant* DelayedBuff::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* DelayedBuff::_getImplementationForRead() const {
	return _impl;
}

void DelayedBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DelayedBuffImplementation
 */

DelayedBuffImplementation::DelayedBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


DelayedBuffImplementation::~DelayedBuffImplementation() {
}


void DelayedBuffImplementation::finalize() {
}

void DelayedBuffImplementation::_initializeImplementation() {
	_setClassHelper(DelayedBuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DelayedBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DelayedBuff*>(stub);
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* DelayedBuffImplementation::_getStub() {
	return _this.get();
}

DelayedBuffImplementation::operator const DelayedBuff*() {
	return _this.get();
}

void DelayedBuffImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DelayedBuffImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DelayedBuffImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DelayedBuffImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DelayedBuffImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DelayedBuffImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DelayedBuffImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DelayedBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("DelayedBuff");

}

void DelayedBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DelayedBuffImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DelayedBuffImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuffImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x97822e2c: //DelayedBuff.usesRemaining
		TypeInfo<int >::parseFromBinaryStream(&usesRemaining, stream);
		return true;

	case 0x6ad0c24f: //DelayedBuff.player
		TypeInfo<ManagedReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;

	case 0xddfc9753: //DelayedBuff.observer
		TypeInfo<ManagedReference<DelayedBuffObserver* > >::parseFromBinaryStream(&observer, stream);
		return true;

	case 0xa623be3d: //DelayedBuff.eventTypes
		TypeInfo<Vector<int> >::parseFromBinaryStream(&eventTypes, stream);
		return true;

	}

	return false;
}

void DelayedBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DelayedBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DelayedBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x97822e2c; //DelayedBuff.usesRemaining
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&usesRemaining, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x6ad0c24f; //DelayedBuff.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xddfc9753; //DelayedBuff.observer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<DelayedBuffObserver* > >::toBinaryStream(&observer, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xa623be3d; //DelayedBuff.eventTypes
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&eventTypes, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void DelayedBuffImplementation::writeJSON(nlohmann::json& j) {
	BuffImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["usesRemaining"] = usesRemaining;

	thisObject["player"] = player;

	thisObject["observer"] = observer;

	thisObject["eventTypes"] = eventTypes;

	j["DelayedBuff"] = thisObject;
}

DelayedBuffImplementation::DelayedBuffImplementation(CreatureObject* creo, unsigned int buffcrc, int effectCount) : BuffImplementation(creo, buffcrc, 3600, BuffType::FOOD) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		usesRemaining = effectCount;
	usesRemaining = effectCount;
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		player = creo;
	player = creo;
}

void DelayedBuffImplementation::init(Vector<int>* events) {
	ManagedReference<DelayedBuffObserver*> _ref0;
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		observer = new DelayedBuffObserver(this);
	observer = _ref0 = new DelayedBuffObserver(_this.getReferenceUnsafeStaticCast());
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		ObjectManager.instance().persistObject(observer, 1, "buffs");
	ObjectManager::instance()->persistObject(observer, 1, "buffs");
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		}
	for (	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		for(int i = 0;
	int i = 0;
	i < events->size();
 ++i) {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  			eventTypes.add(events.get(i));
	(&eventTypes)->add(events->get(i));
}
}

void DelayedBuffImplementation::activate() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		super.activate(true);
	BuffImplementation::activate(true);
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		addObservers();
	addObservers();
}

void DelayedBuffImplementation::deactivate() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		super.deactivate(true);
	BuffImplementation::deactivate(true);
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		dropObservers();
	dropObservers();
}

void DelayedBuffImplementation::useCharge() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		usesRemaining = usesRemaining - 1;
	usesRemaining = usesRemaining - 1;
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		player.sendAttributeListTo(player);
	player->sendAttributeListTo(player);
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  	}
	if (usesRemaining < 1){
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  			player.removeBuff(this);
	player->removeBuff(_this.getReferenceUnsafeStaticCast());
}
}

void DelayedBuffImplementation::setUsesRemaining(int uses) {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		usesRemaining = uses;
	usesRemaining = uses;
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		player.sendAttributeListTo(player);
	player->sendAttributeListTo(player);
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  	}
	if (usesRemaining < 1){
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  			player.removeBuff(this);
	player->removeBuff(_this.getReferenceUnsafeStaticCast());
}
}

void DelayedBuffImplementation::addObservers() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		}
	for (	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		for(int i = 0;
	int i = 0;
	i < (&eventTypes)->size();
 ++i) {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  			player.registerObserver(eventTypes.get(i), observer);
	player->registerObserver((&eventTypes)->get(i), observer);
}
}

void DelayedBuffImplementation::dropObservers() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		}
	for (	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		for(int i = 0;
	int i = 0;
	i < (&eventTypes)->size();
 ++i) {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  			player.dropObserver(eventTypes.get(i), observer);
	player->dropObserver((&eventTypes)->get(i), observer);
}
}

/*
 *	DelayedBuffAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DelayedBuffAdapter::DelayedBuffAdapter(DelayedBuff* obj) : BuffAdapter(obj) {
}

void DelayedBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ACTIVATE__:
		{
			
			activate();
			
		}
		break;
	case RPC_DEACTIVATE__:
		{
			
			deactivate();
			
		}
		break;
	case RPC_USECHARGE__:
		{
			
			useCharge();
			
		}
		break;
	case RPC_SETUSESREMAINING__INT_:
		{
			int uses = inv->getSignedIntParameter();
			
			setUsesRemaining(uses);
			
		}
		break;
	default:
		BuffAdapter::invokeMethod(methid, inv);
	}
}

void DelayedBuffAdapter::activate() {
	(static_cast<DelayedBuff*>(stub))->activate();
}

void DelayedBuffAdapter::deactivate() {
	(static_cast<DelayedBuff*>(stub))->deactivate();
}

void DelayedBuffAdapter::useCharge() {
	(static_cast<DelayedBuff*>(stub))->useCharge();
}

void DelayedBuffAdapter::setUsesRemaining(int uses) {
	(static_cast<DelayedBuff*>(stub))->setUsesRemaining(uses);
}

/*
 *	DelayedBuffHelper
 */

DelayedBuffHelper* DelayedBuffHelper::staticInitializer = DelayedBuffHelper::instance();

DelayedBuffHelper::DelayedBuffHelper() {
	className = "DelayedBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void DelayedBuffHelper::finalizeHelper() {
	DelayedBuffHelper::finalize();
}

DistributedObject* DelayedBuffHelper::instantiateObject() {
	return new DelayedBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* DelayedBuffHelper::instantiateServant() {
	return new DelayedBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* DelayedBuffHelper::instantiatePOD() {
	return new DelayedBuffPOD();
}

DistributedObjectAdapter* DelayedBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DelayedBuffAdapter(static_cast<DelayedBuff*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DelayedBuffPOD
 */

DelayedBuffPOD::~DelayedBuffPOD() {
}

DelayedBuffPOD::DelayedBuffPOD(void) {
	_className = "DelayedBuff";
}


void DelayedBuffPOD::writeJSON(nlohmann::json& j) {
	BuffPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (usesRemaining)
		thisObject["usesRemaining"] = usesRemaining.value();

	if (player)
		thisObject["player"] = player.value();

	if (observer)
		thisObject["observer"] = observer.value();

	if (eventTypes)
		thisObject["eventTypes"] = eventTypes.value();

	j["DelayedBuff"] = thisObject;
}


void DelayedBuffPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DelayedBuffPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DelayedBuffPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (usesRemaining) {
	_nameHashCode = 0x97822e2c; //DelayedBuff.usesRemaining
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&usesRemaining.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (player) {
	_nameHashCode = 0x6ad0c24f; //DelayedBuff.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (observer) {
	_nameHashCode = 0xddfc9753; //DelayedBuff.observer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<DelayedBuffObserverPOD* > >::toBinaryStream(&observer.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (eventTypes) {
	_nameHashCode = 0xa623be3d; //DelayedBuff.eventTypes
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&eventTypes.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool DelayedBuffPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuffPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x97822e2c: //DelayedBuff.usesRemaining
		{
			int _mnusesRemaining;
			TypeInfo<int >::parseFromBinaryStream(&_mnusesRemaining, stream);
			usesRemaining = std::move(_mnusesRemaining);
		}
		return true;

	case 0x6ad0c24f: //DelayedBuff.player
		{
			ManagedReference<CreatureObjectPOD* > _mnplayer;
			TypeInfo<ManagedReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnplayer, stream);
			player = std::move(_mnplayer);
		}
		return true;

	case 0xddfc9753: //DelayedBuff.observer
		{
			ManagedReference<DelayedBuffObserverPOD* > _mnobserver;
			TypeInfo<ManagedReference<DelayedBuffObserverPOD* > >::parseFromBinaryStream(&_mnobserver, stream);
			observer = std::move(_mnobserver);
		}
		return true;

	case 0xa623be3d: //DelayedBuff.eventTypes
		{
			Vector<int> _mneventTypes;
			TypeInfo<Vector<int> >::parseFromBinaryStream(&_mneventTypes, stream);
			eventTypes = std::move(_mneventTypes);
		}
		return true;

	}

	return false;
}

void DelayedBuffPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DelayedBuffPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void DelayedBuffPOD::writeObjectCompact(ObjectOutputStream* stream) {
	BuffPOD::writeObjectCompact(stream);

	TypeInfo<int >::toBinaryStream(&usesRemaining.value(), stream);

	TypeInfo<ManagedReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);

	TypeInfo<ManagedReference<DelayedBuffObserverPOD* > >::toBinaryStream(&observer.value(), stream);

	TypeInfo<Vector<int> >::toBinaryStream(&eventTypes.value(), stream);


}

