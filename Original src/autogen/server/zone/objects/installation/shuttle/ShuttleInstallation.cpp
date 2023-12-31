/*
 *	autogen/server/zone/objects/installation/shuttle/ShuttleInstallation.cpp generated by engine3 IDL compiler 0.70
 */

#include "ShuttleInstallation.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ShuttleInstallationStub
 */

enum {RPC_CHECKREQUISITESFORPLACEMENT__CREATUREOBJECT_ = 88316350,RPC_ISSHUTTLEINSTALLATION__};

ShuttleInstallation::ShuttleInstallation() : InstallationObject(DummyConstructorParameter::instance()) {
	ShuttleInstallationImplementation* _implementation = new ShuttleInstallationImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ShuttleInstallation");
}

ShuttleInstallation::ShuttleInstallation(DummyConstructorParameter* param) : InstallationObject(param) {
	_setClassName("ShuttleInstallation");
}

ShuttleInstallation::~ShuttleInstallation() {
}



bool ShuttleInstallation::checkRequisitesForPlacement(CreatureObject* player) {
	ShuttleInstallationImplementation* _implementation = static_cast<ShuttleInstallationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKREQUISITESFORPLACEMENT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->checkRequisitesForPlacement(player);
	}
}

bool ShuttleInstallation::isShuttleInstallation() {
	ShuttleInstallationImplementation* _implementation = static_cast<ShuttleInstallationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSHUTTLEINSTALLATION__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isShuttleInstallation();
	}
}

DistributedObjectServant* ShuttleInstallation::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ShuttleInstallation::_getImplementationForRead() const {
	return _impl;
}

void ShuttleInstallation::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ShuttleInstallationImplementation
 */

ShuttleInstallationImplementation::ShuttleInstallationImplementation(DummyConstructorParameter* param) : InstallationObjectImplementation(param) {
	_initializeImplementation();
}


ShuttleInstallationImplementation::~ShuttleInstallationImplementation() {
}


void ShuttleInstallationImplementation::finalize() {
}

void ShuttleInstallationImplementation::_initializeImplementation() {
	_setClassHelper(ShuttleInstallationHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ShuttleInstallationImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ShuttleInstallation*>(stub);
	InstallationObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ShuttleInstallationImplementation::_getStub() {
	return _this.get();
}

ShuttleInstallationImplementation::operator const ShuttleInstallation*() {
	return _this.get();
}

void ShuttleInstallationImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ShuttleInstallationImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ShuttleInstallationImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ShuttleInstallationImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ShuttleInstallationImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ShuttleInstallationImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ShuttleInstallationImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ShuttleInstallationImplementation::_serializationHelperMethod() {
	InstallationObjectImplementation::_serializationHelperMethod();

	_setClassName("ShuttleInstallation");

}

void ShuttleInstallationImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ShuttleInstallationImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ShuttleInstallationImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (InstallationObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ShuttleInstallationImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ShuttleInstallationImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ShuttleInstallationImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = InstallationObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

void ShuttleInstallationImplementation::writeJSON(nlohmann::json& j) {
	InstallationObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}

ShuttleInstallationImplementation::ShuttleInstallationImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/shuttle/ShuttleInstallation.idl():  		setLoggingName("ShuttleInstallation");
	setLoggingName("ShuttleInstallation");
}

bool ShuttleInstallationImplementation::isShuttleInstallation() {
	// server/zone/objects/installation/shuttle/ShuttleInstallation.idl():  		return true;
	return true;
}

/*
 *	ShuttleInstallationAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ShuttleInstallationAdapter::ShuttleInstallationAdapter(ShuttleInstallation* obj) : InstallationObjectAdapter(obj) {
}

void ShuttleInstallationAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_CHECKREQUISITESFORPLACEMENT__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			bool _m_res = checkRequisitesForPlacement(player);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISSHUTTLEINSTALLATION__:
		{
			
			bool _m_res = isShuttleInstallation();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		InstallationObjectAdapter::invokeMethod(methid, inv);
	}
}

bool ShuttleInstallationAdapter::checkRequisitesForPlacement(CreatureObject* player) {
	return (static_cast<ShuttleInstallation*>(stub))->checkRequisitesForPlacement(player);
}

bool ShuttleInstallationAdapter::isShuttleInstallation() {
	return (static_cast<ShuttleInstallation*>(stub))->isShuttleInstallation();
}

/*
 *	ShuttleInstallationHelper
 */

ShuttleInstallationHelper* ShuttleInstallationHelper::staticInitializer = ShuttleInstallationHelper::instance();

ShuttleInstallationHelper::ShuttleInstallationHelper() {
	className = "ShuttleInstallation";

	Core::getObjectBroker()->registerClass(className, this);
}

void ShuttleInstallationHelper::finalizeHelper() {
	ShuttleInstallationHelper::finalize();
}

DistributedObject* ShuttleInstallationHelper::instantiateObject() {
	return new ShuttleInstallation(DummyConstructorParameter::instance());
}

DistributedObjectServant* ShuttleInstallationHelper::instantiateServant() {
	return new ShuttleInstallationImplementation();
}

DistributedObjectPOD* ShuttleInstallationHelper::instantiatePOD() {
	return new ShuttleInstallationPOD();
}

DistributedObjectAdapter* ShuttleInstallationHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ShuttleInstallationAdapter(static_cast<ShuttleInstallation*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ShuttleInstallationPOD
 */

ShuttleInstallationPOD::~ShuttleInstallationPOD() {
	finalize();
}

ShuttleInstallationPOD::ShuttleInstallationPOD(void) {
	_className = "ShuttleInstallation";
}


void ShuttleInstallationPOD::writeJSON(nlohmann::json& j) {
	InstallationObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}


void ShuttleInstallationPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ShuttleInstallationPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ShuttleInstallationPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = InstallationObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool ShuttleInstallationPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (InstallationObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void ShuttleInstallationPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ShuttleInstallationPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ShuttleInstallationPOD::writeObjectCompact(ObjectOutputStream* stream) {
	InstallationObjectPOD::writeObjectCompact(stream);


}

