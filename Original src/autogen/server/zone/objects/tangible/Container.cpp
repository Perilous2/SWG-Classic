/*
 *	autogen/server/zone/objects/tangible/Container.cpp generated by engine3 IDL compiler 0.70
 */

#include "Container.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ContainerStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_,RPC_ISCONTAINEROBJECT__,RPC_ISCONTAINERLOCKED__,RPC_SETLOCKEDSTATUS__BOOL_,RPC_GETLOCKCHANCE__,RPC_GETLOCKTIME__,RPC_ISRELOCKING__,RPC_SETRELOCKINGSTATUS__BOOL_};

Container::Container() : TangibleObject(DummyConstructorParameter::instance()) {
	ContainerImplementation* _implementation = new ContainerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Container");
}

Container::Container(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("Container");
}

Container::~Container() {
}



void Container::loadTemplateData(SharedObjectTemplate* templateData) {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void Container::initializeTransientMembers() {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void Container::notifyLoadFromDatabase() {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->notifyLoadFromDatabase();
	}
}

void Container::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int Container::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementation());
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

int Container::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addAsciiParameter(errorDescription);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->canAddObject(object, containmentType, errorDescription);
	}
}

bool Container::isContainerObject() {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCONTAINEROBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isContainerObject();
	}
}

bool Container::isContainerLocked() const {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCONTAINERLOCKED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isContainerLocked();
	}
}

void Container::setLockedStatus(bool lock) {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETLOCKEDSTATUS__BOOL_);
		method.addBooleanParameter(lock);

		method.executeWithVoidReturn();
	} else {
		_implementation->setLockedStatus(lock);
	}
}

int Container::getLockChance() const {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETLOCKCHANCE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getLockChance();
	}
}

long long Container::getLockTime() const {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETLOCKTIME__);

		return method.executeWithSignedLongReturn();
	} else {
		return _implementation->getLockTime();
	}
}

bool Container::isRelocking() const {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRELOCKING__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRelocking();
	}
}

bool Container::setRelockingStatus(bool relock) {
	ContainerImplementation* _implementation = static_cast<ContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRELOCKINGSTATUS__BOOL_);
		method.addBooleanParameter(relock);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->setRelockingStatus(relock);
	}
}

DistributedObjectServant* Container::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* Container::_getImplementationForRead() const {
	return _impl;
}

void Container::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ContainerImplementation
 */

ContainerImplementation::ContainerImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ContainerImplementation::~ContainerImplementation() {
}


void ContainerImplementation::finalize() {
}

void ContainerImplementation::_initializeImplementation() {
	_setClassHelper(ContainerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ContainerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Container*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ContainerImplementation::_getStub() {
	return _this.get();
}

ContainerImplementation::operator const Container*() {
	return _this.get();
}

void ContainerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ContainerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ContainerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ContainerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ContainerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ContainerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ContainerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ContainerImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("Container");

}

void ContainerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ContainerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ContainerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa51314dc: //Container.locked
		TypeInfo<bool >::parseFromBinaryStream(&locked, stream);
		return true;

	}

	return false;
}

void ContainerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ContainerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ContainerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xa51314dc; //Container.locked
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&locked, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void ContainerImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["locked"] = locked;

	j["Container"] = thisObject;
}

ContainerImplementation::ContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/Container.idl():  		Logger.setLoggingName("Container");
	Logger::setLoggingName("Container");
	// server/zone/objects/tangible/Container.idl():  		locked = false;
	locked = false;
	// server/zone/objects/tangible/Container.idl():  		relocking = false;
	relocking = false;
}

bool ContainerImplementation::isContainerObject() {
	// server/zone/objects/tangible/Container.idl():  		return true;
	return true;
}

bool ContainerImplementation::isContainerLocked() const{
	// server/zone/objects/tangible/Container.idl():  		return locked;
	return locked;
}

void ContainerImplementation::setLockedStatus(bool lock) {
	// server/zone/objects/tangible/Container.idl():  		locked = lock;
	locked = lock;
}

int ContainerImplementation::getLockChance() const{
	// server/zone/objects/tangible/Container.idl():  		return 15;
	return 15;
}

long long ContainerImplementation::getLockTime() const{
	// server/zone/objects/tangible/Container.idl():  		return 60*30*1000;
	return 60 * 30 * 1000;
}

bool ContainerImplementation::isRelocking() const{
	// server/zone/objects/tangible/Container.idl():  		return relocking;
	return relocking;
}

