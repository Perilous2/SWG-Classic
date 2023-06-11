/*
 *	autogen/server/zone/objects/tangible/tool/antidecay/AntiDecayKit.cpp generated by engine3 IDL compiler 0.70
 */

#include "AntiDecayKit.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	AntiDecayKitStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 2429789154,RPC_NOTIFYLOADFROMDATABASE__,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_,RPC_DOAPPLYANTIDECAY__CREATUREOBJECT_,RPC_DORETRIEVEITEM__CREATUREOBJECT_,RPC_ISUSED__,RPC_SETUSED__BOOL_};

AntiDecayKit::AntiDecayKit() : Container(DummyConstructorParameter::instance()) {
	AntiDecayKitImplementation* _implementation = new AntiDecayKitImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("AntiDecayKit");
}

AntiDecayKit::AntiDecayKit(DummyConstructorParameter* param) : Container(param) {
	_setClassName("AntiDecayKit");
}

AntiDecayKit::~AntiDecayKit() {
}



void AntiDecayKit::initializeTransientMembers() {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void AntiDecayKit::notifyLoadFromDatabase() {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyLoadFromDatabase();
	}
}

void AntiDecayKit::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int AntiDecayKit::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
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

int AntiDecayKit::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
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

void AntiDecayKit::doApplyAntiDecay(CreatureObject* player) {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOAPPLYANTIDECAY__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->doApplyAntiDecay(player);
	}
}

void AntiDecayKit::doRetrieveItem(CreatureObject* player) {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DORETRIEVEITEM__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		assert((player == NULL) || player->isLockedByCurrentThread());
		_implementation->doRetrieveItem(player);
	}
}

bool AntiDecayKit::isUsed() const {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISUSED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isUsed();
	}
}

void AntiDecayKit::setUsed(bool use) {
	AntiDecayKitImplementation* _implementation = static_cast<AntiDecayKitImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUSED__BOOL_);
		method.addBooleanParameter(use);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setUsed(use);
	}
}

DistributedObjectServant* AntiDecayKit::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* AntiDecayKit::_getImplementationForRead() const {
	return _impl;
}

void AntiDecayKit::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AntiDecayKitImplementation
 */

AntiDecayKitImplementation::AntiDecayKitImplementation(DummyConstructorParameter* param) : ContainerImplementation(param) {
	_initializeImplementation();
}


AntiDecayKitImplementation::~AntiDecayKitImplementation() {
}


void AntiDecayKitImplementation::finalize() {
}

void AntiDecayKitImplementation::_initializeImplementation() {
	_setClassHelper(AntiDecayKitHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AntiDecayKitImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<AntiDecayKit*>(stub);
	ContainerImplementation::_setStub(stub);
}

DistributedObjectStub* AntiDecayKitImplementation::_getStub() {
	return _this.get();
}

AntiDecayKitImplementation::operator const AntiDecayKit*() {
	return _this.get();
}

void AntiDecayKitImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AntiDecayKitImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AntiDecayKitImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AntiDecayKitImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AntiDecayKitImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AntiDecayKitImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AntiDecayKitImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AntiDecayKitImplementation::_serializationHelperMethod() {
	ContainerImplementation::_serializationHelperMethod();

	_setClassName("AntiDecayKit");

}

void AntiDecayKitImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AntiDecayKitImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AntiDecayKitImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ContainerImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc73ea54a: //AntiDecayKit.used
		TypeInfo<bool >::parseFromBinaryStream(&used, stream);
		return true;

	}

	return false;
}

void AntiDecayKitImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AntiDecayKitImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AntiDecayKitImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ContainerImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xc73ea54a; //AntiDecayKit.used
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&used, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void AntiDecayKitImplementation::writeJSON(nlohmann::json& j) {
	ContainerImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["used"] = used;

	j["AntiDecayKit"] = thisObject;
}

AntiDecayKitImplementation::AntiDecayKitImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/antidecay/AntiDecayKit.idl():  		used = false;
	used = false;
	// server/zone/objects/tangible/tool/antidecay/AntiDecayKit.idl():  		Logger.setLoggingName("AntiDecayKit");
	Logger::setLoggingName("AntiDecayKit");
}

bool AntiDecayKitImplementation::isUsed() const{
	// server/zone/objects/tangible/tool/antidecay/AntiDecayKit.idl():  		return used;
	return used;
}

