/*
 *	autogen/server/zone/managers/mission/DestroyMissionLairObserver.cpp generated by engine3 IDL compiler 0.70
 */

#include "DestroyMissionLairObserver.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	DestroyMissionLairObserverStub
 */

enum {RPC_CHECKFORHEAL__TANGIBLEOBJECT_TANGIBLEOBJECT_BOOL_ = 3181248478,RPC_CHECKFORNEWSPAWNS__TANGIBLEOBJECT_TANGIBLEOBJECT_BOOL_,RPC_ISDESTROYMISSIONLAIROBSERVER__};

DestroyMissionLairObserver::DestroyMissionLairObserver() : LairObserver(DummyConstructorParameter::instance()) {
	DestroyMissionLairObserverImplementation* _implementation = new DestroyMissionLairObserverImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DestroyMissionLairObserver");
}

DestroyMissionLairObserver::DestroyMissionLairObserver(DummyConstructorParameter* param) : LairObserver(param) {
	_setClassName("DestroyMissionLairObserver");
}

DestroyMissionLairObserver::~DestroyMissionLairObserver() {
}



void DestroyMissionLairObserver::checkForHeal(TangibleObject* lair, TangibleObject* attacker, bool forceNewUpdate) {
	DestroyMissionLairObserverImplementation* _implementation = static_cast<DestroyMissionLairObserverImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKFORHEAL__TANGIBLEOBJECT_TANGIBLEOBJECT_BOOL_);
		method.addObjectParameter(lair);
		method.addObjectParameter(attacker);
		method.addBooleanParameter(forceNewUpdate);

		method.executeWithVoidReturn();
	} else {
		_implementation->checkForHeal(lair, attacker, forceNewUpdate);
	}
}

bool DestroyMissionLairObserver::checkForNewSpawns(TangibleObject* lair, TangibleObject* attacker, bool forceSpawn) {
	DestroyMissionLairObserverImplementation* _implementation = static_cast<DestroyMissionLairObserverImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKFORNEWSPAWNS__TANGIBLEOBJECT_TANGIBLEOBJECT_BOOL_);
		method.addObjectParameter(lair);
		method.addObjectParameter(attacker);
		method.addBooleanParameter(forceSpawn);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->checkForNewSpawns(lair, attacker, forceSpawn);
	}
}

bool DestroyMissionLairObserver::isDestroyMissionLairObserver() {
	DestroyMissionLairObserverImplementation* _implementation = static_cast<DestroyMissionLairObserverImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDESTROYMISSIONLAIROBSERVER__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isDestroyMissionLairObserver();
	}
}

DistributedObjectServant* DestroyMissionLairObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* DestroyMissionLairObserver::_getImplementationForRead() const {
	return _impl;
}

void DestroyMissionLairObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DestroyMissionLairObserverImplementation
 */

DestroyMissionLairObserverImplementation::DestroyMissionLairObserverImplementation(DummyConstructorParameter* param) : LairObserverImplementation(param) {
	_initializeImplementation();
}


DestroyMissionLairObserverImplementation::~DestroyMissionLairObserverImplementation() {
}


void DestroyMissionLairObserverImplementation::finalize() {
}

