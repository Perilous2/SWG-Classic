/*
 *	autogen/server/zone/objects/resource/ResourceContainer.cpp generated by engine3 IDL compiler 0.70
 */

#include "ResourceContainer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	ResourceContainerStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 1134655640,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_SETQUANTITY__INT_BOOL_BOOL_BOOL_,RPC_ISRESOURCECONTAINER__,RPC_GETQUANTITY__,RPC_GETUSECOUNT__,RPC_SETUSECOUNT__INT_BOOL_,RPC_DECREASEUSECOUNT__INT_BOOL_,RPC_SETSPAWNOBJECT__RESOURCESPAWN_,RPC_GETSPAWNNAME__,RPC_GETSPAWNTYPE__,RPC_GETSPAWNID__,RPC_GETSPAWNOBJECT__,RPC_SPLIT__INT_,RPC_SPLIT__INT_CREATUREOBJECT_,RPC_COMBINE__RESOURCECONTAINER_};

ResourceContainer::ResourceContainer() : TangibleObject(DummyConstructorParameter::instance()) {
	ResourceContainerImplementation* _implementation = new ResourceContainerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ResourceContainer");
}

ResourceContainer::ResourceContainer(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("ResourceContainer");
}

ResourceContainer::~ResourceContainer() {
}



void ResourceContainer::initializeTransientMembers() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void ResourceContainer::destroyObjectFromDatabase(bool destroyContainedObjects) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
	}
}

void ResourceContainer::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void ResourceContainer::sendBaselinesTo(SceneObject* player) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendBaselinesTo(player);
	}
}

void ResourceContainer::setQuantity(unsigned int newQuantity, bool notifyClient, bool ignoreMax, bool destroyEmpty) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETQUANTITY__INT_BOOL_BOOL_BOOL_);
		method.addUnsignedIntParameter(newQuantity);
		method.addBooleanParameter(notifyClient);
		method.addBooleanParameter(ignoreMax);
		method.addBooleanParameter(destroyEmpty);

		method.executeWithVoidReturn();
	} else {
		_implementation->setQuantity(newQuantity, notifyClient, ignoreMax, destroyEmpty);
	}
}

bool ResourceContainer::isResourceContainer() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRESOURCECONTAINER__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isResourceContainer();
	}
}

int ResourceContainer::getQuantity() const {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETQUANTITY__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getQuantity();
	}
}

int ResourceContainer::getUseCount() const {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETUSECOUNT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getUseCount();
	}
}

void ResourceContainer::setUseCount(unsigned int newUseCount, bool notifyClient) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUSECOUNT__INT_BOOL_);
		method.addUnsignedIntParameter(newUseCount);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else {
		_implementation->setUseCount(newUseCount, notifyClient);
	}
}

void ResourceContainer::decreaseUseCount(unsigned int decrement, bool notifyClient) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DECREASEUSECOUNT__INT_BOOL_);
		method.addUnsignedIntParameter(decrement);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else {
		_implementation->decreaseUseCount(decrement, notifyClient);
	}
}

void ResourceContainer::setSpawnObject(ResourceSpawn* spawn) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSPAWNOBJECT__RESOURCESPAWN_);
		method.addObjectParameter(spawn);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setSpawnObject(spawn);
	}
}

String ResourceContainer::getSpawnName() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNNAME__);

		String _return_getSpawnName;
		method.executeWithAsciiReturn(_return_getSpawnName);
		return _return_getSpawnName;
	} else {
		return _implementation->getSpawnName();
	}
}

String ResourceContainer::getSpawnType() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNTYPE__);

		String _return_getSpawnType;
		method.executeWithAsciiReturn(_return_getSpawnType);
		return _return_getSpawnType;
	} else {
		return _implementation->getSpawnType();
	}
}

unsigned long long ResourceContainer::getSpawnID() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNID__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getSpawnID();
	}
}

ResourceSpawn* ResourceContainer::getSpawnObject() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNOBJECT__);

		return static_cast<ResourceSpawn*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getSpawnObject();
	}
}

void ResourceContainer::split(int newStackSize) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPLIT__INT_);
		method.addSignedIntParameter(newStackSize);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->split(newStackSize);
	}
}

void ResourceContainer::split(int newStackSize, CreatureObject* player) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPLIT__INT_CREATUREOBJECT_);
		method.addSignedIntParameter(newStackSize);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->split(newStackSize, player);
	}
}

