/*
 *	autogen/server/zone/objects/tangible/tool/SurveyTool.cpp generated by engine3 IDL compiler 0.70
 */

#include "SurveyTool.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	SurveyToolStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 4161626280,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SETRANGE__INT_,RPC_SENDRANGESUI__CREATUREOBJECT_,RPC_GETRANGE__CREATUREOBJECT_,RPC_GETPOINTS__,RPC_GETTOOLTYPE__,RPC_GETSURVEYTYPE__,RPC_GETSURVEYANIMATION__,RPC_GETSAMPLEANIMATION__,RPC_CANSAMPLERADIOACTIVE__,RPC_SENDRADIOACTIVEWARNING__CREATUREOBJECT_,RPC_CONSENTRADIOACTIVESAMPLE__CREATUREOBJECT_};

SurveyTool::SurveyTool() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	SurveyToolImplementation* _implementation = new SurveyToolImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SurveyTool");
}

SurveyTool::SurveyTool(DummyConstructorParameter* param) : ToolTangibleObject(param) {
	_setClassName("SurveyTool");
}

SurveyTool::~SurveyTool() {
}



void SurveyTool::initializeTransientMembers() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void SurveyTool::loadTemplateData(SharedObjectTemplate* templateData) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void SurveyTool::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int SurveyTool::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
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

void SurveyTool::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void SurveyTool::setRange(int r) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRANGE__INT_);
		method.addSignedIntParameter(r);

		method.executeWithVoidReturn();
	} else {
		_implementation->setRange(r);
	}
}

void SurveyTool::sendRangeSui(CreatureObject* player) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRANGESUI__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendRangeSui(player);
	}
}

int SurveyTool::getRange(CreatureObject* player) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getRange(player);
	}
}

int SurveyTool::getPoints() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPOINTS__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getPoints();
	}
}

int SurveyTool::getToolType() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOOLTYPE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getToolType();
	}
}

String SurveyTool::getSurveyType() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURVEYTYPE__);

		String _return_getSurveyType;
		method.executeWithAsciiReturn(_return_getSurveyType);
		return _return_getSurveyType;
	} else {
		return _implementation->getSurveyType();
	}
}

String SurveyTool::getSurveyAnimation() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURVEYANIMATION__);

		String _return_getSurveyAnimation;
		method.executeWithAsciiReturn(_return_getSurveyAnimation);
		return _return_getSurveyAnimation;
	} else {
		return _implementation->getSurveyAnimation();
	}
}

String SurveyTool::getSampleAnimation() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSAMPLEANIMATION__);

		String _return_getSampleAnimation;
		method.executeWithAsciiReturn(_return_getSampleAnimation);
		return _return_getSampleAnimation;
	} else {
		return _implementation->getSampleAnimation();
	}
}

bool SurveyTool::canSampleRadioactive() {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANSAMPLERADIOACTIVE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->canSampleRadioactive();
	}
}

void SurveyTool::sendRadioactiveWarning(CreatureObject* player) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRADIOACTIVEWARNING__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendRadioactiveWarning(player);
	}
}

void SurveyTool::consentRadioactiveSample(CreatureObject* player) {
	SurveyToolImplementation* _implementation = static_cast<SurveyToolImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONSENTRADIOACTIVESAMPLE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->consentRadioactiveSample(player);
	}
}

DistributedObjectServant* SurveyTool::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SurveyTool::_getImplementationForRead() const {
	return _impl;
}

void SurveyTool::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SurveyToolImplementation
 */

SurveyToolImplementation::SurveyToolImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}


SurveyToolImplementation::~SurveyToolImplementation() {
}


void SurveyToolImplementation::finalize() {
}

void SurveyToolImplementation::_initializeImplementation() {
	_setClassHelper(SurveyToolHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SurveyToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SurveyTool*>(stub);
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SurveyToolImplementation::_getStub() {
	return _this.get();
}

SurveyToolImplementation::operator const SurveyTool*() {
	return _this.get();
}

void SurveyToolImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SurveyToolImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SurveyToolImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SurveyToolImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SurveyToolImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SurveyToolImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SurveyToolImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SurveyToolImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("SurveyTool");

}

void SurveyToolImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SurveyToolImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SurveyToolImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ToolTangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcf84352d: //SurveyTool.range
		TypeInfo<int >::parseFromBinaryStream(&range, stream);
		return true;

	case 0xa9704625: //SurveyTool.points
		TypeInfo<int >::parseFromBinaryStream(&points, stream);
		return true;

	case 0x9bc03b08: //SurveyTool.type
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;

	case 0x68ee3022: //SurveyTool.surveyType
		TypeInfo<String >::parseFromBinaryStream(&surveyType, stream);
		return true;

	case 0xb891177: //SurveyTool.surveyAnimation
		TypeInfo<String >::parseFromBinaryStream(&surveyAnimation, stream);
		return true;

	case 0xa44925b: //SurveyTool.sampleAnimation
		TypeInfo<String >::parseFromBinaryStream(&sampleAnimation, stream);
		return true;

	case 0xa2bafe38: //SurveyTool.radioactiveOk
		TypeInfo<bool >::parseFromBinaryStream(&radioactiveOk, stream);
		return true;

	}

	return false;
}

void SurveyToolImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SurveyToolImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SurveyToolImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ToolTangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xcf84352d; //SurveyTool.range
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&range, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xa9704625; //SurveyTool.points
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&points, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x9bc03b08; //SurveyTool.type
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x68ee3022; //SurveyTool.surveyType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&surveyType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xb891177; //SurveyTool.surveyAnimation
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&surveyAnimation, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xa44925b; //SurveyTool.sampleAnimation
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&sampleAnimation, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xa2bafe38; //SurveyTool.radioactiveOk
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&radioactiveOk, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void SurveyToolImplementation::writeJSON(nlohmann::json& j) {
	ToolTangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["range"] = range;

	thisObject["points"] = points;

	thisObject["type"] = type;

	thisObject["surveyType"] = surveyType;

	thisObject["surveyAnimation"] = surveyAnimation;

	thisObject["sampleAnimation"] = sampleAnimation;

	thisObject["radioactiveOk"] = radioactiveOk;

	j["SurveyTool"] = thisObject;
}

SurveyToolImplementation::SurveyToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		Logger.setLoggingName("SurveyTool");
	Logger::setLoggingName("SurveyTool");
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		radioactiveOk = false;
	radioactiveOk = false;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		range = 0;
	range = 0;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		points = 0;
	points = 0;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		points = 0;
	points = 0;
}

void SurveyToolImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		Logger.setLoggingName("SurveyTool");
	Logger::setLoggingName("SurveyTool");
}

void SurveyToolImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
}

int SurveyToolImplementation::getPoints() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return points;
	return points;
}

int SurveyToolImplementation::getToolType() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return type;
	return type;
}

String SurveyToolImplementation::getSurveyType() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return surveyType;
	return surveyType;
}

String SurveyToolImplementation::getSurveyAnimation() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return surveyAnimation;
	return surveyAnimation;
}

String SurveyToolImplementation::getSampleAnimation() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return sampleAnimation;
	return sampleAnimation;
}

bool SurveyToolImplementation::canSampleRadioactive() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return radioactiveOk;
	return radioactiveOk;
}

/*
 *	SurveyToolAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SurveyToolAdapter::SurveyToolAdapter(SurveyTool* obj) : ToolTangibleObjectAdapter(obj) {
}

void SurveyToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_SETRANGE__INT_:
		{
			int r = inv->getSignedIntParameter();
			
			setRange(r);
			
		}
		break;
	case RPC_SENDRANGESUI__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			sendRangeSui(player);
			
		}
		break;
	case RPC_GETRANGE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			int _m_res = getRange(player);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETPOINTS__:
		{
			
			int _m_res = getPoints();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETTOOLTYPE__:
		{
			
			int _m_res = getToolType();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETSURVEYTYPE__:
		{
			
			String _m_res = getSurveyType();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETSURVEYANIMATION__:
		{
			
			String _m_res = getSurveyAnimation();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETSAMPLEANIMATION__:
		{
			
			String _m_res = getSampleAnimation();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_CANSAMPLERADIOACTIVE__:
		{
			
			bool _m_res = canSampleRadioactive();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SENDRADIOACTIVEWARNING__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			sendRadioactiveWarning(player);
			
		}
		break;
	case RPC_CONSENTRADIOACTIVESAMPLE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			consentRadioactiveSample(player);
			
		}
		break;
	default:
		ToolTangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

void SurveyToolAdapter::initializeTransientMembers() {
	(static_cast<SurveyTool*>(stub))->initializeTransientMembers();
}

int SurveyToolAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<SurveyTool*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void SurveyToolAdapter::setRange(int r) {
	(static_cast<SurveyTool*>(stub))->setRange(r);
}

void SurveyToolAdapter::sendRangeSui(CreatureObject* player) {
	(static_cast<SurveyTool*>(stub))->sendRangeSui(player);
}

int SurveyToolAdapter::getRange(CreatureObject* player) {
	return (static_cast<SurveyTool*>(stub))->getRange(player);
}

int SurveyToolAdapter::getPoints() {
	return (static_cast<SurveyTool*>(stub))->getPoints();
}

int SurveyToolAdapter::getToolType() {
	return (static_cast<SurveyTool*>(stub))->getToolType();
}

String SurveyToolAdapter::getSurveyType() {
	return (static_cast<SurveyTool*>(stub))->getSurveyType();
}

String SurveyToolAdapter::getSurveyAnimation() {
	return (static_cast<SurveyTool*>(stub))->getSurveyAnimation();
}

String SurveyToolAdapter::getSampleAnimation() {
	return (static_cast<SurveyTool*>(stub))->getSampleAnimation();
}

bool SurveyToolAdapter::canSampleRadioactive() {
	return (static_cast<SurveyTool*>(stub))->canSampleRadioactive();
}

void SurveyToolAdapter::sendRadioactiveWarning(CreatureObject* player) {
	(static_cast<SurveyTool*>(stub))->sendRadioactiveWarning(player);
}

void SurveyToolAdapter::consentRadioactiveSample(CreatureObject* player) {
	(static_cast<SurveyTool*>(stub))->consentRadioactiveSample(player);
}

/*
 *	SurveyToolHelper
 */

