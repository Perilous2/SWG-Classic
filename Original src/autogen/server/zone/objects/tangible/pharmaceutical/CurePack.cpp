/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/CurePack.cpp generated by engine3 IDL compiler 0.70
 */

#include "CurePack.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	CurePackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_NOTIFYLOADFROMDATABASE__,RPC_CALCULATEPOWER__CREATUREOBJECT_,RPC_ISAREA__,RPC_GETAREA__,RPC_GETSTATE__,RPC_GETEFFECTIVENESS__,RPC_ISCUREPACK__};

CurePack::CurePack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	CurePackImplementation* _implementation = new CurePackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CurePack");
}

CurePack::CurePack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
	_setClassName("CurePack");
}

CurePack::~CurePack() {
}



void CurePack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void CurePack::loadTemplateData(SharedObjectTemplate* templateData) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

int CurePack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
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

void CurePack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void CurePack::notifyLoadFromDatabase() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyLoadFromDatabase();
	}
}

int CurePack::calculatePower(CreatureObject* creature) {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->calculatePower(creature);
	}
}

bool CurePack::isArea() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISAREA__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isArea();
	}
}

float CurePack::getArea() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getArea();
	}
}

unsigned long long CurePack::getState() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATE__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getState();
	}
}

float CurePack::getEffectiveness() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getEffectiveness();
	}
}

bool CurePack::isCurePack() {
	CurePackImplementation* _implementation = static_cast<CurePackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCUREPACK__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isCurePack();
	}
}

DistributedObjectServant* CurePack::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CurePack::_getImplementationForRead() const {
	return _impl;
}

void CurePack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CurePackImplementation
 */

CurePackImplementation::CurePackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


CurePackImplementation::~CurePackImplementation() {
}


void CurePackImplementation::finalize() {
}

void CurePackImplementation::_initializeImplementation() {
	_setClassHelper(CurePackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CurePackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CurePack*>(stub);
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CurePackImplementation::_getStub() {
	return _this.get();
}

CurePackImplementation::operator const CurePack*() {
	return _this.get();
}

void CurePackImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CurePackImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CurePackImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CurePackImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CurePackImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CurePackImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CurePackImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CurePackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("CurePack");

}

void CurePackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CurePackImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CurePackImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (PharmaceuticalObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x62f04ccf: //CurePack.effectiveness
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;

	case 0x28904257: //CurePack.area
		TypeInfo<float >::parseFromBinaryStream(&area, stream);
		return true;

	case 0x75d78d5f: //CurePack.state
		TypeInfo<unsigned long long >::parseFromBinaryStream(&state, stream);
		return true;

	case 0x9b9ea3f6: //CurePack.commandToExecute
		TypeInfo<String >::parseFromBinaryStream(&commandToExecute, stream);
		return true;

	}

	return false;
}

void CurePackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CurePackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CurePackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x62f04ccf; //CurePack.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x28904257; //CurePack.area
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&area, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x75d78d5f; //CurePack.state
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&state, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x9b9ea3f6; //CurePack.commandToExecute
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&commandToExecute, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void CurePackImplementation::writeJSON(nlohmann::json& j) {
	PharmaceuticalObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["effectiveness"] = effectiveness;

	thisObject["area"] = area;

	thisObject["state"] = state;

	thisObject["commandToExecute"] = commandToExecute;

	j["CurePack"] = thisObject;
}

CurePackImplementation::CurePackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		setLoggingName("CurePack");
	setLoggingName("CurePack");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		area = 0;
	area = 0;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		state = 0;
	state = 0;
}

void CurePackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  	}
	if (values->hasExperimentalAttribute("area")){
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			area = values.getCurrentValue("area");
	area = values->getCurrentValue("area");
}
}

void CurePackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		CurePackTemplate 
	if (!templateData->isCurePackTemplate())	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		CurePackTemplate curePackTemplate = (CurePackTemplate) templateData;
	CurePackTemplate* curePackTemplate = dynamic_cast<CurePackTemplate*>(templateData);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		effectiveness = curePackTemplate.getEffectiveness();
	effectiveness = curePackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.medicineUseRequired = curePackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = curePackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		area = curePackTemplate.getArea();
	area = curePackTemplate->getArea();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		state = curePackTemplate.getState();
	state = curePackTemplate->getState();
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		commandToExecute = curePackTemplate.getCommandToExecute();
	commandToExecute = curePackTemplate->getCommandToExecute();
}

int CurePackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		if 
	if (!isASubChildOf(player))	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 0;
	return 0;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		}
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			player.sendCommand(commandToExecute, String.valueOf(super.getObjectID()), player.getTargetID());
	player->sendCommand(commandToExecute, String::valueOf(PharmaceuticalObjectImplementation::getObjectID()), player->getTargetID());
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			return 0;
	return 0;
}
}

void CurePackImplementation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		string eff = "@obj_attr_n:dot_type_";
	String eff = "@obj_attr_n:dot_type_";
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		msg.insertAttribute("examine_dot_cure", eff + CreatureState.instance().getSpecialName(state));
	msg->insertAttribute("examine_dot_cure", eff + CreatureState::instance()->getSpecialName(state));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		msg.insertAttribute("examine_dot_cure_power", Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_dot_cure_power", Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		}
	if (isArea()){
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			msg.insertAttribute("examine_heal_area", Math.getPrecision(area, 0));
	msg->insertAttribute("examine_heal_area", Math::getPrecision(area, 0));
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			msg.insertAttribute("healing_ability", super.getMedicineUseRequired());
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::getMedicineUseRequired());
}

	else {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  			msg.insertAttribute("healing_ability", super.getMedicineUseRequired());
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::getMedicineUseRequired());
}
}

