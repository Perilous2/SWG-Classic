/*
 *	autogen/server/zone/objects/tangible/deed/structure/StructureDeed.cpp generated by engine3 IDL compiler 0.70
 */

#include "StructureDeed.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	StructureDeedStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_PLACESTRUCTURE__CREATUREOBJECT_FLOAT_FLOAT_INT_,RPC_NOTIFYSTRUCTUREPLACED__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_SETSURPLUSMAINTENANCE__INT_,RPC_SETSURPLUSPOWER__INT_,RPC_SETEXTRACTIONRATE__FLOAT_,RPC_SETHOPPERSIZE__FLOAT_,RPC_GETSURPLUSMAINTENANCE__,RPC_GETSURPLUSPOWER__,RPC_GETEXTRACTIONRATE__,RPC_GETHOPPERSIZE__,RPC_ISSTRUCTUREDEED__};

StructureDeed::StructureDeed() : Deed(DummyConstructorParameter::instance()) {
	StructureDeedImplementation* _implementation = new StructureDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("StructureDeed");
}

StructureDeed::StructureDeed(DummyConstructorParameter* param) : Deed(param) {
	_setClassName("StructureDeed");
}

StructureDeed::~StructureDeed() {
}



void StructureDeed::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(alm, object);
	}
}

int StructureDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
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

void StructureDeed::initializeTransientMembers() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void StructureDeed::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

int StructureDeed::placeStructure(CreatureObject* creature, float x, float y, int angle) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLACESTRUCTURE__CREATUREOBJECT_FLOAT_FLOAT_INT_);
		method.addObjectParameter(creature);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(angle);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->placeStructure(creature, x, y, angle);
	}
}

int StructureDeed::notifyStructurePlaced(CreatureObject* creature, StructureObject* structure) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYSTRUCTUREPLACED__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->notifyStructurePlaced(creature, structure);
	}
}

void StructureDeed::setSurplusMaintenance(unsigned int maint) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSURPLUSMAINTENANCE__INT_);
		method.addUnsignedIntParameter(maint);

		method.executeWithVoidReturn();
	} else {
		_implementation->setSurplusMaintenance(maint);
	}
}

void StructureDeed::setSurplusPower(unsigned int power) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSURPLUSPOWER__INT_);
		method.addUnsignedIntParameter(power);

		method.executeWithVoidReturn();
	} else {
		_implementation->setSurplusPower(power);
	}
}

void StructureDeed::setExtractionRate(float rate) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETEXTRACTIONRATE__FLOAT_);
		method.addFloatParameter(rate);

		method.executeWithVoidReturn();
	} else {
		_implementation->setExtractionRate(rate);
	}
}

void StructureDeed::setHopperSize(float size) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETHOPPERSIZE__FLOAT_);
		method.addFloatParameter(size);

		method.executeWithVoidReturn();
	} else {
		_implementation->setHopperSize(size);
	}
}

unsigned int StructureDeed::getSurplusMaintenance() const {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURPLUSMAINTENANCE__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getSurplusMaintenance();
	}
}

unsigned int StructureDeed::getSurplusPower() const {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURPLUSPOWER__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getSurplusPower();
	}
}

float StructureDeed::getExtractionRate() const {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEXTRACTIONRATE__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getExtractionRate();
	}
}

float StructureDeed::getHopperSize() const {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHOPPERSIZE__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getHopperSize();
	}
}

bool StructureDeed::isStructureDeed() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTRUCTUREDEED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isStructureDeed();
	}
}

DistributedObjectServant* StructureDeed::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* StructureDeed::_getImplementationForRead() const {
	return _impl;
}

void StructureDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StructureDeedImplementation
 */

StructureDeedImplementation::StructureDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


StructureDeedImplementation::~StructureDeedImplementation() {
}


void StructureDeedImplementation::finalize() {
}

