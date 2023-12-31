/*
 *	autogen/server/zone/objects/tangible/terminal/spaceship/SpaceshipTerminal.cpp generated by engine3 IDL compiler 0.70
 */

#include "SpaceshipTerminal.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SpaceshipTerminalStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_ = 1763262837};

SpaceshipTerminal::SpaceshipTerminal() : Terminal(DummyConstructorParameter::instance()) {
	SpaceshipTerminalImplementation* _implementation = new SpaceshipTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SpaceshipTerminal");
}

SpaceshipTerminal::SpaceshipTerminal(DummyConstructorParameter* param) : Terminal(param) {
	_setClassName("SpaceshipTerminal");
}

SpaceshipTerminal::~SpaceshipTerminal() {
}



int SpaceshipTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	SpaceshipTerminalImplementation* _implementation = static_cast<SpaceshipTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

DistributedObjectServant* SpaceshipTerminal::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SpaceshipTerminal::_getImplementationForRead() const {
	return _impl;
}

void SpaceshipTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SpaceshipTerminalImplementation
 */

SpaceshipTerminalImplementation::SpaceshipTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


SpaceshipTerminalImplementation::~SpaceshipTerminalImplementation() {
}


void SpaceshipTerminalImplementation::finalize() {
}

void SpaceshipTerminalImplementation::_initializeImplementation() {
	_setClassHelper(SpaceshipTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SpaceshipTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SpaceshipTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* SpaceshipTerminalImplementation::_getStub() {
	return _this.get();
}

SpaceshipTerminalImplementation::operator const SpaceshipTerminal*() {
	return _this.get();
}

void SpaceshipTerminalImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SpaceshipTerminalImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SpaceshipTerminalImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SpaceshipTerminalImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SpaceshipTerminalImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SpaceshipTerminalImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SpaceshipTerminalImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SpaceshipTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("SpaceshipTerminal");

}

void SpaceshipTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SpaceshipTerminalImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SpaceshipTerminalImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TerminalImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void SpaceshipTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpaceshipTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpaceshipTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

void SpaceshipTerminalImplementation::writeJSON(nlohmann::json& j) {
	TerminalImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}

SpaceshipTerminalImplementation::SpaceshipTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/spaceship/SpaceshipTerminal.idl():  		Logger.setLoggingName("SpaceshipTerminal");
	Logger::setLoggingName("SpaceshipTerminal");
}

/*
 *	SpaceshipTerminalAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SpaceshipTerminalAdapter::SpaceshipTerminalAdapter(SpaceshipTerminal* obj) : TerminalAdapter(obj) {
}

void SpaceshipTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	default:
		TerminalAdapter::invokeMethod(methid, inv);
	}
}

int SpaceshipTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<SpaceshipTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

/*
 *	SpaceshipTerminalHelper
 */

SpaceshipTerminalHelper* SpaceshipTerminalHelper::staticInitializer = SpaceshipTerminalHelper::instance();

SpaceshipTerminalHelper::SpaceshipTerminalHelper() {
	className = "SpaceshipTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void SpaceshipTerminalHelper::finalizeHelper() {
	SpaceshipTerminalHelper::finalize();
}

DistributedObject* SpaceshipTerminalHelper::instantiateObject() {
	return new SpaceshipTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpaceshipTerminalHelper::instantiateServant() {
	return new SpaceshipTerminalImplementation();
}

DistributedObjectPOD* SpaceshipTerminalHelper::instantiatePOD() {
	return new SpaceshipTerminalPOD();
}

DistributedObjectAdapter* SpaceshipTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpaceshipTerminalAdapter(static_cast<SpaceshipTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	SpaceshipTerminalPOD
 */

SpaceshipTerminalPOD::~SpaceshipTerminalPOD() {
	finalize();
}

SpaceshipTerminalPOD::SpaceshipTerminalPOD(void) {
	_className = "SpaceshipTerminal";
}


void SpaceshipTerminalPOD::writeJSON(nlohmann::json& j) {
	TerminalPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
}


void SpaceshipTerminalPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpaceshipTerminalPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpaceshipTerminalPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool SpaceshipTerminalPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TerminalPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void SpaceshipTerminalPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SpaceshipTerminalPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void SpaceshipTerminalPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TerminalPOD::writeObjectCompact(stream);


}