void ResourceContainer::combine(ResourceContainer* fromContainer) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMBINE__RESOURCECONTAINER_);
		method.addObjectParameter(fromContainer);

		method.executeWithVoidReturn();
	} else {
		_implementation->combine(fromContainer);
	}
}

DistributedObjectServant* ResourceContainer::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ResourceContainer::_getImplementationForRead() const {
	return _impl;
}

void ResourceContainer::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceContainerImplementation
 */

ResourceContainerImplementation::ResourceContainerImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ResourceContainerImplementation::~ResourceContainerImplementation() {
}


void ResourceContainerImplementation::finalize() {
}

void ResourceContainerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceContainerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ResourceContainerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ResourceContainer*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceContainerImplementation::_getStub() {
	return _this.get();
}

ResourceContainerImplementation::operator const ResourceContainer*() {
	return _this.get();
}

void ResourceContainerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ResourceContainerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ResourceContainerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ResourceContainerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ResourceContainerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ResourceContainerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ResourceContainerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ResourceContainerImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceContainer");

}

void ResourceContainerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ResourceContainerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceContainerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xabc6c0c3: //ResourceContainer.spawnObject
		TypeInfo<ManagedReference<ResourceSpawn* > >::parseFromBinaryStream(&spawnObject, stream);
		return true;

	case 0xe25dac9b: //ResourceContainer.stackQuantity
		TypeInfo<int >::parseFromBinaryStream(&stackQuantity, stream);
		return true;

	}

	return false;
}

void ResourceContainerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceContainerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceContainerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xabc6c0c3; //ResourceContainer.spawnObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ResourceSpawn* > >::toBinaryStream(&spawnObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xe25dac9b; //ResourceContainer.stackQuantity
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&stackQuantity, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void ResourceContainerImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["spawnObject"] = spawnObject;

	thisObject["stackQuantity"] = stackQuantity;

	j["ResourceContainer"] = thisObject;
}

ResourceContainerImplementation::ResourceContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/resource/ResourceContainer.idl():  		stackQuantity = 0;
	stackQuantity = 0;
	// server/zone/objects/resource/ResourceContainer.idl():  		setLoggingName("ResourceContainer");
	setLoggingName("ResourceContainer");
}

void ResourceContainerImplementation::initializeTransientMembers() {
	// server/zone/objects/resource/ResourceContainer.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/resource/ResourceContainer.idl():  		Logger.setLoggingName("ResourceContainer");
	Logger::setLoggingName("ResourceContainer");
}

bool ResourceContainerImplementation::isResourceContainer() {
	// server/zone/objects/resource/ResourceContainer.idl():  		return true;
	return true;
}

int ResourceContainerImplementation::getQuantity() const{
	// server/zone/objects/resource/ResourceContainer.idl():  		return stackQuantity;
	return stackQuantity;
}

int ResourceContainerImplementation::getUseCount() const{
	// server/zone/objects/resource/ResourceContainer.idl():  		return getQuantity();
	return getQuantity();
}

void ResourceContainerImplementation::decreaseUseCount(unsigned int decrement, bool notifyClient) {
	// server/zone/objects/resource/ResourceContainer.idl():  		setUseCount(stackQuantity-decrement, notifyClient);
	setUseCount(stackQuantity - decrement, notifyClient);
}

void ResourceContainerImplementation::setSpawnObject(ResourceSpawn* spawn) {
	// server/zone/objects/resource/ResourceContainer.idl():  		spawnObject = spawn;
	spawnObject = spawn;
}

String ResourceContainerImplementation::getSpawnName() {
	String ret;
	// server/zone/objects/resource/ResourceContainer.idl():  		return 
	if (spawnObject){
	// server/zone/objects/resource/ResourceContainer.idl():  			ret = spawnObject.getName();
	ret = spawnObject->getName();
}
	// server/zone/objects/resource/ResourceContainer.idl():  		return ret;
	return ret;
}

String ResourceContainerImplementation::getSpawnType() {
	String ret;
	// server/zone/objects/resource/ResourceContainer.idl():  		return 
	if (spawnObject){
	// server/zone/objects/resource/ResourceContainer.idl():  			ret = spawnObject.getType();
	ret = spawnObject->getType();
}
	// server/zone/objects/resource/ResourceContainer.idl():  		return ret;
	return ret;
}

