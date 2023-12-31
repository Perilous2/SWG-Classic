/*
 *	autogen/server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.cpp generated by engine3 IDL compiler 0.70
 */

#include "SuiListBoxMenuItem.h"

/*
 *	SuiListBoxMenuItemStub
 */

enum {RPC_GETOBJECTID__ = 2025223705,RPC_GETOPTIONNAME__};

SuiListBoxMenuItem::SuiListBoxMenuItem(const String& name, unsigned long long oid) : ManagedObject(DummyConstructorParameter::instance()) {
	SuiListBoxMenuItemImplementation* _implementation = new SuiListBoxMenuItemImplementation(name, oid);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiListBoxMenuItem");
}

SuiListBoxMenuItem::SuiListBoxMenuItem(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("SuiListBoxMenuItem");
}

SuiListBoxMenuItem::~SuiListBoxMenuItem() {
}



unsigned long long SuiListBoxMenuItem::getObjectID() const {
	SuiListBoxMenuItemImplementation* _implementation = static_cast<SuiListBoxMenuItemImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getObjectID();
	}
}

String SuiListBoxMenuItem::getOptionName() const {
	SuiListBoxMenuItemImplementation* _implementation = static_cast<SuiListBoxMenuItemImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOPTIONNAME__);

		String _return_getOptionName;
		method.executeWithAsciiReturn(_return_getOptionName);
		return _return_getOptionName;
	} else {
		return _implementation->getOptionName();
	}
}

DistributedObjectServant* SuiListBoxMenuItem::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SuiListBoxMenuItem::_getImplementationForRead() const {
	return _impl;
}

void SuiListBoxMenuItem::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiListBoxMenuItemImplementation
 */

SuiListBoxMenuItemImplementation::SuiListBoxMenuItemImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


SuiListBoxMenuItemImplementation::~SuiListBoxMenuItemImplementation() {
}


void SuiListBoxMenuItemImplementation::finalize() {
}

void SuiListBoxMenuItemImplementation::_initializeImplementation() {
	_setClassHelper(SuiListBoxMenuItemHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiListBoxMenuItemImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiListBoxMenuItem*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SuiListBoxMenuItemImplementation::_getStub() {
	return _this.get();
}

SuiListBoxMenuItemImplementation::operator const SuiListBoxMenuItem*() {
	return _this.get();
}

void SuiListBoxMenuItemImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SuiListBoxMenuItemImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SuiListBoxMenuItemImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SuiListBoxMenuItemImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SuiListBoxMenuItemImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SuiListBoxMenuItemImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SuiListBoxMenuItemImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SuiListBoxMenuItemImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("SuiListBoxMenuItem");

}

void SuiListBoxMenuItemImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiListBoxMenuItemImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiListBoxMenuItemImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x867f153c: //SuiListBoxMenuItem.optionName
		TypeInfo<String >::parseFromBinaryStream(&optionName, stream);
		return true;

	case 0x6e65d941: //SuiListBoxMenuItem.objectID
		TypeInfo<unsigned long long >::parseFromBinaryStream(&objectID, stream);
		return true;

	}

	return false;
}

void SuiListBoxMenuItemImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiListBoxMenuItemImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiListBoxMenuItemImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x867f153c; //SuiListBoxMenuItem.optionName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&optionName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x6e65d941; //SuiListBoxMenuItem.objectID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&objectID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

SuiListBoxMenuItemImplementation::SuiListBoxMenuItemImplementation(const String& name, unsigned long long oid) {
	_initializeImplementation();
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		optionName = name;
	optionName = name;
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		objectID = oid;
	objectID = oid;
}

unsigned long long SuiListBoxMenuItemImplementation::getObjectID() const{
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		return objectID;
	return objectID;
}

String SuiListBoxMenuItemImplementation::getOptionName() const{
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		return optionName;
	return optionName;
}

/*
 *	SuiListBoxMenuItemAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiListBoxMenuItemAdapter::SuiListBoxMenuItemAdapter(SuiListBoxMenuItem* obj) : ManagedObjectAdapter(obj) {
}

void SuiListBoxMenuItemAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETOBJECTID__:
		{
			
			unsigned long long _m_res = getObjectID();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_GETOPTIONNAME__:
		{
			
			String _m_res = getOptionName();
			resp->insertAscii(_m_res);
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

unsigned long long SuiListBoxMenuItemAdapter::getObjectID() const {
	return (static_cast<SuiListBoxMenuItem*>(stub))->getObjectID();
}

String SuiListBoxMenuItemAdapter::getOptionName() const {
	return (static_cast<SuiListBoxMenuItem*>(stub))->getOptionName();
}

/*
 *	SuiListBoxMenuItemHelper
 */

SuiListBoxMenuItemHelper* SuiListBoxMenuItemHelper::staticInitializer = SuiListBoxMenuItemHelper::instance();

SuiListBoxMenuItemHelper::SuiListBoxMenuItemHelper() {
	className = "SuiListBoxMenuItem";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiListBoxMenuItemHelper::finalizeHelper() {
	SuiListBoxMenuItemHelper::finalize();
}

DistributedObject* SuiListBoxMenuItemHelper::instantiateObject() {
	return new SuiListBoxMenuItem(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiListBoxMenuItemHelper::instantiateServant() {
	return new SuiListBoxMenuItemImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* SuiListBoxMenuItemHelper::instantiatePOD() {
	return new SuiListBoxMenuItemPOD();
}

DistributedObjectAdapter* SuiListBoxMenuItemHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiListBoxMenuItemAdapter(static_cast<SuiListBoxMenuItem*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	SuiListBoxMenuItemPOD
 */

SuiListBoxMenuItemPOD::~SuiListBoxMenuItemPOD() {
}

SuiListBoxMenuItemPOD::SuiListBoxMenuItemPOD(void) {
	_className = "SuiListBoxMenuItem";
}


void SuiListBoxMenuItemPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiListBoxMenuItemPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiListBoxMenuItemPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (optionName) {
	_nameHashCode = 0x867f153c; //SuiListBoxMenuItem.optionName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&optionName.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (objectID) {
	_nameHashCode = 0x6e65d941; //SuiListBoxMenuItem.objectID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&objectID.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool SuiListBoxMenuItemPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x867f153c: //SuiListBoxMenuItem.optionName
		{
			String _mnoptionName;
			TypeInfo<String >::parseFromBinaryStream(&_mnoptionName, stream);
			optionName = std::move(_mnoptionName);
		}
		return true;

	case 0x6e65d941: //SuiListBoxMenuItem.objectID
		{
			unsigned long long _mnobjectID;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mnobjectID, stream);
			objectID = std::move(_mnobjectID);
		}
		return true;

	}

	return false;
}

void SuiListBoxMenuItemPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiListBoxMenuItemPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void SuiListBoxMenuItemPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedObjectPOD::writeObjectCompact(stream);

	TypeInfo<String >::toBinaryStream(&optionName.value(), stream);

	TypeInfo<unsigned long long >::toBinaryStream(&objectID.value(), stream);


}

