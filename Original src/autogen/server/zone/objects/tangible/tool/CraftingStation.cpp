/*
 *	autogen/server/zone/objects/tangible/tool/CraftingStation.cpp generated by engine3 IDL compiler 0.70
 */

#include "CraftingStation.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	CraftingStationStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 2544907394,RPC_NOTIFYLOADFROMDATABASE__,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SENDINPUTHOPPER__CREATUREOBJECT_,RPC_ISCRAFTINGSTATION__,RPC_GETCOMPLEXITYLEVEL__,RPC_GETSTATIONTYPE__,RPC_SETCOMPLEXITYLEVEL__INT_,RPC_FINDCRAFTINGTOOL__CREATUREOBJECT_,RPC_CREATECHILDOBJECTS__,RPC_SETEFFECTIVENESS__FLOAT_,RPC_SETDROIDPARENT__CREATUREOBJECT_,RPC_GETDROIDPARENT__};

CraftingStation::CraftingStation() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	CraftingStationImplementation* _implementation = new CraftingStationImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CraftingStation");
}

CraftingStation::CraftingStation(DummyConstructorParameter* param) : ToolTangibleObject(param) {
	_setClassName("CraftingStation");
}

CraftingStation::~CraftingStation() {
}



void CraftingStation::initializeTransientMembers() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void CraftingStation::loadTemplateData(SharedObjectTemplate* templateData) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void CraftingStation::notifyLoadFromDatabase() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyLoadFromDatabase();
	}
}

void CraftingStation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int CraftingStation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
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

void CraftingStation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void CraftingStation::sendInputHopper(CreatureObject* player) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDINPUTHOPPER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendInputHopper(player);
	}
}

void CraftingStation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

bool CraftingStation::isCraftingStation() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCRAFTINGSTATION__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isCraftingStation();
	}
}

int CraftingStation::getComplexityLevel() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOMPLEXITYLEVEL__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getComplexityLevel();
	}
}

int CraftingStation::getStationType() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATIONTYPE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getStationType();
	}
}

void CraftingStation::setComplexityLevel(int level) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCOMPLEXITYLEVEL__INT_);
		method.addSignedIntParameter(level);

		method.executeWithVoidReturn();
	} else {
		_implementation->setComplexityLevel(level);
	}
}

SceneObject* CraftingStation::findCraftingTool(CreatureObject* player) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FINDCRAFTINGTOOL__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->findCraftingTool(player);
	}
}

void CraftingStation::createChildObjects() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECHILDOBJECTS__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->createChildObjects();
	}
}

void CraftingStation::setEffectiveness(float newValue) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETEFFECTIVENESS__FLOAT_);
		method.addFloatParameter(newValue);

		method.executeWithVoidReturn();
	} else {
		_implementation->setEffectiveness(newValue);
	}
}

void CraftingStation::setDroidParent(CreatureObject* parentCreO) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDROIDPARENT__CREATUREOBJECT_);
		method.addObjectParameter(parentCreO);

		method.executeWithVoidReturn();
	} else {
		_implementation->setDroidParent(parentCreO);
	}
}

ManagedWeakReference<CreatureObject* > CraftingStation::getDroidParent() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDROIDPARENT__);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getDroidParent();
	}
}

DistributedObjectServant* CraftingStation::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CraftingStation::_getImplementationForRead() const {
	return _impl;
}

void CraftingStation::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingStationImplementation
 */

CraftingStationImplementation::CraftingStationImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}


CraftingStationImplementation::~CraftingStationImplementation() {
}


void CraftingStationImplementation::finalize() {
}

void CraftingStationImplementation::_initializeImplementation() {
	_setClassHelper(CraftingStationHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CraftingStationImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CraftingStation*>(stub);
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingStationImplementation::_getStub() {
	return _this.get();
}

CraftingStationImplementation::operator const CraftingStation*() {
	return _this.get();
}

void CraftingStationImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CraftingStationImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CraftingStationImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CraftingStationImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CraftingStationImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CraftingStationImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CraftingStationImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CraftingStationImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("CraftingStation");

}

void CraftingStationImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CraftingStationImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingStationImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ToolTangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa0d6bdcb: //CraftingStation.type
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;

	case 0x9a4c325e: //CraftingStation.effectiveness
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;

	case 0x4455a756: //CraftingStation.complexityLevel
		TypeInfo<int >::parseFromBinaryStream(&complexityLevel, stream);
		return true;

	case 0xf7cbc30: //CraftingStation.droidParent
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&droidParent, stream);
		return true;

	}

	return false;
}

void CraftingStationImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingStationImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingStationImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ToolTangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xa0d6bdcb; //CraftingStation.type
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x9a4c325e; //CraftingStation.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x4455a756; //CraftingStation.complexityLevel
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&complexityLevel, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf7cbc30; //CraftingStation.droidParent
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&droidParent, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void CraftingStationImplementation::writeJSON(nlohmann::json& j) {
	ToolTangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["type"] = type;

	thisObject["effectiveness"] = effectiveness;

	thisObject["complexityLevel"] = complexityLevel;

	thisObject["droidParent"] = droidParent;

	j["CraftingStation"] = thisObject;
}

CraftingStationImplementation::CraftingStationImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		Logger.setLoggingName("CraftingStation");
	Logger::setLoggingName("CraftingStation");
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		complexityLevel = 0;
	complexityLevel = 0;
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		effectiveness = 25;
	effectiveness = 25;
}

void CraftingStationImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		Logger.setLoggingName("CraftingStation");
	Logger::setLoggingName("CraftingStation");
}

bool CraftingStationImplementation::isCraftingStation() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return true;
	return true;
}

int CraftingStationImplementation::getComplexityLevel() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return complexityLevel;
	return complexityLevel;
}

int CraftingStationImplementation::getStationType() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return type;
	return type;
}

void CraftingStationImplementation::setComplexityLevel(int level) {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		complexityLevel = level;
	complexityLevel = level;
}

void CraftingStationImplementation::setEffectiveness(float newValue) {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		effectiveness = newValue;
	effectiveness = newValue;
}

void CraftingStationImplementation::setDroidParent(CreatureObject* parentCreO) {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		droidParent = parentCreO;
	droidParent = parentCreO;
}

ManagedWeakReference<CreatureObject* > CraftingStationImplementation::getDroidParent() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return droidParent;
	return droidParent;
}

/*
 *	CraftingStationAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CraftingStationAdapter::CraftingStationAdapter(CraftingStation* obj) : ToolTangibleObjectAdapter(obj) {
}

void CraftingStationAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_SENDINPUTHOPPER__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			sendInputHopper(player);
			
		}
		break;
	case RPC_ISCRAFTINGSTATION__:
		{
			
			bool _m_res = isCraftingStation();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETCOMPLEXITYLEVEL__:
		{
			
			int _m_res = getComplexityLevel();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETSTATIONTYPE__:
		{
			
			int _m_res = getStationType();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETCOMPLEXITYLEVEL__INT_:
		{
			int level = inv->getSignedIntParameter();
			
			setComplexityLevel(level);
			
		}
		break;
	case RPC_FINDCRAFTINGTOOL__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			DistributedObject* _m_res = findCraftingTool(player);
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_CREATECHILDOBJECTS__:
		{
			
			createChildObjects();
			
		}
		break;
	case RPC_SETEFFECTIVENESS__FLOAT_:
		{
			float newValue = inv->getFloatParameter();
			
			setEffectiveness(newValue);
			
		}
		break;
	case RPC_SETDROIDPARENT__CREATUREOBJECT_:
		{
			CreatureObject* parentCreO = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			setDroidParent(parentCreO);
			
		}
		break;
	case RPC_GETDROIDPARENT__:
		{
			
			DistributedObject* _m_res = getDroidParent().get();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	default:
		ToolTangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void CraftingStationAdapter::initializeTransientMembers() {
	(static_cast<CraftingStation*>(stub))->initializeTransientMembers();
}

void CraftingStationAdapter::notifyLoadFromDatabase() {
	(static_cast<CraftingStation*>(stub))->notifyLoadFromDatabase();
}

int CraftingStationAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<CraftingStation*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void CraftingStationAdapter::sendInputHopper(CreatureObject* player) {
	(static_cast<CraftingStation*>(stub))->sendInputHopper(player);
}

bool CraftingStationAdapter::isCraftingStation() {
	return (static_cast<CraftingStation*>(stub))->isCraftingStation();
}

int CraftingStationAdapter::getComplexityLevel() {
	return (static_cast<CraftingStation*>(stub))->getComplexityLevel();
}

int CraftingStationAdapter::getStationType() {
	return (static_cast<CraftingStation*>(stub))->getStationType();
}

void CraftingStationAdapter::setComplexityLevel(int level) {
	(static_cast<CraftingStation*>(stub))->setComplexityLevel(level);
}

SceneObject* CraftingStationAdapter::findCraftingTool(CreatureObject* player) {
	return (static_cast<CraftingStation*>(stub))->findCraftingTool(player);
}

void CraftingStationAdapter::createChildObjects() {
	(static_cast<CraftingStation*>(stub))->createChildObjects();
}

void CraftingStationAdapter::setEffectiveness(float newValue) {
	(static_cast<CraftingStation*>(stub))->setEffectiveness(newValue);
}

void CraftingStationAdapter::setDroidParent(CreatureObject* parentCreO) {
	(static_cast<CraftingStation*>(stub))->setDroidParent(parentCreO);
}

ManagedWeakReference<CreatureObject* > CraftingStationAdapter::getDroidParent() {
	return (static_cast<CraftingStation*>(stub))->getDroidParent();
}

/*
 *	CraftingStationHelper
 */

