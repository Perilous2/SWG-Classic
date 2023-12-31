/*
 *	autogen/server/zone/managers/objectcontroller/ObjectController.cpp generated by engine3 IDL compiler 0.70
 */

#include "ObjectController.h"

#include "server/zone/managers/objectcontroller/command/CommandList.h"

#include "server/zone/managers/objectcontroller/command/CommandConfigManager.h"

#include "server/zone/objects/creature/commands/QueueCommand.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ObjectControllerStub
 */

enum {RPC_FINALIZE__ = 3195147936,RPC_LOADCOMMANDS__,RPC_TRANSFEROBJECT__SCENEOBJECT_SCENEOBJECT_INT_BOOL_BOOL_,RPC_ACTIVATECOMMAND__CREATUREOBJECT_INT_INT_LONG_UNICODESTRING_,};

ObjectController::ObjectController(ZoneProcessServer* srv) : ManagedService(DummyConstructorParameter::instance()) {
	ObjectControllerImplementation* _implementation = new ObjectControllerImplementation(srv);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ObjectController");
}

ObjectController::ObjectController(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("ObjectController");
}

ObjectController::~ObjectController() {
}



void ObjectController::loadCommands() {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADCOMMANDS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->loadCommands();
	}
}

bool ObjectController::transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient, bool allowOverflow) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRANSFEROBJECT__SCENEOBJECT_SCENEOBJECT_INT_BOOL_BOOL_);
		method.addObjectParameter(objectToTransfer);
		method.addObjectParameter(destinationObject);
		method.addSignedIntParameter(containmentType);
		method.addBooleanParameter(notifyClient);
		method.addBooleanParameter(allowOverflow);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->transferObject(objectToTransfer, destinationObject, containmentType, notifyClient, allowOverflow);
	}
}

float ObjectController::activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) const {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATECOMMAND__CREATUREOBJECT_INT_INT_LONG_UNICODESTRING_);
		method.addObjectParameter(object);
		method.addUnsignedIntParameter(actionCRC);
		method.addUnsignedIntParameter(actionCount);
		method.addUnsignedLongParameter(targetID);
		method.addUnicodeParameter(arguments);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->activateCommand(object, actionCRC, actionCount, targetID, arguments);
	}
}

void ObjectController::addQueueCommand(QueueCommand* command) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->addQueueCommand(command);
	}
}

const QueueCommand* ObjectController::getQueueCommand(const String& name) const {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getQueueCommand(name);
	}
}

const QueueCommand* ObjectController::getQueueCommand(unsigned int crc) const {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getQueueCommand(crc);
	}
}

void ObjectController::logAdminCommand(SceneObject* object, const QueueCommand* command, unsigned long long targetID, const UnicodeString& argumets) const {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->logAdminCommand(object, command, targetID, argumets);
	}
}

DistributedObjectServant* ObjectController::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ObjectController::_getImplementationForRead() const {
	return _impl;
}

void ObjectController::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ObjectControllerImplementation
 */

ObjectControllerImplementation::ObjectControllerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


ObjectControllerImplementation::~ObjectControllerImplementation() {
	ObjectControllerImplementation::finalize();
}


