/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/StimPack.cpp generated by engine3 IDL compiler 0.70
 */

#include "StimPack.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	StimPackStub
 */

enum {RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_GETEFFECTIVENESS__,RPC_SPLIT__INT_,RPC_ISSTIMPACK__,RPC_ISPETSTIMPACK__,RPC_ISDROIDREPAIRKIT__,RPC_GETMEDICINECLASS__,RPC_ISCLASSA__,RPC_ISCLASSB__,RPC_ISCLASSC__,RPC_ISCLASSD__,RPC_ISCLASSE__,};

StimPack::StimPack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	StimPackImplementation* _implementation = new StimPackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("StimPack");
}

StimPack::StimPack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
	_setClassName("StimPack");
}

StimPack::~StimPack() {
}



void StimPack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void StimPack::loadTemplateData(SharedObjectTemplate* templateData) {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

unsigned int StimPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->calculatePower(healer, patient, applyBattleFatigue);
	}
}

int StimPack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementation());
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

void StimPack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

float StimPack::getEffectiveness() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getEffectiveness();
	}
}

StimPack* StimPack::split(int charges) {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPLIT__INT_);
		method.addSignedIntParameter(charges);

		return static_cast<StimPack*>(method.executeWithObjectReturn());
	} else {
		return _implementation->split(charges);
	}
}

bool StimPack::isStimPack() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTIMPACK__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isStimPack();
	}
}

bool StimPack::isPetStimPack() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPETSTIMPACK__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isPetStimPack();
	}
}

bool StimPack::isDroidRepairKit() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDROIDREPAIRKIT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isDroidRepairKit();
	}
}

int StimPack::getMedicineClass() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMEDICINECLASS__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getMedicineClass();
	}
}

bool StimPack::isClassA() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCLASSA__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isClassA();
	}
}

bool StimPack::isClassB() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCLASSB__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isClassB();
	}
}

bool StimPack::isClassC() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCLASSC__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isClassC();
	}
}

bool StimPack::isClassD() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCLASSD__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isClassD();
	}
}

bool StimPack::isClassE() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCLASSE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isClassE();
	}
}

Vector<byte> StimPack::getAttributes() {
	StimPackImplementation* _implementation = static_cast<StimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getAttributes();
	}
}

DistributedObjectServant* StimPack::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* StimPack::_getImplementationForRead() const {
	return _impl;
}

void StimPack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StimPackImplementation
 */

StimPackImplementation::StimPackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


StimPackImplementation::~StimPackImplementation() {
}


void StimPackImplementation::finalize() {
}

void StimPackImplementation::_initializeImplementation() {
	_setClassHelper(StimPackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StimPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StimPack*>(stub);
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* StimPackImplementation::_getStub() {
	return _this.get();
}

StimPackImplementation::operator const StimPack*() {
	return _this.get();
}

void StimPackImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void StimPackImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void StimPackImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void StimPackImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void StimPackImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void StimPackImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void StimPackImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void StimPackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("StimPack");

}

void StimPackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StimPackImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StimPackImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (PharmaceuticalObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x42482912: //StimPack.effectiveness
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;

	case 0xcbf3f664: //StimPack.medicineClass
		TypeInfo<int >::parseFromBinaryStream(&medicineClass, stream);
		return true;

	}

	return false;
}

void StimPackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StimPackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StimPackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x42482912; //StimPack.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xcbf3f664; //StimPack.medicineClass
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&medicineClass, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void StimPackImplementation::writeJSON(nlohmann::json& j) {
	PharmaceuticalObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["effectiveness"] = effectiveness;

	thisObject["medicineClass"] = medicineClass;

	j["StimPack"] = thisObject;
}

StimPackImplementation::StimPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		setLoggingName("StimPack");
	setLoggingName("StimPack");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		medicineClass = 0;
	medicineClass = 0;
}

void StimPackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		}
	if (isPetStimPack()){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
}

	else 	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		}
	if (isDroidRepairKit()){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			effectiveness = values.getCurrentValue("energy");
	effectiveness = values->getCurrentValue("energy");
}

	else {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
}
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
}

void StimPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		StimPackTemplate 
	if (!templateData->isStimPackTemplate())	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		StimPackTemplate stimPackTemplate = (StimPackTemplate) templateData;
	StimPackTemplate* stimPackTemplate = dynamic_cast<StimPackTemplate*>(templateData);
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		medicineClass = stimPackTemplate.getMedicineClass();
	medicineClass = stimPackTemplate->getMedicineClass();
}

unsigned int StimPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		if 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			power *= patient.calculateBFRatio();
	power *= patient->calculateBFRatio();
}
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		}
	if (isPetStimPack() || isDroidRepairKit()){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return power;
	return power;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			float modSkill = (float) healer.getSkillMod("healing_injury_treatment");
	float modSkill = (float) healer->getSkillMod("healing_injury_treatment");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return (100 + modSkill) / 100 * power;
	return (100 + modSkill) / 100 * power;
}
}

int StimPackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		if 
	if (!isASubChildOf(player))	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return 0;
	return 0;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		}
	if (isPetStimPack()){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			player.sendCommand("healpet", String.valueOf(super.getObjectID()), player.getTargetID());
	player->sendCommand("healpet", String::valueOf(PharmaceuticalObjectImplementation::getObjectID()), player->getTargetID());
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return 0;
	return 0;
}

	else 	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		}
	if (isDroidRepairKit()){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			player.sendCommand("healdroiddamage", String.valueOf(super.getObjectID()), player.getTargetID());
	player->sendCommand("healdroiddamage", String::valueOf(PharmaceuticalObjectImplementation::getObjectID()), player->getTargetID());
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return 0;
	return 0;
}

	else 	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		}
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			player.sendCommand("healdamage", String.valueOf(super.getObjectID()), player.getTargetID());
	player->sendCommand("healdamage", String::valueOf(PharmaceuticalObjectImplementation::getObjectID()), player->getTargetID());
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  			return 0;
	return 0;
}
}

float StimPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		return effectiveness;
	return effectiveness;
}

bool StimPackImplementation::isStimPack() {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		return true;
	return true;
}

int StimPackImplementation::getMedicineClass() {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl():  		return medicineClass;
	return medicineClass;
}