bool ContainerImplementation::setRelockingStatus(bool relock) {
	// server/zone/objects/tangible/Container.idl():  		return relocking = relock;
	return relocking = relock;
}

/*
 *	ContainerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ContainerAdapter::ContainerAdapter(Container* obj) : TangibleObjectAdapter(obj) {
}

void ContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_:
		{
			SceneObject* object = static_cast<SceneObject*>(inv->getObjectParameter());
			int containmentType = inv->getSignedIntParameter();
			String errorDescription; inv->getAsciiParameter(errorDescription);
			
			int _m_res = canAddObject(object, containmentType, errorDescription);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ISCONTAINEROBJECT__:
		{
			
			bool _m_res = isContainerObject();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISCONTAINERLOCKED__:
		{
			
			bool _m_res = isContainerLocked();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETLOCKEDSTATUS__BOOL_:
		{
			bool lock = inv->getBooleanParameter();
			
			setLockedStatus(lock);
			
		}
		break;
	case RPC_GETLOCKCHANCE__:
		{
			
			int _m_res = getLockChance();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETLOCKTIME__:
		{
			
			long long _m_res = getLockTime();
			resp->insertSignedLong(_m_res);
		}
		break;
	case RPC_ISRELOCKING__:
		{
			
			bool _m_res = isRelocking();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETRELOCKINGSTATUS__BOOL_:
		{
			bool relock = inv->getBooleanParameter();
			
			bool _m_res = setRelockingStatus(relock);
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void ContainerAdapter::initializeTransientMembers() {
	(static_cast<Container*>(stub))->initializeTransientMembers();
}

int ContainerAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<Container*>(stub))->handleObjectMenuSelect(player, selectedID);
}

int ContainerAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return (static_cast<Container*>(stub))->canAddObject(object, containmentType, errorDescription);
}

bool ContainerAdapter::isContainerObject() {
	return (static_cast<Container*>(stub))->isContainerObject();
}

bool ContainerAdapter::isContainerLocked() const {
	return (static_cast<Container*>(stub))->isContainerLocked();
}

void ContainerAdapter::setLockedStatus(bool lock) {
	(static_cast<Container*>(stub))->setLockedStatus(lock);
}

int ContainerAdapter::getLockChance() const {
	return (static_cast<Container*>(stub))->getLockChance();
}

long long ContainerAdapter::getLockTime() const {
	return (static_cast<Container*>(stub))->getLockTime();
}

bool ContainerAdapter::isRelocking() const {
	return (static_cast<Container*>(stub))->isRelocking();
}

bool ContainerAdapter::setRelockingStatus(bool relock) {
	return (static_cast<Container*>(stub))->setRelockingStatus(relock);
}

/*
 *	ContainerHelper
 */

ContainerHelper* ContainerHelper::staticInitializer = ContainerHelper::instance();

ContainerHelper::ContainerHelper() {
	className = "Container";

	Core::getObjectBroker()->registerClass(className, this);
}

void ContainerHelper::finalizeHelper() {
	ContainerHelper::finalize();
}

DistributedObject* ContainerHelper::instantiateObject() {
	return new Container(DummyConstructorParameter::instance());
}

DistributedObjectServant* ContainerHelper::instantiateServant() {
	return new ContainerImplementation();
}

DistributedObjectPOD* ContainerHelper::instantiatePOD() {
	return new ContainerPOD();
}

DistributedObjectAdapter* ContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ContainerAdapter(static_cast<Container*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ContainerPOD
 */

ContainerPOD::~ContainerPOD() {
	finalize();
}

ContainerPOD::ContainerPOD(void) {
	_className = "Container";
}


void ContainerPOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (locked)
		thisObject["locked"] = locked.value();

	j["Container"] = thisObject;
}


void ContainerPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ContainerPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ContainerPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (locked) {
	_nameHashCode = 0xa51314dc; //Container.locked
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&locked.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool ContainerPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa51314dc: //Container.locked
		{
			bool _mnlocked;
			TypeInfo<bool >::parseFromBinaryStream(&_mnlocked, stream);
			locked = std::move(_mnlocked);
		}
		return true;

	}

	return false;
}

void ContainerPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ContainerPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ContainerPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<bool >::toBinaryStream(&locked.value(), stream);


}