void StructureDeedImplementation::_initializeImplementation() {
	_setClassHelper(StructureDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StructureDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StructureDeed*>(stub);
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* StructureDeedImplementation::_getStub() {
	return _this.get();
}

StructureDeedImplementation::operator const StructureDeed*() {
	return _this.get();
}

void StructureDeedImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void StructureDeedImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void StructureDeedImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void StructureDeedImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void StructureDeedImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void StructureDeedImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void StructureDeedImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void StructureDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("StructureDeed");

}

void StructureDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StructureDeedImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StructureDeedImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (DeedImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa7cd55c1: //StructureDeed.surplusMaintenance
		TypeInfo<unsigned int >::parseFromBinaryStream(&surplusMaintenance, stream);
		return true;

	case 0x46b21969: //StructureDeed.surplusPower
		TypeInfo<unsigned int >::parseFromBinaryStream(&surplusPower, stream);
		return true;

	case 0xdaea6b37: //StructureDeed.extractionRate
		TypeInfo<float >::parseFromBinaryStream(&extractionRate, stream);
		return true;

	case 0x5b9b75a2: //StructureDeed.hopperSizeMax
		TypeInfo<float >::parseFromBinaryStream(&hopperSizeMax, stream);
		return true;

	}

	return false;
}

void StructureDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StructureDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StructureDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xa7cd55c1; //StructureDeed.surplusMaintenance
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusMaintenance, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x46b21969; //StructureDeed.surplusPower
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusPower, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xdaea6b37; //StructureDeed.extractionRate
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&extractionRate, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x5b9b75a2; //StructureDeed.hopperSizeMax
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&hopperSizeMax, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void StructureDeedImplementation::writeJSON(nlohmann::json& j) {
	DeedImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["surplusMaintenance"] = surplusMaintenance;

	thisObject["surplusPower"] = surplusPower;

	thisObject["extractionRate"] = extractionRate;

	thisObject["hopperSizeMax"] = hopperSizeMax;

	j["StructureDeed"] = thisObject;
}

StructureDeedImplementation::StructureDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		Logger.setLoggingName("StructureDeed");
	Logger::setLoggingName("StructureDeed");
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusMaintenance = 0;
	surplusMaintenance = 0;
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusPower = 0;
	surplusPower = 0;
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		extractionRate = 0;
	extractionRate = 0;
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		hopperSizeMax = 0;
	hopperSizeMax = 0;
}

int StructureDeedImplementation::placeStructure(CreatureObject* creature, float x, float y, int angle) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 
	if (placeStructureComponent){
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  			return placeStructureComponent.placeStructure(this, creature, x, y, angle);
	return placeStructureComponent->placeStructure(_this.getReferenceUnsafeStaticCast(), creature, x, y, angle);
}
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 1;
	return 1;
}

int StructureDeedImplementation::notifyStructurePlaced(CreatureObject* creature, StructureObject* structure) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 
	if (placeStructureComponent){
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  			return placeStructureComponent.notifyStructurePlaced(this, creature, structure);
	return placeStructureComponent->notifyStructurePlaced(_this.getReferenceUnsafeStaticCast(), creature, structure);
}
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 1;
	return 1;
}

void StructureDeedImplementation::setSurplusMaintenance(unsigned int maint) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusMaintenance = maint;
	surplusMaintenance = maint;
}

void StructureDeedImplementation::setSurplusPower(unsigned int power) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusPower = power;
	surplusPower = power;
}

void StructureDeedImplementation::setExtractionRate(float rate) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		extractionRate = rate;
	extractionRate = rate;
}

void StructureDeedImplementation::setHopperSize(float size) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		hopperSizeMax = size;
	hopperSizeMax = size;
}

unsigned int StructureDeedImplementation::getSurplusMaintenance() const{
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return surplusMaintenance;
	return surplusMaintenance;
}

unsigned int StructureDeedImplementation::getSurplusPower() const{
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return surplusPower;
	return surplusPower;
}

float StructureDeedImplementation::getExtractionRate() const{
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return extractionRate;
	return extractionRate;
}

float StructureDeedImplementation::getHopperSize() const{
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return hopperSizeMax;
	return hopperSizeMax;
}