void ObjectControllerImplementation::_initializeImplementation() {
	_setClassHelper(ObjectControllerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ObjectControllerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ObjectController*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* ObjectControllerImplementation::_getStub() {
	return _this.get();
}

ObjectControllerImplementation::operator const ObjectController*() {
	return _this.get();
}

void ObjectControllerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ObjectControllerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ObjectControllerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ObjectControllerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ObjectControllerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ObjectControllerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ObjectControllerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ObjectControllerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("ObjectController");

}

void ObjectControllerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ObjectControllerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ObjectControllerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedServiceImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ObjectControllerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ObjectControllerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ObjectControllerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

ObjectControllerImplementation::ObjectControllerImplementation(ZoneProcessServer* srv) {
	_initializeImplementation();
	// server/zone/managers/objectcontroller/ObjectController.idl():  		server = srv;
	server = srv;
	// server/zone/managers/objectcontroller/ObjectController.idl():  		Logger.setLoggingName("ObjectController");
	Logger::setLoggingName("ObjectController");
	// server/zone/managers/objectcontroller/ObjectController.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/objectcontroller/ObjectController.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/objectcontroller/ObjectController.idl():  		loadCommands();
	loadCommands();
}

/*
 *	ObjectControllerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ObjectControllerAdapter::ObjectControllerAdapter(ObjectController* obj) : ManagedServiceAdapter(obj) {
}

void ObjectControllerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_FINALIZE__:
		{
			
			finalize();
			
		}
		break;
	case RPC_LOADCOMMANDS__:
		{
			
			loadCommands();
			
		}
		break;
	case RPC_TRANSFEROBJECT__SCENEOBJECT_SCENEOBJECT_INT_BOOL_BOOL_:
		{
			SceneObject* objectToTransfer = static_cast<SceneObject*>(inv->getObjectParameter());
			SceneObject* destinationObject = static_cast<SceneObject*>(inv->getObjectParameter());
			int containmentType = inv->getSignedIntParameter();
			bool notifyClient = inv->getBooleanParameter();
			bool allowOverflow = inv->getBooleanParameter();
			
			bool _m_res = transferObject(objectToTransfer, destinationObject, containmentType, notifyClient, allowOverflow);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ACTIVATECOMMAND__CREATUREOBJECT_INT_INT_LONG_UNICODESTRING_:
		{
			CreatureObject* object = static_cast<CreatureObject*>(inv->getObjectParameter());
			unsigned int actionCRC = inv->getUnsignedIntParameter();
			unsigned int actionCount = inv->getUnsignedIntParameter();
			unsigned long long targetID = inv->getUnsignedLongParameter();
			 UnicodeString arguments; inv->getUnicodeParameter(arguments);
			
			float _m_res = activateCommand(object, actionCRC, actionCount, targetID, arguments);
			resp->insertFloat(_m_res);
		}
		break;
	default:
		ManagedServiceAdapter::invokeMethod(methid, inv);
	}
}

void ObjectControllerAdapter::finalize() {
	(static_cast<ObjectController*>(stub))->finalize();
}

void ObjectControllerAdapter::loadCommands() {
	(static_cast<ObjectController*>(stub))->loadCommands();
}

bool ObjectControllerAdapter::transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient, bool allowOverflow) {
	return (static_cast<ObjectController*>(stub))->transferObject(objectToTransfer, destinationObject, containmentType, notifyClient, allowOverflow);
}

float ObjectControllerAdapter::activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) const {
	return (static_cast<ObjectController*>(stub))->activateCommand(object, actionCRC, actionCount, targetID, arguments);
}

/*
 *	ObjectControllerHelper
 */

ObjectControllerHelper* ObjectControllerHelper::staticInitializer = ObjectControllerHelper::instance();

ObjectControllerHelper::ObjectControllerHelper() {
	className = "ObjectController";

	Core::getObjectBroker()->registerClass(className, this);
}

void ObjectControllerHelper::finalizeHelper() {
	ObjectControllerHelper::finalize();
}

DistributedObject* ObjectControllerHelper::instantiateObject() {
	return new ObjectController(DummyConstructorParameter::instance());
}

DistributedObjectServant* ObjectControllerHelper::instantiateServant() {
	return new ObjectControllerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* ObjectControllerHelper::instantiatePOD() {
	return new ObjectControllerPOD();
}

DistributedObjectAdapter* ObjectControllerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ObjectControllerAdapter(static_cast<ObjectController*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ObjectControllerPOD
 */

ObjectControllerPOD::~ObjectControllerPOD() {
	finalize();
}

ObjectControllerPOD::ObjectControllerPOD(void) {
	_className = "ObjectController";
}


void ObjectControllerPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ObjectControllerPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ObjectControllerPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServicePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool ObjectControllerPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedServicePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ObjectControllerPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ObjectControllerPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ObjectControllerPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedServicePOD::writeObjectCompact(stream);


}

