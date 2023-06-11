/*
 *	autogen/server/zone/objects/tangible/component/armor/ArmorComponent.cpp generated by engine3 IDL compiler 0.70
 */

#include "ArmorComponent.h"

/*
 *	ArmorComponentStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 1228203925,RPC_SETKINETIC__FLOAT_,RPC_SETENERGY__FLOAT_,RPC_SETELECTRICITY__FLOAT_,RPC_SETSTUN__FLOAT_,RPC_SETBLAST__FLOAT_,RPC_SETHEAT__FLOAT_,RPC_SETCOLD__FLOAT_,RPC_SETACID__FLOAT_,RPC_SETLIGHTSABER__FLOAT_};

ArmorComponent::ArmorComponent() : Component(DummyConstructorParameter::instance()) {
	ArmorComponentImplementation* _implementation = new ArmorComponentImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ArmorComponent");
}

ArmorComponent::ArmorComponent(DummyConstructorParameter* param) : Component(param) {
	_setClassName("ArmorComponent");
}

ArmorComponent::~ArmorComponent() {
}



void ArmorComponent::initializeTransientMembers() {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void ArmorComponent::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void ArmorComponent::setKinetic(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETKINETIC__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setKinetic(value);
	}
}

void ArmorComponent::setEnergy(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETENERGY__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setEnergy(value);
	}
}

void ArmorComponent::setElectricity(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETELECTRICITY__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setElectricity(value);
	}
}

void ArmorComponent::setStun(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSTUN__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setStun(value);
	}
}

void ArmorComponent::setBlast(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBLAST__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setBlast(value);
	}
}

void ArmorComponent::setHeat(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETHEAT__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setHeat(value);
	}
}

void ArmorComponent::setCold(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCOLD__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setCold(value);
	}
}

void ArmorComponent::setAcid(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACID__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setAcid(value);
	}
}

void ArmorComponent::setLightSaber(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETLIGHTSABER__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setLightSaber(value);
	}
}

DistributedObjectServant* ArmorComponent::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ArmorComponent::_getImplementationForRead() const {
	return _impl;
}

void ArmorComponent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ArmorComponentImplementation
 */

ArmorComponentImplementation::ArmorComponentImplementation(DummyConstructorParameter* param) : ComponentImplementation(param) {
	_initializeImplementation();
}


ArmorComponentImplementation::~ArmorComponentImplementation() {
}


void ArmorComponentImplementation::finalize() {
}

void ArmorComponentImplementation::_initializeImplementation() {
	_setClassHelper(ArmorComponentHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ArmorComponentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ArmorComponent*>(stub);
	ComponentImplementation::_setStub(stub);
}

DistributedObjectStub* ArmorComponentImplementation::_getStub() {
	return _this.get();
}

ArmorComponentImplementation::operator const ArmorComponent*() {
	return _this.get();
}

void ArmorComponentImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ArmorComponentImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ArmorComponentImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ArmorComponentImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ArmorComponentImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ArmorComponentImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ArmorComponentImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ArmorComponentImplementation::_serializationHelperMethod() {
	ComponentImplementation::_serializationHelperMethod();

	_setClassName("ArmorComponent");

}

void ArmorComponentImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ArmorComponentImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ArmorComponentImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ComponentImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x7be3e124: //ArmorComponent.kinetic
		TypeInfo<float >::parseFromBinaryStream(&kinetic, stream);
		return true;

	case 0x1ff4a5c9: //ArmorComponent.energy
		TypeInfo<float >::parseFromBinaryStream(&energy, stream);
		return true;

	case 0xf8a701b: //ArmorComponent.electricity
		TypeInfo<float >::parseFromBinaryStream(&electricity, stream);
		return true;

	case 0xbc599ae: //ArmorComponent.stun
		TypeInfo<float >::parseFromBinaryStream(&stun, stream);
		return true;

	case 0x7f78d061: //ArmorComponent.blast
		TypeInfo<float >::parseFromBinaryStream(&blast, stream);
		return true;

	case 0x4ff04d82: //ArmorComponent.heat
		TypeInfo<float >::parseFromBinaryStream(&heat, stream);
		return true;

	case 0x8a7d2287: //ArmorComponent.cold
		TypeInfo<float >::parseFromBinaryStream(&cold, stream);
		return true;

	case 0xa8fd3c0f: //ArmorComponent.acid
		TypeInfo<float >::parseFromBinaryStream(&acid, stream);
		return true;

	case 0xda39ff33: //ArmorComponent.lightSaber
		TypeInfo<float >::parseFromBinaryStream(&lightSaber, stream);
		return true;

	}

	return false;
}

void ArmorComponentImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ArmorComponentImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ArmorComponentImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x7be3e124; //ArmorComponent.kinetic
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&kinetic, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x1ff4a5c9; //ArmorComponent.energy
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&energy, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf8a701b; //ArmorComponent.electricity
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&electricity, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xbc599ae; //ArmorComponent.stun
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&stun, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x7f78d061; //ArmorComponent.blast
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blast, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x4ff04d82; //ArmorComponent.heat
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&heat, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x8a7d2287; //ArmorComponent.cold
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&cold, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xa8fd3c0f; //ArmorComponent.acid
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&acid, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xda39ff33; //ArmorComponent.lightSaber
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&lightSaber, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void ArmorComponentImplementation::writeJSON(nlohmann::json& j) {
	ComponentImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["kinetic"] = kinetic;

	thisObject["energy"] = energy;

	thisObject["electricity"] = electricity;

	thisObject["stun"] = stun;

	thisObject["blast"] = blast;

	thisObject["heat"] = heat;

	thisObject["cold"] = cold;

	thisObject["acid"] = acid;

	thisObject["lightSaber"] = lightSaber;

	j["ArmorComponent"] = thisObject;
}

ArmorComponentImplementation::ArmorComponentImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		Logger.setLoggingName("ArmorComponent");
	Logger::setLoggingName("ArmorComponent");
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		kinetic = 0;
	kinetic = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		energy = 0;
	energy = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		electricity = 0;
	electricity = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		stun = 0;
	stun = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		blast = 0;
	blast = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		heat = 0;
	heat = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		cold = 0;
	cold = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		acid = 0;
	acid = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		lightSaber = 0;
	lightSaber = 0;
}

void ArmorComponentImplementation::setKinetic(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		kinetic = value;
	kinetic = value;
}

void ArmorComponentImplementation::setEnergy(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		energy = value;
	energy = value;
}

void ArmorComponentImplementation::setElectricity(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		electricity = value;
	electricity = value;
}

void ArmorComponentImplementation::setStun(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		stun = value;
	stun = value;
}

void ArmorComponentImplementation::setBlast(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		blast = value;
	blast = value;
}

void ArmorComponentImplementation::setHeat(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		heat = value;
	heat = value;
}

void ArmorComponentImplementation::setCold(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		cold = value;
	cold = value;
}

void ArmorComponentImplementation::setAcid(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		acid = value;
	acid = value;
}

void ArmorComponentImplementation::setLightSaber(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		lightSaber = value;
	lightSaber = value;
}