SurveyToolHelper* SurveyToolHelper::staticInitializer = SurveyToolHelper::instance();

SurveyToolHelper::SurveyToolHelper() {
	className = "SurveyTool";

	Core::getObjectBroker()->registerClass(className, this);
}

void SurveyToolHelper::finalizeHelper() {
	SurveyToolHelper::finalize();
}

DistributedObject* SurveyToolHelper::instantiateObject() {
	return new SurveyTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* SurveyToolHelper::instantiateServant() {
	return new SurveyToolImplementation();
}

DistributedObjectPOD* SurveyToolHelper::instantiatePOD() {
	return new SurveyToolPOD();
}

DistributedObjectAdapter* SurveyToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SurveyToolAdapter(static_cast<SurveyTool*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	SurveyToolPOD
 */

SurveyToolPOD::~SurveyToolPOD() {
	finalize();
}

SurveyToolPOD::SurveyToolPOD(void) {
	_className = "SurveyTool";
}


void SurveyToolPOD::writeJSON(nlohmann::json& j) {
	ToolTangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (range)
		thisObject["range"] = range.value();

	if (points)
		thisObject["points"] = points.value();

	if (type)
		thisObject["type"] = type.value();

	if (surveyType)
		thisObject["surveyType"] = surveyType.value();

	if (surveyAnimation)
		thisObject["surveyAnimation"] = surveyAnimation.value();

	if (sampleAnimation)
		thisObject["sampleAnimation"] = sampleAnimation.value();

	if (radioactiveOk)
		thisObject["radioactiveOk"] = radioactiveOk.value();

	j["SurveyTool"] = thisObject;
}


void SurveyToolPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SurveyToolPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SurveyToolPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ToolTangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (range) {
	_nameHashCode = 0xcf84352d; //SurveyTool.range
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&range.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (points) {
	_nameHashCode = 0xa9704625; //SurveyTool.points
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&points.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (type) {
	_nameHashCode = 0x9bc03b08; //SurveyTool.type
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&type.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (surveyType) {
	_nameHashCode = 0x68ee3022; //SurveyTool.surveyType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&surveyType.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (surveyAnimation) {
	_nameHashCode = 0xb891177; //SurveyTool.surveyAnimation
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&surveyAnimation.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (sampleAnimation) {
	_nameHashCode = 0xa44925b; //SurveyTool.sampleAnimation
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&sampleAnimation.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (radioactiveOk) {
	_nameHashCode = 0xa2bafe38; //SurveyTool.radioactiveOk
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&radioactiveOk.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool SurveyToolPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ToolTangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcf84352d: //SurveyTool.range
		{
			int _mnrange;
			TypeInfo<int >::parseFromBinaryStream(&_mnrange, stream);
			range = std::move(_mnrange);
		}
		return true;

	case 0xa9704625: //SurveyTool.points
		{
			int _mnpoints;
			TypeInfo<int >::parseFromBinaryStream(&_mnpoints, stream);
			points = std::move(_mnpoints);
		}
		return true;

	case 0x9bc03b08: //SurveyTool.type
		{
			int _mntype;
			TypeInfo<int >::parseFromBinaryStream(&_mntype, stream);
			type = std::move(_mntype);
		}
		return true;

	case 0x68ee3022: //SurveyTool.surveyType
		{
			String _mnsurveyType;
			TypeInfo<String >::parseFromBinaryStream(&_mnsurveyType, stream);
			surveyType = std::move(_mnsurveyType);
		}
		return true;

	case 0xb891177: //SurveyTool.surveyAnimation
		{
			String _mnsurveyAnimation;
			TypeInfo<String >::parseFromBinaryStream(&_mnsurveyAnimation, stream);
			surveyAnimation = std::move(_mnsurveyAnimation);
		}
		return true;

	case 0xa44925b: //SurveyTool.sampleAnimation
		{
			String _mnsampleAnimation;
			TypeInfo<String >::parseFromBinaryStream(&_mnsampleAnimation, stream);
			sampleAnimation = std::move(_mnsampleAnimation);
		}
		return true;

	case 0xa2bafe38: //SurveyTool.radioactiveOk
		{
			bool _mnradioactiveOk;
			TypeInfo<bool >::parseFromBinaryStream(&_mnradioactiveOk, stream);
			radioactiveOk = std::move(_mnradioactiveOk);
		}
		return true;

	}

	return false;
}

void SurveyToolPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SurveyToolPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void SurveyToolPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ToolTangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<int >::toBinaryStream(&range.value(), stream);

	TypeInfo<int >::toBinaryStream(&points.value(), stream);

	TypeInfo<int >::toBinaryStream(&type.value(), stream);

	TypeInfo<String >::toBinaryStream(&surveyType.value(), stream);

	TypeInfo<String >::toBinaryStream(&surveyAnimation.value(), stream);

	TypeInfo<String >::toBinaryStream(&sampleAnimation.value(), stream);

	TypeInfo<bool >::toBinaryStream(&radioactiveOk.value(), stream);


}

