/*
 *	autogen/server/zone/objects/tangible/tool/ToolTangibleObject.cpp generated by engine3 IDL compiler 0.70
 */

#include "ToolTangibleObject.h"

/*
 *	ToolTangibleObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 4144890609};

ToolTangibleObject::ToolTangibleObject() : TangibleObject(DummyConstructorParameter::instance()) {
	ToolTangibleObjectImplementation* _implementation = new ToolTangibleObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ToolTangibleObject");
}

ToolTangibleObject::ToolTangibleObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("ToolTangibleObject");
}

ToolTangibleObject::~ToolTangibleObject() {
}



void ToolTangibleObject::initializeTransientMembers() {
	ToolTangibleObjectImplementation* _implementation = static_cast<ToolTangibleObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

DistributedObjectServant* ToolTangibleObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ToolTangibleObject::_getImplementationForRead() const {
	return _impl;
}

void ToolTangibleObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ToolTangibleObjectImplementation
 */

ToolTangibleObjectImplementation::ToolTangibleObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ToolTangibleObjectImplementation::~ToolTangibleObjectImplementation() {
}


void ToolTangibleObjectImplementation::finalize() {
}

void ToolTangibleObjectImplementation::_initializeImplementation() {
	_setClassHelper(ToolTangibleObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ToolTangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ToolTangibleObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ToolTangibleObjectImplementation::_getStub() {
	return _this.get();
}

ToolTangibleObjectImplementation::operator const ToolTangibleObject*() {
	return _this.get();
}

void ToolTangibleObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ToolTangibleObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ToolTangibleObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ToolTangibleObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ToolTangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ToolTangibleObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ToolTangibleObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ToolTangibleObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ToolTangibleObject");

}

void ToolTangibleObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ToolTangibleObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ToolTangibleObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ToolTangibleObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ToolTangibleObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ToolTangibleObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

void ToolTangibleObjectImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}

ToolTangibleObjectImplementation::ToolTangibleObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl():  		Logger.setLoggingName("ToolTangibleObject");
	Logger::setLoggingName("ToolTangibleObject");
}

void ToolTangibleObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl():  		Logger.setLoggingName("ToolTangibleObject");
	Logger::setLoggingName("ToolTangibleObject");
}

/*
 *	ToolTangibleObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ToolTangibleObjectAdapter::ToolTangibleObjectAdapter(ToolTangibleObject* obj) : TangibleObjectAdapter(obj) {
}

void ToolTangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void ToolTangibleObjectAdapter::initializeTransientMembers() {
	(static_cast<ToolTangibleObject*>(stub))->initializeTransientMembers();
}

/*
 *	ToolTangibleObjectHelper
 */

ToolTangibleObjectHelper* ToolTangibleObjectHelper::staticInitializer = ToolTangibleObjectHelper::instance();

ToolTangibleObjectHelper::ToolTangibleObjectHelper() {
	className = "ToolTangibleObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void ToolTangibleObjectHelper::finalizeHelper() {
	ToolTangibleObjectHelper::finalize();
}

DistributedObject* ToolTangibleObjectHelper::instantiateObject() {
	return new ToolTangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* ToolTangibleObjectHelper::instantiateServant() {
	return new ToolTangibleObjectImplementation();
}

DistributedObjectPOD* ToolTangibleObjectHelper::instantiatePOD() {
	return new ToolTangibleObjectPOD();
}

DistributedObjectAdapter* ToolTangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ToolTangibleObjectAdapter(static_cast<ToolTangibleObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ToolTangibleObjectPOD
 */

ToolTangibleObjectPOD::~ToolTangibleObjectPOD() {
	finalize();
}

ToolTangibleObjectPOD::ToolTangibleObjectPOD(void) {
	_className = "ToolTangibleObject";
}


void ToolTangibleObjectPOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}


void ToolTangibleObjectPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ToolTangibleObjectPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ToolTangibleObjectPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool ToolTangibleObjectPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ToolTangibleObjectPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ToolTangibleObjectPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ToolTangibleObjectPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);


}

