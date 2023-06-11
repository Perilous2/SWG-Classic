/*
 *	autogen/server/zone/objects/tangible/component/weapon/De10BarrelComponent.cpp generated by engine3 IDL compiler 0.70
 */

#include "De10BarrelComponent.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	De10BarrelComponentStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 4091400068,};

De10BarrelComponent::De10BarrelComponent() : Component(DummyConstructorParameter::instance()) {
	De10BarrelComponentImplementation* _implementation = new De10BarrelComponentImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("De10BarrelComponent");
}

De10BarrelComponent::De10BarrelComponent(DummyConstructorParameter* param) : Component(param) {
	_setClassName("De10BarrelComponent");
}

De10BarrelComponent::~De10BarrelComponent() {
}



void De10BarrelComponent::initializeTransientMembers() {
	De10BarrelComponentImplementation* _implementation = static_cast<De10BarrelComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void De10BarrelComponent::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	De10BarrelComponentImplementation* _implementation = static_cast<De10BarrelComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void De10BarrelComponent::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	De10BarrelComponentImplementation* _implementation = static_cast<De10BarrelComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

DistributedObjectServant* De10BarrelComponent::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* De10BarrelComponent::_getImplementationForRead() const {
	return _impl;
}

void De10BarrelComponent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	De10BarrelComponentImplementation
 */

De10BarrelComponentImplementation::De10BarrelComponentImplementation(DummyConstructorParameter* param) : ComponentImplementation(param) {
	_initializeImplementation();
}


De10BarrelComponentImplementation::~De10BarrelComponentImplementation() {
}


void De10BarrelComponentImplementation::finalize() {
}

void De10BarrelComponentImplementation::_initializeImplementation() {
	_setClassHelper(De10BarrelComponentHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void De10BarrelComponentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<De10BarrelComponent*>(stub);
	ComponentImplementation::_setStub(stub);
}

DistributedObjectStub* De10BarrelComponentImplementation::_getStub() {
	return _this.get();
}

De10BarrelComponentImplementation::operator const De10BarrelComponent*() {
	return _this.get();
}

void De10BarrelComponentImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void De10BarrelComponentImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void De10BarrelComponentImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void De10BarrelComponentImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void De10BarrelComponentImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void De10BarrelComponentImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void De10BarrelComponentImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void De10BarrelComponentImplementation::_serializationHelperMethod() {
	ComponentImplementation::_serializationHelperMethod();

	_setClassName("De10BarrelComponent");

}

void De10BarrelComponentImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(De10BarrelComponentImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool De10BarrelComponentImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ComponentImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void De10BarrelComponentImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = De10BarrelComponentImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int De10BarrelComponentImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

void De10BarrelComponentImplementation::writeJSON(nlohmann::json& j) {
	ComponentImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}

De10BarrelComponentImplementation::De10BarrelComponentImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/component/weapon/De10BarrelComponent.idl():  		Logger.setLoggingName("De10BarrelComponent");
	Logger::setLoggingName("De10BarrelComponent");
}

/*
 *	De10BarrelComponentAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


De10BarrelComponentAdapter::De10BarrelComponentAdapter(De10BarrelComponent* obj) : ComponentAdapter(obj) {
}

void De10BarrelComponentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	default:
		ComponentAdapter::invokeMethod(methid, inv);
	}
}

void De10BarrelComponentAdapter::initializeTransientMembers() {
	(static_cast<De10BarrelComponent*>(stub))->initializeTransientMembers();
}

/*
 *	De10BarrelComponentHelper
 */

De10BarrelComponentHelper* De10BarrelComponentHelper::staticInitializer = De10BarrelComponentHelper::instance();

De10BarrelComponentHelper::De10BarrelComponentHelper() {
	className = "De10BarrelComponent";

	Core::getObjectBroker()->registerClass(className, this);
}

void De10BarrelComponentHelper::finalizeHelper() {
	De10BarrelComponentHelper::finalize();
}

DistributedObject* De10BarrelComponentHelper::instantiateObject() {
	return new De10BarrelComponent(DummyConstructorParameter::instance());
}

DistributedObjectServant* De10BarrelComponentHelper::instantiateServant() {
	return new De10BarrelComponentImplementation();
}

DistributedObjectPOD* De10BarrelComponentHelper::instantiatePOD() {
	return new De10BarrelComponentPOD();
}

DistributedObjectAdapter* De10BarrelComponentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new De10BarrelComponentAdapter(static_cast<De10BarrelComponent*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	De10BarrelComponentPOD
 */

De10BarrelComponentPOD::~De10BarrelComponentPOD() {
	finalize();
}

De10BarrelComponentPOD::De10BarrelComponentPOD(void) {
	_className = "De10BarrelComponent";
}


void De10BarrelComponentPOD::writeJSON(nlohmann::json& j) {
	ComponentPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}


void De10BarrelComponentPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = De10BarrelComponentPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int De10BarrelComponentPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool De10BarrelComponentPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ComponentPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void De10BarrelComponentPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(De10BarrelComponentPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void De10BarrelComponentPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ComponentPOD::writeObjectCompact(stream);


}