unsigned long long ResourceContainerImplementation::getSpawnID() {
	// server/zone/objects/resource/ResourceContainer.idl():  		unsigned long id = 0;
	unsigned long long id = 0;
	// server/zone/objects/resource/ResourceContainer.idl():  		return 
	if (spawnObject){
	// server/zone/objects/resource/ResourceContainer.idl():  			id = spawnObject.getObjectID();
	id = spawnObject->getObjectID();
}
	// server/zone/objects/resource/ResourceContainer.idl():  		return id;
	return id;
}

ResourceSpawn* ResourceContainerImplementation::getSpawnObject() {
	// server/zone/objects/resource/ResourceContainer.idl():  		return spawnObject;
	return spawnObject;
}

/*
 *	ResourceContainerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ResourceContainerAdapter::ResourceContainerAdapter(ResourceContainer* obj) : TangibleObjectAdapter(obj) {
}

void ResourceContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		{
			bool destroyContainedObjects = inv->getBooleanParameter();
			
			destroyObjectFromDatabase(destroyContainedObjects);
			
		}
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		{
			SceneObject* player = static_cast<SceneObject*>(inv->getObjectParameter());
			
			sendBaselinesTo(player);
			
		}
		break;
	case RPC_SETQUANTITY__INT_BOOL_BOOL_BOOL_:
		{
			unsigned int newQuantity = inv->getUnsignedIntParameter();
			bool notifyClient = inv->getBooleanParameter();
			bool ignoreMax = inv->getBooleanParameter();
			bool destroyEmpty = inv->getBooleanParameter();
			
			setQuantity(newQuantity, notifyClient, ignoreMax, destroyEmpty);
			
		}
		break;
	case RPC_ISRESOURCECONTAINER__:
		{
			
			bool _m_res = isResourceContainer();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETQUANTITY__:
		{
			
			int _m_res = getQuantity();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETUSECOUNT__:
		{
			
			int _m_res = getUseCount();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETUSECOUNT__INT_BOOL_:
		{
			unsigned int newUseCount = inv->getUnsignedIntParameter();
			bool notifyClient = inv->getBooleanParameter();
			
			setUseCount(newUseCount, notifyClient);
			
		}
		break;
	case RPC_DECREASEUSECOUNT__INT_BOOL_:
		{
			unsigned int decrement = inv->getUnsignedIntParameter();
			bool notifyClient = inv->getBooleanParameter();
			
			decreaseUseCount(decrement, notifyClient);
			
		}
		break;
	case RPC_SETSPAWNOBJECT__RESOURCESPAWN_:
		{
			ResourceSpawn* spawn = static_cast<ResourceSpawn*>(inv->getObjectParameter());
			
			setSpawnObject(spawn);
			
		}
		break;
	case RPC_GETSPAWNNAME__:
		{
			
			String _m_res = getSpawnName();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETSPAWNTYPE__:
		{
			
			String _m_res = getSpawnType();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETSPAWNID__:
		{
			
			unsigned long long _m_res = getSpawnID();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_GETSPAWNOBJECT__:
		{
			
			DistributedObject* _m_res = getSpawnObject();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_SPLIT__INT_:
		{
			int newStackSize = inv->getSignedIntParameter();
			
			split(newStackSize);
			
		}
		break;
	case RPC_SPLIT__INT_CREATUREOBJECT_:
		{
			int newStackSize = inv->getSignedIntParameter();
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			split(newStackSize, player);
			
		}
		break;
	case RPC_COMBINE__RESOURCECONTAINER_:
		{
			ResourceContainer* fromContainer = static_cast<ResourceContainer*>(inv->getObjectParameter());
			
			combine(fromContainer);
			
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void ResourceContainerAdapter::initializeTransientMembers() {
	(static_cast<ResourceContainer*>(stub))->initializeTransientMembers();
}

void ResourceContainerAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<ResourceContainer*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void ResourceContainerAdapter::sendBaselinesTo(SceneObject* player) {
	(static_cast<ResourceContainer*>(stub))->sendBaselinesTo(player);
}

void ResourceContainerAdapter::setQuantity(unsigned int newQuantity, bool notifyClient, bool ignoreMax, bool destroyEmpty) {
	(static_cast<ResourceContainer*>(stub))->setQuantity(newQuantity, notifyClient, ignoreMax, destroyEmpty);
}

bool ResourceContainerAdapter::isResourceContainer() {
	return (static_cast<ResourceContainer*>(stub))->isResourceContainer();
}

int ResourceContainerAdapter::getQuantity() const {
	return (static_cast<ResourceContainer*>(stub))->getQuantity();
}

int ResourceContainerAdapter::getUseCount() const {
	return (static_cast<ResourceContainer*>(stub))->getUseCount();
}

void ResourceContainerAdapter::setUseCount(unsigned int newUseCount, bool notifyClient) {
	(static_cast<ResourceContainer*>(stub))->setUseCount(newUseCount, notifyClient);
}

void ResourceContainerAdapter::decreaseUseCount(unsigned int decrement, bool notifyClient) {
	(static_cast<ResourceContainer*>(stub))->decreaseUseCount(decrement, notifyClient);
}

void ResourceContainerAdapter::setSpawnObject(ResourceSpawn* spawn) {
	(static_cast<ResourceContainer*>(stub))->setSpawnObject(spawn);
}

String ResourceContainerAdapter::getSpawnName() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnName();
}

String ResourceContainerAdapter::getSpawnType() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnType();
}

unsigned long long ResourceContainerAdapter::getSpawnID() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnID();
}

ResourceSpawn* ResourceContainerAdapter::getSpawnObject() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnObject();
}

void ResourceContainerAdapter::split(int newStackSize) {
	(static_cast<ResourceContainer*>(stub))->split(newStackSize);
}

void ResourceContainerAdapter::split(int newStackSize, CreatureObject* player) {
	(static_cast<ResourceContainer*>(stub))->split(newStackSize, player);
}

void ResourceContainerAdapter::combine(ResourceContainer* fromContainer) {
	(static_cast<ResourceContainer*>(stub))->combine(fromContainer);
}

/*
 *	ResourceContainerHelper
 */