int CurePackImplementation::calculatePower(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		float modSkill = (float) creature.getSkillMod("healing_wound_treatment");
	float modSkill = (float) creature->getSkillMod("healing_wound_treatment");
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return ((100 + modSkill) / 100 * effectiveness);
	return ((100 + modSkill) / 100 * effectiveness);
}

bool CurePackImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return area != 0;
	return area != 0;
}

float CurePackImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return area;
	return area;
}

unsigned long long CurePackImplementation::getState() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return state;
	return state;
}

float CurePackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return effectiveness;
	return effectiveness;
}

bool CurePackImplementation::isCurePack() {
	// server/zone/objects/tangible/pharmaceutical/CurePack.idl():  		return true;
	return true;
}

/*
 *	CurePackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CurePackAdapter::CurePackAdapter(CurePack* obj) : PharmaceuticalObjectAdapter(obj) {
}

void CurePackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_NOTIFYLOADFROMDATABASE__:
		{
			
			notifyLoadFromDatabase();
			
		}
		break;
	case RPC_CALCULATEPOWER__CREATUREOBJECT_:
		{
			CreatureObject* creature = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			int _m_res = calculatePower(creature);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ISAREA__:
		{
			
			bool _m_res = isArea();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETAREA__:
		{
			
			float _m_res = getArea();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETSTATE__:
		{
			
			unsigned long long _m_res = getState();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_GETEFFECTIVENESS__:
		{
			
			float _m_res = getEffectiveness();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_ISCUREPACK__:
		{
			
			bool _m_res = isCurePack();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		PharmaceuticalObjectAdapter::invokeMethod(methid, inv);
	}
}

int CurePackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<CurePack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void CurePackAdapter::notifyLoadFromDatabase() {
	(static_cast<CurePack*>(stub))->notifyLoadFromDatabase();
}

int CurePackAdapter::calculatePower(CreatureObject* creature) {
	return (static_cast<CurePack*>(stub))->calculatePower(creature);
}

bool CurePackAdapter::isArea() {
	return (static_cast<CurePack*>(stub))->isArea();
}

float CurePackAdapter::getArea() {
	return (static_cast<CurePack*>(stub))->getArea();
}

unsigned long long CurePackAdapter::getState() {
	return (static_cast<CurePack*>(stub))->getState();
}

float CurePackAdapter::getEffectiveness() {
	return (static_cast<CurePack*>(stub))->getEffectiveness();
}

bool CurePackAdapter::isCurePack() {
	return (static_cast<CurePack*>(stub))->isCurePack();
}

/*
 *	CurePackHelper
 */

CurePackHelper* CurePackHelper::staticInitializer = CurePackHelper::instance();

CurePackHelper::CurePackHelper() {
	className = "CurePack";

	Core::getObjectBroker()->registerClass(className, this);
}

void CurePackHelper::finalizeHelper() {
	CurePackHelper::finalize();
}

DistributedObject* CurePackHelper::instantiateObject() {
	return new CurePack(DummyConstructorParameter::instance());
}

DistributedObjectServant* CurePackHelper::instantiateServant() {
	return new CurePackImplementation();
}

DistributedObjectPOD* CurePackHelper::instantiatePOD() {
	return new CurePackPOD();
}

DistributedObjectAdapter* CurePackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CurePackAdapter(static_cast<CurePack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CurePackPOD
 */

CurePackPOD::~CurePackPOD() {
	finalize();
}

CurePackPOD::CurePackPOD(void) {
	_className = "CurePack";
}


void CurePackPOD::writeJSON(nlohmann::json& j) {
	PharmaceuticalObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (effectiveness)
		thisObject["effectiveness"] = effectiveness.value();

	if (area)
		thisObject["area"] = area.value();

	if (state)
		thisObject["state"] = state.value();

	if (commandToExecute)
		thisObject["commandToExecute"] = commandToExecute.value();

	j["CurePack"] = thisObject;
}


void CurePackPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CurePackPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CurePackPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (effectiveness) {
	_nameHashCode = 0x62f04ccf; //CurePack.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (area) {
	_nameHashCode = 0x28904257; //CurePack.area
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&area.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (state) {
	_nameHashCode = 0x75d78d5f; //CurePack.state
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&state.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (commandToExecute) {
	_nameHashCode = 0x9b9ea3f6; //CurePack.commandToExecute
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&commandToExecute.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool CurePackPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (PharmaceuticalObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x62f04ccf: //CurePack.effectiveness
		{
			float _mneffectiveness;
			TypeInfo<float >::parseFromBinaryStream(&_mneffectiveness, stream);
			effectiveness = std::move(_mneffectiveness);
		}
		return true;

	case 0x28904257: //CurePack.area
		{
			float _mnarea;
			TypeInfo<float >::parseFromBinaryStream(&_mnarea, stream);
			area = std::move(_mnarea);
		}
		return true;

	case 0x75d78d5f: //CurePack.state
		{
			unsigned long long _mnstate;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mnstate, stream);
			state = std::move(_mnstate);
		}
		return true;

	case 0x9b9ea3f6: //CurePack.commandToExecute
		{
			String _mncommandToExecute;
			TypeInfo<String >::parseFromBinaryStream(&_mncommandToExecute, stream);
			commandToExecute = std::move(_mncommandToExecute);
		}
		return true;

	}

	return false;
}

void CurePackPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CurePackPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void CurePackPOD::writeObjectCompact(ObjectOutputStream* stream) {
	PharmaceuticalObjectPOD::writeObjectCompact(stream);

	TypeInfo<float >::toBinaryStream(&effectiveness.value(), stream);

	TypeInfo<float >::toBinaryStream(&area.value(), stream);

	TypeInfo<unsigned long long >::toBinaryStream(&state.value(), stream);

	TypeInfo<String >::toBinaryStream(&commandToExecute.value(), stream);


}
