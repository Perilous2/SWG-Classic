/*
 *	autogen/server/zone/objects/creature/buffs/StateBuff.cpp generated by engine3 IDL compiler 0.70
 */

#include "StateBuff.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	StateBuffStub
 */

enum {RPC_ACTIVATE__BOOL_ = 741042654,RPC_DEACTIVATE__BOOL_};

StateBuff::StateBuff(CreatureObject* creo, unsigned long long buffState, int duration, unsigned long long secondaryCRC) : Buff(DummyConstructorParameter::instance()) {
	StateBuffImplementation* _implementation = new StateBuffImplementation(creo, buffState, duration, secondaryCRC);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("StateBuff");
}

StateBuff::StateBuff(DummyConstructorParameter* param) : Buff(param) {
	_setClassName("StateBuff");
}

StateBuff::~StateBuff() {
}



void StateBuff::activate(bool applyModifiers) {
	StateBuffImplementation* _implementation = static_cast<StateBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__BOOL_);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->activate(applyModifiers);
	}
}

void StateBuff::deactivate(bool removeModifiers) {
	StateBuffImplementation* _implementation = static_cast<StateBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__BOOL_);
		method.addBooleanParameter(removeModifiers);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->deactivate(removeModifiers);
	}
}

DistributedObjectServant* StateBuff::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* StateBuff::_getImplementationForRead() const {
	return _impl;
}

void StateBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StateBuffImplementation
 */

StateBuffImplementation::StateBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


StateBuffImplementation::~StateBuffImplementation() {
}


void StateBuffImplementation::finalize() {
}

void StateBuffImplementation::_initializeImplementation() {
	_setClassHelper(StateBuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StateBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StateBuff*>(stub);
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* StateBuffImplementation::_getStub() {
	return _this.get();
}

StateBuffImplementation::operator const StateBuff*() {
	return _this.get();
}

void StateBuffImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void StateBuffImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void StateBuffImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void StateBuffImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void StateBuffImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void StateBuffImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void StateBuffImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void StateBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("StateBuff");

}

void StateBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StateBuffImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StateBuffImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuffImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x60240077: //StateBuff.stateApplied
		TypeInfo<unsigned long long >::parseFromBinaryStream(&stateApplied, stream);
		return true;

	}

	return false;
}

void StateBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StateBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StateBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x60240077; //StateBuff.stateApplied
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&stateApplied, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void StateBuffImplementation::writeJSON(nlohmann::json& j) {
	BuffImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["stateApplied"] = stateApplied;

	j["StateBuff"] = thisObject;
}

StateBuffImplementation::StateBuffImplementation(CreatureObject* creo, unsigned long long buffState, int duration, unsigned long long secondaryCRC) : BuffImplementation(creo, Long::hashCode(buffState), duration, BuffType::STATE, secondaryCRC) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/StateBuff.idl():  		stateApplied = buffState;
	stateApplied = buffState;
}

void StateBuffImplementation::activate(bool applyModifiers) {
	// server/zone/objects/creature/buffs/StateBuff.idl():  		super.activate(applyModifiers);
	BuffImplementation::activate(applyModifiers);
	// server/zone/objects/creature/buffs/StateBuff.idl():  		super.creature.setState(stateApplied);
	BuffImplementation::creature.getForUpdate().get()->setState(stateApplied);
}

void StateBuffImplementation::deactivate(bool removeModifiers) {
	// server/zone/objects/creature/buffs/StateBuff.idl():  		super.deactivate(removeModifiers);
	BuffImplementation::deactivate(removeModifiers);
	// server/zone/objects/creature/buffs/StateBuff.idl():  		super.creature.clearState(stateApplied);
	BuffImplementation::creature.getForUpdate().get()->clearState(stateApplied);
}

/*
 *	StateBuffAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


StateBuffAdapter::StateBuffAdapter(StateBuff* obj) : BuffAdapter(obj) {
}

void StateBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ACTIVATE__BOOL_:
		{
			bool applyModifiers = inv->getBooleanParameter();
			
			activate(applyModifiers);
			
		}
		break;
	case RPC_DEACTIVATE__BOOL_:
		{
			bool removeModifiers = inv->getBooleanParameter();
			
			deactivate(removeModifiers);
			
		}
		break;
	default:
		BuffAdapter::invokeMethod(methid, inv);
	}
}

void StateBuffAdapter::activate(bool applyModifiers) {
	(static_cast<StateBuff*>(stub))->activate(applyModifiers);
}

void StateBuffAdapter::deactivate(bool removeModifiers) {
	(static_cast<StateBuff*>(stub))->deactivate(removeModifiers);
}

/*
 *	StateBuffHelper
 */

StateBuffHelper* StateBuffHelper::staticInitializer = StateBuffHelper::instance();

StateBuffHelper::StateBuffHelper() {
	className = "StateBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void StateBuffHelper::finalizeHelper() {
	StateBuffHelper::finalize();
}

DistributedObject* StateBuffHelper::instantiateObject() {
	return new StateBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* StateBuffHelper::instantiateServant() {
	return new StateBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* StateBuffHelper::instantiatePOD() {
	return new StateBuffPOD();
}

DistributedObjectAdapter* StateBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StateBuffAdapter(static_cast<StateBuff*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	StateBuffPOD
 */

StateBuffPOD::~StateBuffPOD() {
}

StateBuffPOD::StateBuffPOD(void) {
	_className = "StateBuff";
}


void StateBuffPOD::writeJSON(nlohmann::json& j) {
	BuffPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (stateApplied)
		thisObject["stateApplied"] = stateApplied.value();

	j["StateBuff"] = thisObject;
}


void StateBuffPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StateBuffPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StateBuffPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (stateApplied) {
	_nameHashCode = 0x60240077; //StateBuff.stateApplied
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&stateApplied.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool StateBuffPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuffPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x60240077: //StateBuff.stateApplied
		{
			unsigned long long _mnstateApplied;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mnstateApplied, stream);
			stateApplied = std::move(_mnstateApplied);
		}
		return true;

	}

	return false;
}

void StateBuffPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StateBuffPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void StateBuffPOD::writeObjectCompact(ObjectOutputStream* stream) {
	BuffPOD::writeObjectCompact(stream);

	TypeInfo<unsigned long long >::toBinaryStream(&stateApplied.value(), stream);


}
