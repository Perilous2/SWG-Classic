/*
 *	autogen/server/utils/LambdaObserver.cpp generated by engine3 IDL compiler 0.70
 */

#include "LambdaObserver.h"

/*
 *	LambdaObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 763076846};

LambdaObserver::LambdaObserver(LambdaObserverFunction* f) : Observer(DummyConstructorParameter::instance()) {
	LambdaObserverImplementation* _implementation = new LambdaObserverImplementation(f);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("LambdaObserver");
}

LambdaObserver::LambdaObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("LambdaObserver");
}

LambdaObserver::~LambdaObserver() {
}



int LambdaObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	LambdaObserverImplementation* _implementation = static_cast<LambdaObserverImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
	}
}

DistributedObjectServant* LambdaObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* LambdaObserver::_getImplementationForRead() const {
	return _impl;
}

void LambdaObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LambdaObserverImplementation
 */

LambdaObserverImplementation::LambdaObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


LambdaObserverImplementation::~LambdaObserverImplementation() {
}


void LambdaObserverImplementation::finalize() {
}

void LambdaObserverImplementation::_initializeImplementation() {
	_setClassHelper(LambdaObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LambdaObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LambdaObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* LambdaObserverImplementation::_getStub() {
	return _this.get();
}

LambdaObserverImplementation::operator const LambdaObserver*() {
	return _this.get();
}

void LambdaObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void LambdaObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void LambdaObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void LambdaObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void LambdaObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void LambdaObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void LambdaObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void LambdaObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("LambdaObserver");

}

void LambdaObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LambdaObserverImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LambdaObserverImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObserverImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc3b8d18f: //LambdaObserver.function
		TypeInfo<Reference<LambdaObserverFunction* > >::parseFromBinaryStream(&function, stream);
		return true;

	}

	return false;
}

void LambdaObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LambdaObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LambdaObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xc3b8d18f; //LambdaObserver.function
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<LambdaObserverFunction* > >::toBinaryStream(&function, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

int LambdaObserverImplementation::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/utils/LambdaObserver.idl():   	return 1;
	if (function)	// server/utils/LambdaObserver.idl():  			return function.notifyObserverEvent(eventType, observable, arg1, arg2);
	return function->notifyObserverEvent(eventType, observable, arg1, arg2);

	else 	// server/utils/LambdaObserver.idl():   	return 1;
	return 1;
}

LambdaObserverImplementation::LambdaObserverImplementation(LambdaObserverFunction* f) {
	_initializeImplementation();
	// server/utils/LambdaObserver.idl():  		function = f;
	function = f;
}

/*
 *	LambdaObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


LambdaObserverAdapter::LambdaObserverAdapter(LambdaObserver* obj) : ObserverAdapter(obj) {
}

void LambdaObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			unsigned int eventType = inv->getUnsignedIntParameter();
			Observable* observable = static_cast<Observable*>(inv->getObjectParameter());
			ManagedObject* arg1 = static_cast<ManagedObject*>(inv->getObjectParameter());
			long long arg2 = inv->getSignedLongParameter();
			
			int _m_res = notifyObserverEvent(eventType, observable, arg1, arg2);
			resp->insertSignedInt(_m_res);
		}
		break;
	default:
		ObserverAdapter::invokeMethod(methid, inv);
	}
}

int LambdaObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<LambdaObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	LambdaObserverHelper
 */

LambdaObserverHelper* LambdaObserverHelper::staticInitializer = LambdaObserverHelper::instance();

LambdaObserverHelper::LambdaObserverHelper() {
	className = "LambdaObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void LambdaObserverHelper::finalizeHelper() {
	LambdaObserverHelper::finalize();
}

DistributedObject* LambdaObserverHelper::instantiateObject() {
	return new LambdaObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* LambdaObserverHelper::instantiateServant() {
	return new LambdaObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* LambdaObserverHelper::instantiatePOD() {
	return new LambdaObserverPOD();
}

DistributedObjectAdapter* LambdaObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LambdaObserverAdapter(static_cast<LambdaObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	LambdaObserverPOD
 */

LambdaObserverPOD::~LambdaObserverPOD() {
}

LambdaObserverPOD::LambdaObserverPOD(void) {
	_className = "LambdaObserver";
}


void LambdaObserverPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LambdaObserverPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LambdaObserverPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (function) {
	_nameHashCode = 0xc3b8d18f; //LambdaObserver.function
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<LambdaObserverFunction* > >::toBinaryStream(&function.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool LambdaObserverPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObserverPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc3b8d18f: //LambdaObserver.function
		{
			Reference<LambdaObserverFunction* > _mnfunction;
			TypeInfo<Reference<LambdaObserverFunction* > >::parseFromBinaryStream(&_mnfunction, stream);
			function = std::move(_mnfunction);
		}
		return true;

	}

	return false;
}

void LambdaObserverPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LambdaObserverPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void LambdaObserverPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ObserverPOD::writeObjectCompact(stream);

	TypeInfo<Reference<LambdaObserverFunction* > >::toBinaryStream(&function.value(), stream);


}