void DestroyMissionLairObserverImplementation::_initializeImplementation() {
	_setClassHelper(DestroyMissionLairObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DestroyMissionLairObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DestroyMissionLairObserver*>(stub);
	LairObserverImplementation::_setStub(stub);
}

DistributedObjectStub* DestroyMissionLairObserverImplementation::_getStub() {
	return _this.get();
}

DestroyMissionLairObserverImplementation::operator const DestroyMissionLairObserver*() {
	return _this.get();
}

void DestroyMissionLairObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DestroyMissionLairObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DestroyMissionLairObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DestroyMissionLairObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DestroyMissionLairObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DestroyMissionLairObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DestroyMissionLairObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DestroyMissionLairObserverImplementation::_serializationHelperMethod() {
	LairObserverImplementation::_serializationHelperMethod();

	_setClassName("DestroyMissionLairObserver");

}

void DestroyMissionLairObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DestroyMissionLairObserverImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DestroyMissionLairObserverImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (LairObserverImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void DestroyMissionLairObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DestroyMissionLairObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DestroyMissionLairObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = LairObserverImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

DestroyMissionLairObserverImplementation::DestroyMissionLairObserverImplementation() : LairObserverImplementation() {
	_initializeImplementation();
	// server/zone/managers/mission/DestroyMissionLairObserver.idl():  		Logger.setLoggingName("DestroyMissionLairObserver");
	Logger::setLoggingName("DestroyMissionLairObserver");
}

bool DestroyMissionLairObserverImplementation::isDestroyMissionLairObserver() {
	// server/zone/managers/mission/DestroyMissionLairObserver.idl():  		return true;
	return true;
}

/*
 *	DestroyMissionLairObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DestroyMissionLairObserverAdapter::DestroyMissionLairObserverAdapter(DestroyMissionLairObserver* obj) : LairObserverAdapter(obj) {
}

void DestroyMissionLairObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_CHECKFORHEAL__TANGIBLEOBJECT_TANGIBLEOBJECT_BOOL_:
		{
			TangibleObject* lair = static_cast<TangibleObject*>(inv->getObjectParameter());
			TangibleObject* attacker = static_cast<TangibleObject*>(inv->getObjectParameter());
			bool forceNewUpdate = inv->getBooleanParameter();
			
			checkForHeal(lair, attacker, forceNewUpdate);
			
		}
		break;
	case RPC_CHECKFORNEWSPAWNS__TANGIBLEOBJECT_TANGIBLEOBJECT_BOOL_:
		{
			TangibleObject* lair = static_cast<TangibleObject*>(inv->getObjectParameter());
			TangibleObject* attacker = static_cast<TangibleObject*>(inv->getObjectParameter());
			bool forceSpawn = inv->getBooleanParameter();
			
			bool _m_res = checkForNewSpawns(lair, attacker, forceSpawn);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISDESTROYMISSIONLAIROBSERVER__:
		{
			
			bool _m_res = isDestroyMissionLairObserver();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		LairObserverAdapter::invokeMethod(methid, inv);
	}
}

void DestroyMissionLairObserverAdapter::checkForHeal(TangibleObject* lair, TangibleObject* attacker, bool forceNewUpdate) {
	(static_cast<DestroyMissionLairObserver*>(stub))->checkForHeal(lair, attacker, forceNewUpdate);
}

bool DestroyMissionLairObserverAdapter::checkForNewSpawns(TangibleObject* lair, TangibleObject* attacker, bool forceSpawn) {
	return (static_cast<DestroyMissionLairObserver*>(stub))->checkForNewSpawns(lair, attacker, forceSpawn);
}

bool DestroyMissionLairObserverAdapter::isDestroyMissionLairObserver() {
	return (static_cast<DestroyMissionLairObserver*>(stub))->isDestroyMissionLairObserver();
}

/*
 *	DestroyMissionLairObserverHelper
 */

DestroyMissionLairObserverHelper* DestroyMissionLairObserverHelper::staticInitializer = DestroyMissionLairObserverHelper::instance();

DestroyMissionLairObserverHelper::DestroyMissionLairObserverHelper() {
	className = "DestroyMissionLairObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void DestroyMissionLairObserverHelper::finalizeHelper() {
	DestroyMissionLairObserverHelper::finalize();
}

DistributedObject* DestroyMissionLairObserverHelper::instantiateObject() {
	return new DestroyMissionLairObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* DestroyMissionLairObserverHelper::instantiateServant() {
	return new DestroyMissionLairObserverImplementation();
}

DistributedObjectPOD* DestroyMissionLairObserverHelper::instantiatePOD() {
	return new DestroyMissionLairObserverPOD();
}

DistributedObjectAdapter* DestroyMissionLairObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DestroyMissionLairObserverAdapter(static_cast<DestroyMissionLairObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DestroyMissionLairObserverPOD
 */

DestroyMissionLairObserverPOD::~DestroyMissionLairObserverPOD() {
}

DestroyMissionLairObserverPOD::DestroyMissionLairObserverPOD(void) {
	_className = "DestroyMissionLairObserver";
}


void DestroyMissionLairObserverPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DestroyMissionLairObserverPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DestroyMissionLairObserverPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = LairObserverPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool DestroyMissionLairObserverPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (LairObserverPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void DestroyMissionLairObserverPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DestroyMissionLairObserverPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void DestroyMissionLairObserverPOD::writeObjectCompact(ObjectOutputStream* stream) {
	LairObserverPOD::writeObjectCompact(stream);


}

