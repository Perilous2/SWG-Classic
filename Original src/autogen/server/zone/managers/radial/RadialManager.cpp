/*
 *	autogen/server/zone/managers/radial/RadialManager.cpp generated by engine3 IDL compiler 0.70
 */

#include "RadialManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	RadialManagerStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_LONG_ = 618011503,};

RadialManager::RadialManager(ZoneServer* server) : ManagedObject(DummyConstructorParameter::instance()) {
	RadialManagerImplementation* _implementation = new RadialManagerImplementation(server);
	_impl = _implementation;
	_implementation->_initializeImplementation();
	_impl->_setStub(this);
	_setClassName("RadialManager");
}

RadialManager::RadialManager(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("RadialManager");
}

RadialManager::~RadialManager() {
}



void RadialManager::handleObjectMenuSelect(CreatureObject* player, byte selectID, unsigned long long objectID) {
	RadialManagerImplementation* _implementation = static_cast<RadialManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_LONG_);
		method.addObjectParameter(player);
		method.addByteParameter(selectID);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else {
		_implementation->handleObjectMenuSelect(player, selectID, objectID);
	}
}

void RadialManager::handleObjectMenuRequest(CreatureObject* player, ObjectMenuResponse* defaultMenuResponse, unsigned long long objectID) {
	RadialManagerImplementation* _implementation = static_cast<RadialManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->handleObjectMenuRequest(player, defaultMenuResponse, objectID);
	}
}

DistributedObjectServant* RadialManager::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RadialManager::_getImplementationForRead() const {
	return _impl;
}

void RadialManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RadialManagerImplementation
 */

RadialManagerImplementation::RadialManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


RadialManagerImplementation::~RadialManagerImplementation() {
}


void RadialManagerImplementation::finalize() {
}

void RadialManagerImplementation::_initializeImplementation() {
	_setClassHelper(RadialManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RadialManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RadialManager*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RadialManagerImplementation::_getStub() {
	return _this.get();
}

RadialManagerImplementation::operator const RadialManager*() {
	return _this.get();
}

void RadialManagerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RadialManagerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RadialManagerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RadialManagerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RadialManagerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RadialManagerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RadialManagerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RadialManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("RadialManager");

}

void RadialManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RadialManagerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RadialManagerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcc6ffcfd: //RadialManager.zoneServer
		TypeInfo<ManagedReference<ZoneServer* > >::parseFromBinaryStream(&zoneServer, stream);
		return true;

	}

	return false;
}

void RadialManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RadialManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RadialManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xcc6ffcfd; //RadialManager.zoneServer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ZoneServer* > >::toBinaryStream(&zoneServer, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

/*
 *	RadialManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RadialManagerAdapter::RadialManagerAdapter(RadialManager* obj) : ManagedObjectAdapter(obj) {
}

void RadialManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_LONG_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectID = inv->getByteParameter();
			unsigned long long objectID = inv->getUnsignedLongParameter();
			
			handleObjectMenuSelect(player, selectID, objectID);
			
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

void RadialManagerAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectID, unsigned long long objectID) {
	(static_cast<RadialManager*>(stub))->handleObjectMenuSelect(player, selectID, objectID);
}

/*
 *	RadialManagerHelper
 */

RadialManagerHelper* RadialManagerHelper::staticInitializer = RadialManagerHelper::instance();

RadialManagerHelper::RadialManagerHelper() {
	className = "RadialManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void RadialManagerHelper::finalizeHelper() {
	RadialManagerHelper::finalize();
}

DistributedObject* RadialManagerHelper::instantiateObject() {
	return new RadialManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* RadialManagerHelper::instantiateServant() {
	return new RadialManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* RadialManagerHelper::instantiatePOD() {
	return new RadialManagerPOD();
}

DistributedObjectAdapter* RadialManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RadialManagerAdapter(static_cast<RadialManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	RadialManagerPOD
 */

RadialManagerPOD::~RadialManagerPOD() {
}

RadialManagerPOD::RadialManagerPOD(void) {
	_className = "RadialManager";
}


void RadialManagerPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RadialManagerPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RadialManagerPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (zoneServer) {
	_nameHashCode = 0xcc6ffcfd; //RadialManager.zoneServer
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ZoneServerPOD* > >::toBinaryStream(&zoneServer.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool RadialManagerPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcc6ffcfd: //RadialManager.zoneServer
		{
			ManagedReference<ZoneServerPOD* > _mnzoneServer;
			TypeInfo<ManagedReference<ZoneServerPOD* > >::parseFromBinaryStream(&_mnzoneServer, stream);
			zoneServer = std::move(_mnzoneServer);
		}
		return true;

	}

	return false;
}

void RadialManagerPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RadialManagerPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void RadialManagerPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedObjectPOD::writeObjectCompact(stream);

	TypeInfo<ManagedReference<ZoneServerPOD* > >::toBinaryStream(&zoneServer.value(), stream);


}

