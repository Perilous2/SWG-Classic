/*
 *	autogen/server/zone/objects/building/TutorialBuildingObject.cpp generated by engine3 IDL compiler 0.70
 */

#include "TutorialBuildingObject.h"

/*
 *	TutorialBuildingObjectStub
 */

enum {RPC_SETTUTORIALOWNERID__LONG_ = 1263771599,RPC_GETTUTORIALOWNERID__};

TutorialBuildingObject::TutorialBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	TutorialBuildingObjectImplementation* _implementation = new TutorialBuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TutorialBuildingObject");
}

TutorialBuildingObject::TutorialBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
	_setClassName("TutorialBuildingObject");
}

TutorialBuildingObject::~TutorialBuildingObject() {
}



void TutorialBuildingObject::setTutorialOwnerID(unsigned long long ownerID) {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTUTORIALOWNERID__LONG_);
		method.addUnsignedLongParameter(ownerID);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setTutorialOwnerID(ownerID);
	}
}

unsigned long long TutorialBuildingObject::getTutorialOwnerID() const {
	TutorialBuildingObjectImplementation* _implementation = static_cast<TutorialBuildingObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTUTORIALOWNERID__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getTutorialOwnerID();
	}
}

DistributedObjectServant* TutorialBuildingObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* TutorialBuildingObject::_getImplementationForRead() const {
	return _impl;
}

void TutorialBuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TutorialBuildingObjectImplementation
 */

TutorialBuildingObjectImplementation::TutorialBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


TutorialBuildingObjectImplementation::~TutorialBuildingObjectImplementation() {
}


void TutorialBuildingObjectImplementation::finalize() {
}

void TutorialBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(TutorialBuildingObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TutorialBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TutorialBuildingObject*>(stub);
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TutorialBuildingObjectImplementation::_getStub() {
	return _this.get();
}

TutorialBuildingObjectImplementation::operator const TutorialBuildingObject*() {
	return _this.get();
}

void TutorialBuildingObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TutorialBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TutorialBuildingObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TutorialBuildingObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TutorialBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TutorialBuildingObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TutorialBuildingObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TutorialBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("TutorialBuildingObject");

}

void TutorialBuildingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TutorialBuildingObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TutorialBuildingObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuildingObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x137bfb62: //TutorialBuildingObject.tutorialOwnerID
		TypeInfo<unsigned long long >::parseFromBinaryStream(&tutorialOwnerID, stream);
		return true;

	}

	return false;
}

void TutorialBuildingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TutorialBuildingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TutorialBuildingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x137bfb62; //TutorialBuildingObject.tutorialOwnerID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&tutorialOwnerID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

TutorialBuildingObjectImplementation::TutorialBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/TutorialBuildingObject.idl():  		Logger.setLoggingName("TutorialBuildingObject");
	Logger::setLoggingName("TutorialBuildingObject");
	// server/zone/objects/building/TutorialBuildingObject.idl():  		tutorialOwnerID = 0;
	tutorialOwnerID = 0;
}

void TutorialBuildingObjectImplementation::setTutorialOwnerID(unsigned long long ownerID) {
	// server/zone/objects/building/TutorialBuildingObject.idl():  		tutorialOwnerID = ownerID;
	tutorialOwnerID = ownerID;
}

unsigned long long TutorialBuildingObjectImplementation::getTutorialOwnerID() const{
	// server/zone/objects/building/TutorialBuildingObject.idl():  		return tutorialOwnerID;
	return tutorialOwnerID;
}

/*
 *	TutorialBuildingObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TutorialBuildingObjectAdapter::TutorialBuildingObjectAdapter(TutorialBuildingObject* obj) : BuildingObjectAdapter(obj) {
}

void TutorialBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETTUTORIALOWNERID__LONG_:
		{
			unsigned long long ownerID = inv->getUnsignedLongParameter();
			
			setTutorialOwnerID(ownerID);
			
		}
		break;
	case RPC_GETTUTORIALOWNERID__:
		{
			
			unsigned long long _m_res = getTutorialOwnerID();
			resp->insertLong(_m_res);
		}
		break;
	default:
		BuildingObjectAdapter::invokeMethod(methid, inv);
	}
}

void TutorialBuildingObjectAdapter::setTutorialOwnerID(unsigned long long ownerID) {
	(static_cast<TutorialBuildingObject*>(stub))->setTutorialOwnerID(ownerID);
}

unsigned long long TutorialBuildingObjectAdapter::getTutorialOwnerID() const {
	return (static_cast<TutorialBuildingObject*>(stub))->getTutorialOwnerID();
}

/*
 *	TutorialBuildingObjectHelper
 */

TutorialBuildingObjectHelper* TutorialBuildingObjectHelper::staticInitializer = TutorialBuildingObjectHelper::instance();

TutorialBuildingObjectHelper::TutorialBuildingObjectHelper() {
	className = "TutorialBuildingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void TutorialBuildingObjectHelper::finalizeHelper() {
	TutorialBuildingObjectHelper::finalize();
}

DistributedObject* TutorialBuildingObjectHelper::instantiateObject() {
	return new TutorialBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TutorialBuildingObjectHelper::instantiateServant() {
	return new TutorialBuildingObjectImplementation();
}

DistributedObjectPOD* TutorialBuildingObjectHelper::instantiatePOD() {
	return new TutorialBuildingObjectPOD();
}

DistributedObjectAdapter* TutorialBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TutorialBuildingObjectAdapter(static_cast<TutorialBuildingObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	TutorialBuildingObjectPOD
 */

TutorialBuildingObjectPOD::~TutorialBuildingObjectPOD() {
	finalize();
}

TutorialBuildingObjectPOD::TutorialBuildingObjectPOD(void) {
	_className = "TutorialBuildingObject";
}


void TutorialBuildingObjectPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TutorialBuildingObjectPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TutorialBuildingObjectPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (tutorialOwnerID) {
	_nameHashCode = 0x137bfb62; //TutorialBuildingObject.tutorialOwnerID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&tutorialOwnerID.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool TutorialBuildingObjectPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuildingObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x137bfb62: //TutorialBuildingObject.tutorialOwnerID
		{
			unsigned long long _mntutorialOwnerID;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mntutorialOwnerID, stream);
			tutorialOwnerID = std::move(_mntutorialOwnerID);
		}
		return true;

	}

	return false;
}

void TutorialBuildingObjectPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TutorialBuildingObjectPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void TutorialBuildingObjectPOD::writeObjectCompact(ObjectOutputStream* stream) {
	BuildingObjectPOD::writeObjectCompact(stream);

	TypeInfo<unsigned long long >::toBinaryStream(&tutorialOwnerID.value(), stream);


}