/*
 *	ArmorComponentAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ArmorComponentAdapter::ArmorComponentAdapter(ArmorComponent* obj) : ComponentAdapter(obj) {
}

void ArmorComponentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_SETKINETIC__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setKinetic(value);
			
		}
		break;
	case RPC_SETENERGY__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setEnergy(value);
			
		}
		break;
	case RPC_SETELECTRICITY__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setElectricity(value);
			
		}
		break;
	case RPC_SETSTUN__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setStun(value);
			
		}
		break;
	case RPC_SETBLAST__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setBlast(value);
			
		}
		break;
	case RPC_SETHEAT__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setHeat(value);
			
		}
		break;
	case RPC_SETCOLD__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setCold(value);
			
		}
		break;
	case RPC_SETACID__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setAcid(value);
			
		}
		break;
	case RPC_SETLIGHTSABER__FLOAT_:
		{
			float value = inv->getFloatParameter();
			
			setLightSaber(value);
			
		}
		break;
	default:
		ComponentAdapter::invokeMethod(methid, inv);
	}
}

void ArmorComponentAdapter::initializeTransientMembers() {
	(static_cast<ArmorComponent*>(stub))->initializeTransientMembers();
}

void ArmorComponentAdapter::setKinetic(float value) {
	(static_cast<ArmorComponent*>(stub))->setKinetic(value);
}

void ArmorComponentAdapter::setEnergy(float value) {
	(static_cast<ArmorComponent*>(stub))->setEnergy(value);
}

void ArmorComponentAdapter::setElectricity(float value) {
	(static_cast<ArmorComponent*>(stub))->setElectricity(value);
}

void ArmorComponentAdapter::setStun(float value) {
	(static_cast<ArmorComponent*>(stub))->setStun(value);
}

void ArmorComponentAdapter::setBlast(float value) {
	(static_cast<ArmorComponent*>(stub))->setBlast(value);
}

void ArmorComponentAdapter::setHeat(float value) {
	(static_cast<ArmorComponent*>(stub))->setHeat(value);
}

void ArmorComponentAdapter::setCold(float value) {
	(static_cast<ArmorComponent*>(stub))->setCold(value);
}

void ArmorComponentAdapter::setAcid(float value) {
	(static_cast<ArmorComponent*>(stub))->setAcid(value);
}

void ArmorComponentAdapter::setLightSaber(float value) {
	(static_cast<ArmorComponent*>(stub))->setLightSaber(value);
}

/*
 *	ArmorComponentHelper
 */

ArmorComponentHelper* ArmorComponentHelper::staticInitializer = ArmorComponentHelper::instance();

ArmorComponentHelper::ArmorComponentHelper() {
	className = "ArmorComponent";

	Core::getObjectBroker()->registerClass(className, this);
}

void ArmorComponentHelper::finalizeHelper() {
	ArmorComponentHelper::finalize();
}

DistributedObject* ArmorComponentHelper::instantiateObject() {
	return new ArmorComponent(DummyConstructorParameter::instance());
}

DistributedObjectServant* ArmorComponentHelper::instantiateServant() {
	return new ArmorComponentImplementation();
}

DistributedObjectPOD* ArmorComponentHelper::instantiatePOD() {
	return new ArmorComponentPOD();
}