bool StructureDeedImplementation::isStructureDeed() {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return true;
	return true;
}

/*
 *	StructureDeedAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


StructureDeedAdapter::StructureDeedAdapter(StructureDeed* obj) : DeedAdapter(obj) {
}

void StructureDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_PLACESTRUCTURE__CREATUREOBJECT_FLOAT_FLOAT_INT_:
		{
			CreatureObject* creature = static_cast<CreatureObject*>(inv->getObjectParameter());
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			int angle = inv->getSignedIntParameter();
			
			int _m_res = placeStructure(creature, x, y, angle);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_NOTIFYSTRUCTUREPLACED__CREATUREOBJECT_STRUCTUREOBJECT_:
		{
			CreatureObject* creature = static_cast<CreatureObject*>(inv->getObjectParameter());
			StructureObject* structure = static_cast<StructureObject*>(inv->getObjectParameter());
			
			int _m_res = notifyStructurePlaced(creature, structure);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETSURPLUSMAINTENANCE__INT_:
		{
			unsigned int maint = inv->getUnsignedIntParameter();
			
			setSurplusMaintenance(maint);
			
		}
		break;
	case RPC_SETSURPLUSPOWER__INT_:
		{
			unsigned int power = inv->getUnsignedIntParameter();
			
			setSurplusPower(power);
			
		}
		break;
	case RPC_SETEXTRACTIONRATE__FLOAT_:
		{
			float rate = inv->getFloatParameter();
			
			setExtractionRate(rate);
			
		}
		break;
	case RPC_SETHOPPERSIZE__FLOAT_:
		{
			float size = inv->getFloatParameter();
			
			setHopperSize(size);
			
		}
		break;
	case RPC_GETSURPLUSMAINTENANCE__:
		{
			
			unsigned int _m_res = getSurplusMaintenance();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETSURPLUSPOWER__:
		{
			
			unsigned int _m_res = getSurplusPower();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETEXTRACTIONRATE__:
		{
			
			float _m_res = getExtractionRate();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETHOPPERSIZE__:
		{
			
			float _m_res = getHopperSize();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_ISSTRUCTUREDEED__:
		{
			
			bool _m_res = isStructureDeed();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		DeedAdapter::invokeMethod(methid, inv);
	}
}

int StructureDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<StructureDeed*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void StructureDeedAdapter::initializeTransientMembers() {
	(static_cast<StructureDeed*>(stub))->initializeTransientMembers();
}

int StructureDeedAdapter::placeStructure(CreatureObject* creature, float x, float y, int angle) {
	return (static_cast<StructureDeed*>(stub))->placeStructure(creature, x, y, angle);
}

int StructureDeedAdapter::notifyStructurePlaced(CreatureObject* creature, StructureObject* structure) {
	return (static_cast<StructureDeed*>(stub))->notifyStructurePlaced(creature, structure);
}

void StructureDeedAdapter::setSurplusMaintenance(unsigned int maint) {
	(static_cast<StructureDeed*>(stub))->setSurplusMaintenance(maint);
}

void StructureDeedAdapter::setSurplusPower(unsigned int power) {
	(static_cast<StructureDeed*>(stub))->setSurplusPower(power);
}

void StructureDeedAdapter::setExtractionRate(float rate) {
	(static_cast<StructureDeed*>(stub))->setExtractionRate(rate);
}

void StructureDeedAdapter::setHopperSize(float size) {
	(static_cast<StructureDeed*>(stub))->setHopperSize(size);
}

unsigned int StructureDeedAdapter::getSurplusMaintenance() const {
	return (static_cast<StructureDeed*>(stub))->getSurplusMaintenance();
}

unsigned int StructureDeedAdapter::getSurplusPower() const {
	return (static_cast<StructureDeed*>(stub))->getSurplusPower();
}

float StructureDeedAdapter::getExtractionRate() const {
	return (static_cast<StructureDeed*>(stub))->getExtractionRate();
}

float StructureDeedAdapter::getHopperSize() const {
	return (static_cast<StructureDeed*>(stub))->getHopperSize();
}

bool StructureDeedAdapter::isStructureDeed() {
	return (static_cast<StructureDeed*>(stub))->isStructureDeed();
}

/*
 *	StructureDeedHelper
 */

