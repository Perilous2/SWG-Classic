/*
 *	autogen/server/zone/objects/player/EntertainingObserver.cpp generated by engine3 IDL compiler 0.70
 */

#include "EntertainingObserver.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	EntertainingObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 2648784939};

EntertainingObserver::EntertainingObserver() : Observer(DummyConstructorParameter::instance()) {
	EntertainingObserverImplementation* _implementation = new EntertainingObserverImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("EntertainingObserver");
}

EntertainingObserver::EntertainingObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("EntertainingObserver");
}

EntertainingObserver::~EntertainingObserver() {
}



int EntertainingObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	EntertainingObserverImplementation* _implementation = static_cast<EntertainingObserverImplementation*>(_getImplementationForRead());
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

DistributedObjectServant* EntertainingObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* EntertainingObserver::_getImplementationForRead() const {
	return _impl;
}

void EntertainingObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	EntertainingObserverImplementation
 */

EntertainingObserverImplementation::EntertainingObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


EntertainingObserverImplementation::~EntertainingObserverImplementation() {
}


void EntertainingObserverImplementation::finalize() {
}

void EntertainingObserverImplementation::_initializeImplementation() {
	_setClassHelper(EntertainingObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void EntertainingObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<EntertainingObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* EntertainingObserverImplementation::_getStub() {
	return _this.get();
}

EntertainingObserverImplementation::operator const EntertainingObserver*() {
	return _this.get();
}

void EntertainingObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void EntertainingObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void EntertainingObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void EntertainingObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void EntertainingObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void EntertainingObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void EntertainingObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void EntertainingObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("EntertainingObserver");

}

void EntertainingObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(EntertainingObserverImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool EntertainingObserverImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObserverImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void EntertainingObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = EntertainingObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int EntertainingObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

EntertainingObserverImplementation::EntertainingObserverImplementation() {
	_initializeImplementation();
	// server/zone/objects/player/EntertainingObserver.idl():  		;
}

int EntertainingObserverImplementation::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/player/EntertainingObserver.idl():  		CreatureObject 
	if (eventType != ObserverEventType::POSTURECHANGED){
	// server/zone/objects/player/EntertainingObserver.idl():  			return 0;
	return 0;
}
	// server/zone/objects/player/EntertainingObserver.idl():  		CreatureObject creature = (CreatureObject) observable;
	ManagedReference<CreatureObject* > creature = dynamic_cast<CreatureObject*>(observable);
	// server/zone/objects/player/EntertainingObserver.idl():  		creature.stopEntertaining();
	creature->stopEntertaining();
	// server/zone/objects/player/EntertainingObserver.idl():  		return 1;
	return 1;
}

/*
 *	EntertainingObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


EntertainingObserverAdapter::EntertainingObserverAdapter(EntertainingObserver* obj) : ObserverAdapter(obj) {
}

void EntertainingObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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

int EntertainingObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<EntertainingObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	EntertainingObserverHelper
 */

EntertainingObserverHelper* EntertainingObserverHelper::staticInitializer = EntertainingObserverHelper::instance();

EntertainingObserverHelper::EntertainingObserverHelper() {
	className = "EntertainingObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void EntertainingObserverHelper::finalizeHelper() {
	EntertainingObserverHelper::finalize();
}

DistributedObject* EntertainingObserverHelper::instantiateObject() {
	return new EntertainingObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* EntertainingObserverHelper::instantiateServant() {
	return new EntertainingObserverImplementation();
}

DistributedObjectPOD* EntertainingObserverHelper::instantiatePOD() {
	return new EntertainingObserverPOD();
}

DistributedObjectAdapter* EntertainingObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new EntertainingObserverAdapter(static_cast<EntertainingObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	EntertainingObserverPOD
 */

EntertainingObserverPOD::~EntertainingObserverPOD() {
}

EntertainingObserverPOD::EntertainingObserverPOD(void) {
	_className = "EntertainingObserver";
}


void EntertainingObserverPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = EntertainingObserverPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int EntertainingObserverPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool EntertainingObserverPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObserverPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void EntertainingObserverPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(EntertainingObserverPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void EntertainingObserverPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ObserverPOD::writeObjectCompact(stream);


}