DistributedObjectAdapter* ArmorComponentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ArmorComponentAdapter(static_cast<ArmorComponent*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ArmorComponentPOD
 */

ArmorComponentPOD::~ArmorComponentPOD() {
	finalize();
}

ArmorComponentPOD::ArmorComponentPOD(void) {
	_className = "ArmorComponent";
}


void ArmorComponentPOD::writeJSON(nlohmann::json& j) {
	ComponentPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (kinetic)
		thisObject["kinetic"] = kinetic.value();

	if (energy)
		thisObject["energy"] = energy.value();

	if (electricity)
		thisObject["electricity"] = electricity.value();

	if (stun)
		thisObject["stun"] = stun.value();

	if (blast)
		thisObject["blast"] = blast.value();

	if (heat)
		thisObject["heat"] = heat.value();

	if (cold)
		thisObject["cold"] = cold.value();

	if (acid)
		thisObject["acid"] = acid.value();

	if (lightSaber)
		thisObject["lightSaber"] = lightSaber.value();

	j["ArmorComponent"] = thisObject;
}


void ArmorComponentPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ArmorComponentPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ArmorComponentPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (kinetic) {
	_nameHashCode = 0x7be3e124; //ArmorComponent.kinetic
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&kinetic.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (energy) {
	_nameHashCode = 0x1ff4a5c9; //ArmorComponent.energy
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&energy.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (electricity) {
	_nameHashCode = 0xf8a701b; //ArmorComponent.electricity
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&electricity.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (stun) {
	_nameHashCode = 0xbc599ae; //ArmorComponent.stun
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&stun.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (blast) {
	_nameHashCode = 0x7f78d061; //ArmorComponent.blast
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blast.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (heat) {
	_nameHashCode = 0x4ff04d82; //ArmorComponent.heat
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&heat.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (cold) {
	_nameHashCode = 0x8a7d2287; //ArmorComponent.cold
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&cold.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (acid) {
	_nameHashCode = 0xa8fd3c0f; //ArmorComponent.acid
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&acid.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (lightSaber) {
	_nameHashCode = 0xda39ff33; //ArmorComponent.lightSaber
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&lightSaber.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool ArmorComponentPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ComponentPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x7be3e124: //ArmorComponent.kinetic
		{
			float _mnkinetic;
			TypeInfo<float >::parseFromBinaryStream(&_mnkinetic, stream);
			kinetic = std::move(_mnkinetic);
		}
		return true;

	case 0x1ff4a5c9: //ArmorComponent.energy
		{
			float _mnenergy;
			TypeInfo<float >::parseFromBinaryStream(&_mnenergy, stream);
			energy = std::move(_mnenergy);
		}
		return true;

	case 0xf8a701b: //ArmorComponent.electricity
		{
			float _mnelectricity;
			TypeInfo<float >::parseFromBinaryStream(&_mnelectricity, stream);
			electricity = std::move(_mnelectricity);
		}
		return true;

	case 0xbc599ae: //ArmorComponent.stun
		{
			float _mnstun;
			TypeInfo<float >::parseFromBinaryStream(&_mnstun, stream);
			stun = std::move(_mnstun);
		}
		return true;

	case 0x7f78d061: //ArmorComponent.blast
		{
			float _mnblast;
			TypeInfo<float >::parseFromBinaryStream(&_mnblast, stream);
			blast = std::move(_mnblast);
		}
		return true;

	case 0x4ff04d82: //ArmorComponent.heat
		{
			float _mnheat;
			TypeInfo<float >::parseFromBinaryStream(&_mnheat, stream);
			heat = std::move(_mnheat);
		}
		return true;

	case 0x8a7d2287: //ArmorComponent.cold
		{
			float _mncold;
			TypeInfo<float >::parseFromBinaryStream(&_mncold, stream);
			cold = std::move(_mncold);
		}
		return true;

	case 0xa8fd3c0f: //ArmorComponent.acid
		{
			float _mnacid;
			TypeInfo<float >::parseFromBinaryStream(&_mnacid, stream);
			acid = std::move(_mnacid);
		}
		return true;

	case 0xda39ff33: //ArmorComponent.lightSaber
		{
			float _mnlightSaber;
			TypeInfo<float >::parseFromBinaryStream(&_mnlightSaber, stream);
			lightSaber = std::move(_mnlightSaber);
		}
		return true;

	}

	return false;
}

void ArmorComponentPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ArmorComponentPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ArmorComponentPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ComponentPOD::writeObjectCompact(stream);

	TypeInfo<float >::toBinaryStream(&kinetic.value(), stream);

	TypeInfo<float >::toBinaryStream(&energy.value(), stream);

	TypeInfo<float >::toBinaryStream(&electricity.value(), stream);

	TypeInfo<float >::toBinaryStream(&stun.value(), stream);

	TypeInfo<float >::toBinaryStream(&blast.value(), stream);

	TypeInfo<float >::toBinaryStream(&heat.value(), stream);

	TypeInfo<float >::toBinaryStream(&cold.value(), stream);

	TypeInfo<float >::toBinaryStream(&acid.value(), stream);

	TypeInfo<float >::toBinaryStream(&lightSaber.value(), stream);


}