ResourceContainerHelper* ResourceContainerHelper::staticInitializer = ResourceContainerHelper::instance();

ResourceContainerHelper::ResourceContainerHelper() {
	className = "ResourceContainer";

	Core::getObjectBroker()->registerClass(className, this);
}

void ResourceContainerHelper::finalizeHelper() {
	ResourceContainerHelper::finalize();
}

DistributedObject* ResourceContainerHelper::instantiateObject() {
	return new ResourceContainer(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceContainerHelper::instantiateServant() {
	return new ResourceContainerImplementation();
}

DistributedObjectPOD* ResourceContainerHelper::instantiatePOD() {
	return new ResourceContainerPOD();
}

DistributedObjectAdapter* ResourceContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceContainerAdapter(static_cast<ResourceContainer*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ResourceContainerPOD
 */

ResourceContainerPOD::~ResourceContainerPOD() {
	finalize();
}

ResourceContainerPOD::ResourceContainerPOD(void) {
	_className = "ResourceContainer";
}


void ResourceContainerPOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (spawnObject)
		thisObject["spawnObject"] = spawnObject.value();

	if (stackQuantity)
		thisObject["stackQuantity"] = stackQuantity.value();

	j["ResourceContainer"] = thisObject;
}


void ResourceContainerPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceContainerPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceContainerPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (spawnObject) {
	_nameHashCode = 0xabc6c0c3; //ResourceContainer.spawnObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ResourceSpawnPOD* > >::toBinaryStream(&spawnObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (stackQuantity) {
	_nameHashCode = 0xe25dac9b; //ResourceContainer.stackQuantity
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&stackQuantity.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool ResourceContainerPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xabc6c0c3: //ResourceContainer.spawnObject
		{
			ManagedReference<ResourceSpawnPOD* > _mnspawnObject;
			TypeInfo<ManagedReference<ResourceSpawnPOD* > >::parseFromBinaryStream(&_mnspawnObject, stream);
			spawnObject = std::move(_mnspawnObject);
		}
		return true;

	case 0xe25dac9b: //ResourceContainer.stackQuantity
		{
			int _mnstackQuantity;
			TypeInfo<int >::parseFromBinaryStream(&_mnstackQuantity, stream);
			stackQuantity = std::move(_mnstackQuantity);
		}
		return true;

	}

	return false;
}

void ResourceContainerPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ResourceContainerPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ResourceContainerPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<ManagedReference<ResourceSpawnPOD* > >::toBinaryStream(&spawnObject.value(), stream);

	TypeInfo<int >::toBinaryStream(&stackQuantity.value(), stream);


}