/*
 *	StimPackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


StimPackAdapter::StimPackAdapter(StimPack* obj) : PharmaceuticalObjectAdapter(obj) {
}

void StimPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_:
		{
			CreatureObject* healer = static_cast<CreatureObject*>(inv->getObjectParameter());
			CreatureObject* patient = static_cast<CreatureObject*>(inv->getObjectParameter());
			bool applyBattleFatigue = inv->getBooleanParameter();
			
			unsigned int _m_res = calculatePower(healer, patient, applyBattleFatigue);
			resp->insertInt(_m_res);
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
	case RPC_GETEFFECTIVENESS__:
		{
			
			float _m_res = getEffectiveness();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_SPLIT__INT_:
		{
			int charges = inv->getSignedIntParameter();
			
			DistributedObject* _m_res = split(charges);
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_ISSTIMPACK__:
		{
			
			bool _m_res = isStimPack();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISPETSTIMPACK__:
		{
			
			bool _m_res = isPetStimPack();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISDROIDREPAIRKIT__:
		{
			
			bool _m_res = isDroidRepairKit();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETMEDICINECLASS__:
		{
			
			int _m_res = getMedicineClass();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ISCLASSA__:
		{
			
			bool _m_res = isClassA();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISCLASSB__:
		{
			
			bool _m_res = isClassB();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISCLASSC__:
		{
			
			bool _m_res = isClassC();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISCLASSD__:
		{
			
			bool _m_res = isClassD();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISCLASSE__:
		{
			
			bool _m_res = isClassE();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		PharmaceuticalObjectAdapter::invokeMethod(methid, inv);
	}
}

unsigned int StimPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return (static_cast<StimPack*>(stub))->calculatePower(healer, patient, applyBattleFatigue);
}

int StimPackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<StimPack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

float StimPackAdapter::getEffectiveness() {
	return (static_cast<StimPack*>(stub))->getEffectiveness();
}

StimPack* StimPackAdapter::split(int charges) {
	return (static_cast<StimPack*>(stub))->split(charges);
}

bool StimPackAdapter::isStimPack() {
	return (static_cast<StimPack*>(stub))->isStimPack();
}

bool StimPackAdapter::isPetStimPack() {
	return (static_cast<StimPack*>(stub))->isPetStimPack();
}

bool StimPackAdapter::isDroidRepairKit() {
	return (static_cast<StimPack*>(stub))->isDroidRepairKit();
}

int StimPackAdapter::getMedicineClass() {
	return (static_cast<StimPack*>(stub))->getMedicineClass();
}

bool StimPackAdapter::isClassA() {
	return (static_cast<StimPack*>(stub))->isClassA();
}

bool StimPackAdapter::isClassB() {
	return (static_cast<StimPack*>(stub))->isClassB();
}

bool StimPackAdapter::isClassC() {
	return (static_cast<StimPack*>(stub))->isClassC();
}

bool StimPackAdapter::isClassD() {
	return (static_cast<StimPack*>(stub))->isClassD();
}

bool StimPackAdapter::isClassE() {
	return (static_cast<StimPack*>(stub))->isClassE();
}

/*
 *	StimPackHelper
 */

StimPackHelper* StimPackHelper::staticInitializer = StimPackHelper::instance();

StimPackHelper::StimPackHelper() {
	className = "StimPack";

	Core::getObjectBroker()->registerClass(className, this);
}

void StimPackHelper::finalizeHelper() {
	StimPackHelper::finalize();
}

DistributedObject* StimPackHelper::instantiateObject() {
	return new StimPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* StimPackHelper::instantiateServant() {
	return new StimPackImplementation();
}

DistributedObjectPOD* StimPackHelper::instantiatePOD() {
	return new StimPackPOD();
}

DistributedObjectAdapter* StimPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StimPackAdapter(static_cast<StimPack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	StimPackPOD
 */

StimPackPOD::~StimPackPOD() {
	finalize();
}

StimPackPOD::StimPackPOD(void) {
	_className = "StimPack";
}


void StimPackPOD::writeJSON(nlohmann::json& j) {
	PharmaceuticalObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (effectiveness)
		thisObject["effectiveness"] = effectiveness.value();

	if (medicineClass)
		thisObject["medicineClass"] = medicineClass.value();

	j["StimPack"] = thisObject;
}


void StimPackPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StimPackPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StimPackPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (effectiveness) {
	_nameHashCode = 0x42482912; //StimPack.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (medicineClass) {
	_nameHashCode = 0xcbf3f664; //StimPack.medicineClass
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&medicineClass.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool StimPackPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (PharmaceuticalObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x42482912: //StimPack.effectiveness
		{
			float _mneffectiveness;
			TypeInfo<float >::parseFromBinaryStream(&_mneffectiveness, stream);
			effectiveness = std::move(_mneffectiveness);
		}
		return true;

	case 0xcbf3f664: //StimPack.medicineClass
		{
			int _mnmedicineClass;
			TypeInfo<int >::parseFromBinaryStream(&_mnmedicineClass, stream);
			medicineClass = std::move(_mnmedicineClass);
		}
		return true;

	}

	return false;
}

void StimPackPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StimPackPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void StimPackPOD::writeObjectCompact(ObjectOutputStream* stream) {
	PharmaceuticalObjectPOD::writeObjectCompact(stream);

	TypeInfo<float >::toBinaryStream(&effectiveness.value(), stream);

	TypeInfo<int >::toBinaryStream(&medicineClass.value(), stream);


}