StructureDeedHelper* StructureDeedHelper::staticInitializer = StructureDeedHelper::instance();

StructureDeedHelper::StructureDeedHelper() {
	className = "StructureDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void StructureDeedHelper::finalizeHelper() {
	StructureDeedHelper::finalize();
}

DistributedObject* StructureDeedHelper::instantiateObject() {
	return new StructureDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* StructureDeedHelper::instantiateServant() {
	return new StructureDeedImplementation();
}

DistributedObjectPOD* StructureDeedHelper::instantiatePOD() {
	return new StructureDeedPOD();
}

DistributedObjectAdapter* StructureDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureDeedAdapter(static_cast<StructureDeed*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	StructureDeedPOD
 */

StructureDeedPOD::~StructureDeedPOD() {
	finalize();
}

StructureDeedPOD::StructureDeedPOD(void) {
	_className = "StructureDeed";
}


void StructureDeedPOD::writeJSON(nlohmann::json& j) {
	DeedPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (surplusMaintenance)
		thisObject["surplusMaintenance"] = surplusMaintenance.value();

	if (surplusPower)
		thisObject["surplusPower"] = surplusPower.value();

	if (extractionRate)
		thisObject["extractionRate"] = extractionRate.value();

	if (hopperSizeMax)
		thisObject["hopperSizeMax"] = hopperSizeMax.value();

	j["StructureDeed"] = thisObject;
}


void StructureDeedPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StructureDeedPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StructureDeedPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (surplusMaintenance) {
	_nameHashCode = 0xa7cd55c1; //StructureDeed.surplusMaintenance
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusMaintenance.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (surplusPower) {
	_nameHashCode = 0x46b21969; //StructureDeed.surplusPower
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusPower.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (extractionRate) {
	_nameHashCode = 0xdaea6b37; //StructureDeed.extractionRate
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&extractionRate.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (hopperSizeMax) {
	_nameHashCode = 0x5b9b75a2; //StructureDeed.hopperSizeMax
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&hopperSizeMax.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool StructureDeedPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (DeedPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa7cd55c1: //StructureDeed.surplusMaintenance
		{
			unsigned int _mnsurplusMaintenance;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mnsurplusMaintenance, stream);
			surplusMaintenance = std::move(_mnsurplusMaintenance);
		}
		return true;

	case 0x46b21969: //StructureDeed.surplusPower
		{
			unsigned int _mnsurplusPower;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mnsurplusPower, stream);
			surplusPower = std::move(_mnsurplusPower);
		}
		return true;

	case 0xdaea6b37: //StructureDeed.extractionRate
		{
			float _mnextractionRate;
			TypeInfo<float >::parseFromBinaryStream(&_mnextractionRate, stream);
			extractionRate = std::move(_mnextractionRate);
		}
		return true;

	case 0x5b9b75a2: //StructureDeed.hopperSizeMax
		{
			float _mnhopperSizeMax;
			TypeInfo<float >::parseFromBinaryStream(&_mnhopperSizeMax, stream);
			hopperSizeMax = std::move(_mnhopperSizeMax);
		}
		return true;

	}

	return false;
}

void StructureDeedPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StructureDeedPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void StructureDeedPOD::writeObjectCompact(ObjectOutputStream* stream) {
	DeedPOD::writeObjectCompact(stream);

	TypeInfo<unsigned int >::toBinaryStream(&surplusMaintenance.value(), stream);

	TypeInfo<unsigned int >::toBinaryStream(&surplusPower.value(), stream);

	TypeInfo<float >::toBinaryStream(&extractionRate.value(), stream);

	TypeInfo<float >::toBinaryStream(&hopperSizeMax.value(), stream);


}

