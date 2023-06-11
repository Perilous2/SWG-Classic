/*
 *	autogen/server/zone/objects/tangible/misc/DeadEyePrototype.cpp generated by engine3 IDL compiler 0.70
 */

#include "DeadEyePrototype.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	DeadEyePrototypeStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,};

DeadEyePrototype::DeadEyePrototype() : TangibleObject(DummyConstructorParameter::instance()) {
	DeadEyePrototypeImplementation* _implementation = new DeadEyePrototypeImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DeadEyePrototype");
}

DeadEyePrototype::DeadEyePrototype(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("DeadEyePrototype");
}

DeadEyePrototype::~DeadEyePrototype() {
}



void DeadEyePrototype::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	DeadEyePrototypeImplementation* _implementation = static_cast<DeadEyePrototypeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void DeadEyePrototype::loadTemplateData(SharedObjectTemplate* templateData) {
	DeadEyePrototypeImplementation* _implementation = static_cast<DeadEyePrototypeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void DeadEyePrototype::fillAttributeList(AttributeListMessage* msg, CreatureObject* player) {
	DeadEyePrototypeImplementation* _implementation = static_cast<DeadEyePrototypeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, player);
	}
}

int DeadEyePrototype::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	DeadEyePrototypeImplementation* _implementation = static_cast<DeadEyePrototypeImplementation*>(_getImplementation());
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

void DeadEyePrototype::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	DeadEyePrototypeImplementation* _implementation = static_cast<DeadEyePrototypeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

DistributedObjectServant* DeadEyePrototype::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* DeadEyePrototype::_getImplementationForRead() const {
	return _impl;
}

void DeadEyePrototype::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DeadEyePrototypeImplementation
 */

DeadEyePrototypeImplementation::DeadEyePrototypeImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


DeadEyePrototypeImplementation::~DeadEyePrototypeImplementation() {
}


void DeadEyePrototypeImplementation::finalize() {
}

void DeadEyePrototypeImplementation::_initializeImplementation() {
	_setClassHelper(DeadEyePrototypeHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DeadEyePrototypeImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DeadEyePrototype*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* DeadEyePrototypeImplementation::_getStub() {
	return _this.get();
}

DeadEyePrototypeImplementation::operator const DeadEyePrototype*() {
	return _this.get();
}

void DeadEyePrototypeImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DeadEyePrototypeImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DeadEyePrototypeImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DeadEyePrototypeImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DeadEyePrototypeImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DeadEyePrototypeImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DeadEyePrototypeImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DeadEyePrototypeImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("DeadEyePrototype");

}

void DeadEyePrototypeImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DeadEyePrototypeImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DeadEyePrototypeImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x87ae1043: //DeadEyePrototype.effectiveness
		TypeInfo<int >::parseFromBinaryStream(&effectiveness, stream);
		return true;

	case 0x91c75b1f: //DeadEyePrototype.duration
		TypeInfo<int >::parseFromBinaryStream(&duration, stream);
		return true;

	}

	return false;
}

void DeadEyePrototypeImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DeadEyePrototypeImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DeadEyePrototypeImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x87ae1043; //DeadEyePrototype.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x91c75b1f; //DeadEyePrototype.duration
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&duration, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void DeadEyePrototypeImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["effectiveness"] = effectiveness;

	thisObject["duration"] = duration;

	j["DeadEyePrototype"] = thisObject;
}

DeadEyePrototypeImplementation::DeadEyePrototypeImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		duration = 0;
	duration = 0;
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		setLoggingName("DeadEyePrototype");
	setLoggingName("DeadEyePrototype");
}

void DeadEyePrototypeImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		duration = values.getCurrentValue("duration");
	duration = values->getCurrentValue("duration");
}

void DeadEyePrototypeImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		super.loadTemplateData(templateData);
	TangibleObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		DotPackTemplate 
	if (!templateData->isDotPackTemplate())	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  			return;
	return;
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		DotPackTemplate dotPackTemplate = (DotPackTemplate) templateData;
	DotPackTemplate* dotPackTemplate = dynamic_cast<DotPackTemplate*>(templateData);
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		effectiveness = dotPackTemplate.getEffectiveness();
	effectiveness = dotPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/misc/DeadEyePrototype.idl():  		duration = dotPackTemplate.getDuration();
	duration = dotPackTemplate->getDuration();
}

/*
 *	DeadEyePrototypeAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DeadEyePrototypeAdapter::DeadEyePrototypeAdapter(DeadEyePrototype* obj) : TangibleObjectAdapter(obj) {
}

void DeadEyePrototypeAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

int DeadEyePrototypeAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<DeadEyePrototype*>(stub))->handleObjectMenuSelect(player, selectedID);
}

/*
 *	DeadEyePrototypeHelper
 */

DeadEyePrototypeHelper* DeadEyePrototypeHelper::staticInitializer = DeadEyePrototypeHelper::instance();

DeadEyePrototypeHelper::DeadEyePrototypeHelper() {
	className = "DeadEyePrototype";

	Core::getObjectBroker()->registerClass(className, this);
}

void DeadEyePrototypeHelper::finalizeHelper() {
	DeadEyePrototypeHelper::finalize();
}

DistributedObject* DeadEyePrototypeHelper::instantiateObject() {
	return new DeadEyePrototype(DummyConstructorParameter::instance());
}

DistributedObjectServant* DeadEyePrototypeHelper::instantiateServant() {
	return new DeadEyePrototypeImplementation();
}

DistributedObjectPOD* DeadEyePrototypeHelper::instantiatePOD() {
	return new DeadEyePrototypePOD();
}

DistributedObjectAdapter* DeadEyePrototypeHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DeadEyePrototypeAdapter(static_cast<DeadEyePrototype*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DeadEyePrototypePOD
 */

DeadEyePrototypePOD::~DeadEyePrototypePOD() {
	finalize();
}

DeadEyePrototypePOD::DeadEyePrototypePOD(void) {
	_className = "DeadEyePrototype";
}


void DeadEyePrototypePOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (effectiveness)
		thisObject["effectiveness"] = effectiveness.value();

	if (duration)
		thisObject["duration"] = duration.value();

	j["DeadEyePrototype"] = thisObject;
}


void DeadEyePrototypePOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DeadEyePrototypePOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DeadEyePrototypePOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (effectiveness) {
	_nameHashCode = 0x87ae1043; //DeadEyePrototype.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&effectiveness.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (duration) {
	_nameHashCode = 0x91c75b1f; //DeadEyePrototype.duration
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&duration.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool DeadEyePrototypePOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x87ae1043: //DeadEyePrototype.effectiveness
		{
			int _mneffectiveness;
			TypeInfo<int >::parseFromBinaryStream(&_mneffectiveness, stream);
			effectiveness = std::move(_mneffectiveness);
		}
		return true;

	case 0x91c75b1f: //DeadEyePrototype.duration
		{
			int _mnduration;
			TypeInfo<int >::parseFromBinaryStream(&_mnduration, stream);
			duration = std::move(_mnduration);
		}
		return true;

	}

	return false;
}

void DeadEyePrototypePOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DeadEyePrototypePOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void DeadEyePrototypePOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<int >::toBinaryStream(&effectiveness.value(), stream);

	TypeInfo<int >::toBinaryStream(&duration.value(), stream);


}

