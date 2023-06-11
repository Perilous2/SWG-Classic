/*
 *	autogen/server/zone/objects/installation/generator/GeneratorObject.cpp generated by engine3 IDL compiler 0.70
 */

#include "GeneratorObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	GeneratorObjectStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SYNCHRONIZEDUILISTEN__CREATUREOBJECT_INT_,RPC_SYNCHRONIZEDUISTOPLISTEN__CREATUREOBJECT_INT_,RPC_ISGENERATOROBJECT__,RPC_GETREDEEDMESSAGE__};

GeneratorObject::GeneratorObject() : InstallationObject(DummyConstructorParameter::instance()) {
	GeneratorObjectImplementation* _implementation = new GeneratorObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("GeneratorObject");
}

GeneratorObject::GeneratorObject(DummyConstructorParameter* param) : InstallationObject(param) {
	_setClassName("GeneratorObject");
}

GeneratorObject::~GeneratorObject() {
}



void GeneratorObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	GeneratorObjectImplementation* _implementation = static_cast<GeneratorObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int GeneratorObject::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	GeneratorObjectImplementation* _implementation = static_cast<GeneratorObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void GeneratorObject::synchronizedUIListen(CreatureObject* player, int value) {
	GeneratorObjectImplementation* _implementation = static_cast<GeneratorObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SYNCHRONIZEDUILISTEN__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->synchronizedUIListen(player, value);
	}
}

void GeneratorObject::synchronizedUIStopListen(CreatureObject* player, int value) {
	GeneratorObjectImplementation* _implementation = static_cast<GeneratorObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SYNCHRONIZEDUISTOPLISTEN__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->synchronizedUIStopListen(player, value);
	}
}

bool GeneratorObject::isGeneratorObject() {
	GeneratorObjectImplementation* _implementation = static_cast<GeneratorObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGENERATOROBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isGeneratorObject();
	}
}

String GeneratorObject::getRedeedMessage() {
	GeneratorObjectImplementation* _implementation = static_cast<GeneratorObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREDEEDMESSAGE__);

		String _return_getRedeedMessage;
		method.executeWithAsciiReturn(_return_getRedeedMessage);
		return _return_getRedeedMessage;
	} else {
		return _implementation->getRedeedMessage();
	}
}

DistributedObjectServant* GeneratorObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* GeneratorObject::_getImplementationForRead() const {
	return _impl;
}

void GeneratorObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	GeneratorObjectImplementation
 */

GeneratorObjectImplementation::GeneratorObjectImplementation(DummyConstructorParameter* param) : InstallationObjectImplementation(param) {
	_initializeImplementation();
}


GeneratorObjectImplementation::~GeneratorObjectImplementation() {
}


void GeneratorObjectImplementation::finalize() {
}

void GeneratorObjectImplementation::_initializeImplementation() {
	_setClassHelper(GeneratorObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void GeneratorObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<GeneratorObject*>(stub);
	InstallationObjectImplementation::_setStub(stub);
}

DistributedObjectStub* GeneratorObjectImplementation::_getStub() {
	return _this.get();
}

GeneratorObjectImplementation::operator const GeneratorObject*() {
	return _this.get();
}

void GeneratorObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void GeneratorObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void GeneratorObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void GeneratorObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void GeneratorObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void GeneratorObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void GeneratorObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void GeneratorObjectImplementation::_serializationHelperMethod() {
	InstallationObjectImplementation::_serializationHelperMethod();

	_setClassName("GeneratorObject");

}

void GeneratorObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(GeneratorObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool GeneratorObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (InstallationObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void GeneratorObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = GeneratorObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int GeneratorObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = InstallationObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

void GeneratorObjectImplementation::writeJSON(nlohmann::json& j) {
	InstallationObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}

GeneratorObjectImplementation::GeneratorObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/generator/GeneratorObject.idl():  		Logger.setLoggingName("GeneratorObject");
	Logger::setLoggingName("GeneratorObject");
}

bool GeneratorObjectImplementation::isGeneratorObject() {
	// server/zone/objects/installation/generator/GeneratorObject.idl():  		return true;
	return true;
}

/*
 *	GeneratorObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


GeneratorObjectAdapter::GeneratorObjectAdapter(GeneratorObject* obj) : InstallationObjectAdapter(obj) {
}

void GeneratorObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SYNCHRONIZEDUILISTEN__CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			int value = inv->getSignedIntParameter();
			
			synchronizedUIListen(player, value);
			
		}
		break;
	case RPC_SYNCHRONIZEDUISTOPLISTEN__CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			int value = inv->getSignedIntParameter();
			
			synchronizedUIStopListen(player, value);
			
		}
		break;
	case RPC_ISGENERATOROBJECT__:
		{
			
			bool _m_res = isGeneratorObject();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETREDEEDMESSAGE__:
		{
			
			String _m_res = getRedeedMessage();
			resp->insertAscii(_m_res);
		}
		break;
	default:
		InstallationObjectAdapter::invokeMethod(methid, inv);
	}
}

int GeneratorObjectAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<GeneratorObject*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void GeneratorObjectAdapter::synchronizedUIListen(CreatureObject* player, int value) {
	(static_cast<GeneratorObject*>(stub))->synchronizedUIListen(player, value);
}

void GeneratorObjectAdapter::synchronizedUIStopListen(CreatureObject* player, int value) {
	(static_cast<GeneratorObject*>(stub))->synchronizedUIStopListen(player, value);
}

bool GeneratorObjectAdapter::isGeneratorObject() {
	return (static_cast<GeneratorObject*>(stub))->isGeneratorObject();
}

String GeneratorObjectAdapter::getRedeedMessage() {
	return (static_cast<GeneratorObject*>(stub))->getRedeedMessage();
}

/*
 *	GeneratorObjectHelper
 */

GeneratorObjectHelper* GeneratorObjectHelper::staticInitializer = GeneratorObjectHelper::instance();

GeneratorObjectHelper::GeneratorObjectHelper() {
	className = "GeneratorObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void GeneratorObjectHelper::finalizeHelper() {
	GeneratorObjectHelper::finalize();
}

DistributedObject* GeneratorObjectHelper::instantiateObject() {
	return new GeneratorObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* GeneratorObjectHelper::instantiateServant() {
	return new GeneratorObjectImplementation();
}

DistributedObjectPOD* GeneratorObjectHelper::instantiatePOD() {
	return new GeneratorObjectPOD();
}

DistributedObjectAdapter* GeneratorObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GeneratorObjectAdapter(static_cast<GeneratorObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	GeneratorObjectPOD
 */

GeneratorObjectPOD::~GeneratorObjectPOD() {
	finalize();
}

GeneratorObjectPOD::GeneratorObjectPOD(void) {
	_className = "GeneratorObject";
}


void GeneratorObjectPOD::writeJSON(nlohmann::json& j) {
	InstallationObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}


void GeneratorObjectPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = GeneratorObjectPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int GeneratorObjectPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = InstallationObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool GeneratorObjectPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (InstallationObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void GeneratorObjectPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(GeneratorObjectPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void GeneratorObjectPOD::writeObjectCompact(ObjectOutputStream* stream) {
	InstallationObjectPOD::writeObjectCompact(stream);


}