void AntiDecayKitImplementation::setUsed(bool use) {
	// server/zone/objects/tangible/tool/antidecay/AntiDecayKit.idl():  		used = use;
	used = use;
}

/*
 *	AntiDecayKitAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AntiDecayKitAdapter::AntiDecayKitAdapter(AntiDecayKit* obj) : ContainerAdapter(obj) {
}

void AntiDecayKitAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_NOTIFYLOADFROMDATABASE__:
		{
			
			notifyLoadFromDatabase();
			
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
	case RPC_DOAPPLYANTIDECAY__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			doApplyAntiDecay(player);
			
		}
		break;
	case RPC_DORETRIEVEITEM__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			doRetrieveItem(player);
			
		}
		break;
	case RPC_ISUSED__:
		{
			
			bool _m_res = isUsed();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETUSED__BOOL_:
		{
			bool use = inv->getBooleanParameter();
			
			setUsed(use);
			
		}
		break;
	default:
		ContainerAdapter::invokeMethod(methid, inv);
	}
}

void AntiDecayKitAdapter::initializeTransientMembers() {
	(static_cast<AntiDecayKit*>(stub))->initializeTransientMembers();
}

void AntiDecayKitAdapter::notifyLoadFromDatabase() {
	(static_cast<AntiDecayKit*>(stub))->notifyLoadFromDatabase();
}

int AntiDecayKitAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<AntiDecayKit*>(stub))->handleObjectMenuSelect(player, selectedID);
}

int AntiDecayKitAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return (static_cast<AntiDecayKit*>(stub))->canAddObject(object, containmentType, errorDescription);
}

void AntiDecayKitAdapter::doApplyAntiDecay(CreatureObject* player) {
	(static_cast<AntiDecayKit*>(stub))->doApplyAntiDecay(player);
}

void AntiDecayKitAdapter::doRetrieveItem(CreatureObject* player) {
	(static_cast<AntiDecayKit*>(stub))->doRetrieveItem(player);
}

bool AntiDecayKitAdapter::isUsed() const {
	return (static_cast<AntiDecayKit*>(stub))->isUsed();
}

void AntiDecayKitAdapter::setUsed(bool use) {
	(static_cast<AntiDecayKit*>(stub))->setUsed(use);
}

/*
 *	AntiDecayKitHelper
 */

AntiDecayKitHelper* AntiDecayKitHelper::staticInitializer = AntiDecayKitHelper::instance();

AntiDecayKitHelper::AntiDecayKitHelper() {
	className = "AntiDecayKit";

	Core::getObjectBroker()->registerClass(className, this);
}

void AntiDecayKitHelper::finalizeHelper() {
	AntiDecayKitHelper::finalize();
}

DistributedObject* AntiDecayKitHelper::instantiateObject() {
	return new AntiDecayKit(DummyConstructorParameter::instance());
}

DistributedObjectServant* AntiDecayKitHelper::instantiateServant() {
	return new AntiDecayKitImplementation();
}

DistributedObjectPOD* AntiDecayKitHelper::instantiatePOD() {
	return new AntiDecayKitPOD();
}

DistributedObjectAdapter* AntiDecayKitHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AntiDecayKitAdapter(static_cast<AntiDecayKit*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	AntiDecayKitPOD
 */

AntiDecayKitPOD::~AntiDecayKitPOD() {
	finalize();
}

AntiDecayKitPOD::AntiDecayKitPOD(void) {
	_className = "AntiDecayKit";
}


void AntiDecayKitPOD::writeJSON(nlohmann::json& j) {
	ContainerPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (used)
		thisObject["used"] = used.value();

	j["AntiDecayKit"] = thisObject;
}


void AntiDecayKitPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AntiDecayKitPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AntiDecayKitPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ContainerPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (used) {
	_nameHashCode = 0xc73ea54a; //AntiDecayKit.used
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&used.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool AntiDecayKitPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ContainerPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc73ea54a: //AntiDecayKit.used
		{
			bool _mnused;
			TypeInfo<bool >::parseFromBinaryStream(&_mnused, stream);
			used = std::move(_mnused);
		}
		return true;

	}

	return false;
}

void AntiDecayKitPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AntiDecayKitPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void AntiDecayKitPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ContainerPOD::writeObjectCompact(stream);

	TypeInfo<bool >::toBinaryStream(&used.value(), stream);


}