CraftingStationHelper* CraftingStationHelper::staticInitializer = CraftingStationHelper::instance();

CraftingStationHelper::CraftingStationHelper() {
	className = "CraftingStation";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingStationHelper::finalizeHelper() {
	CraftingStationHelper::finalize();
}

DistributedObject* CraftingStationHelper::instantiateObject() {
	return new CraftingStation(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingStationHelper::instantiateServant() {
	return new CraftingStationImplementation();
}

DistributedObjectPOD* CraftingStationHelper::instantiatePOD() {
	return new CraftingStationPOD();
}

DistributedObjectAdapter* CraftingStationHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingStationAdapter(static_cast<CraftingStation*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CraftingStationPOD
 */

CraftingStationPOD::~CraftingStationPOD() {
	finalize();
}

CraftingStationPOD::CraftingStationPOD(void) {
	_className = "CraftingStation";
}


void CraftingStationPOD::writeJSON(nlohmann::json& j) {
	ToolTangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (type)
		thisObject["type"] = type.value();

	if (effectiveness)
		thisObject["effectiveness"] = effectiveness.value();

	if (complexityLevel)
		thisObject["complexityLevel"] = complexityLevel.value();

	if (droidParent)
		thisObject["droidParent"] = droidParent.value();

	j["CraftingStation"] = thisObject;
}


void CraftingStationPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingStationPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingStationPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ToolTangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (type) {
	_nameHashCode = 0xa0d6bdcb; //CraftingStation.type
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&type.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (effectiveness) {
	_nameHashCode = 0x9a4c325e; //CraftingStation.effectiveness
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (complexityLevel) {
	_nameHashCode = 0x4455a756; //CraftingStation.complexityLevel
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&complexityLevel.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (droidParent) {
	_nameHashCode = 0xf7cbc30; //CraftingStation.droidParent
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&droidParent.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool CraftingStationPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ToolTangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa0d6bdcb: //CraftingStation.type
		{
			int _mntype;
			TypeInfo<int >::parseFromBinaryStream(&_mntype, stream);
			type = std::move(_mntype);
		}
		return true;

	case 0x9a4c325e: //CraftingStation.effectiveness
		{
			float _mneffectiveness;
			TypeInfo<float >::parseFromBinaryStream(&_mneffectiveness, stream);
			effectiveness = std::move(_mneffectiveness);
		}
		return true;

	case 0x4455a756: //CraftingStation.complexityLevel
		{
			int _mncomplexityLevel;
			TypeInfo<int >::parseFromBinaryStream(&_mncomplexityLevel, stream);
			complexityLevel = std::move(_mncomplexityLevel);
		}
		return true;

	case 0xf7cbc30: //CraftingStation.droidParent
		{
			ManagedWeakReference<CreatureObjectPOD* > _mndroidParent;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mndroidParent, stream);
			droidParent = std::move(_mndroidParent);
		}
		return true;

	}

	return false;
}

void CraftingStationPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CraftingStationPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void CraftingStationPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ToolTangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<int >::toBinaryStream(&type.value(), stream);

	TypeInfo<float >::toBinaryStream(&effectiveness.value(), stream);

	TypeInfo<int >::toBinaryStream(&complexityLevel.value(), stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&droidParent.value(), stream);


}

