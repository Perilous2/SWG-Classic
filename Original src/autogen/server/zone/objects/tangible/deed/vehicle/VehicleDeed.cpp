/*
 *	autogen/server/zone/objects/tangible/deed/vehicle/VehicleDeed.cpp generated by engine3 IDL compiler 0.70
 */

#include "VehicleDeed.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	VehicleDeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 2449348908,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_ISVEHICLEDEEDOBJECT__};

VehicleDeed::VehicleDeed() : Deed(DummyConstructorParameter::instance()) {
	VehicleDeedImplementation* _implementation = new VehicleDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("VehicleDeed");
}

VehicleDeed::VehicleDeed(DummyConstructorParameter* param) : Deed(param) {
	_setClassName("VehicleDeed");
}

VehicleDeed::~VehicleDeed() {
}



void VehicleDeed::initializeTransientMembers() {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void VehicleDeed::loadTemplateData(SharedObjectTemplate* templateData) {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void VehicleDeed::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(alm, object);
	}
}

void VehicleDeed::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int VehicleDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementation());
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

void VehicleDeed::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

bool VehicleDeed::isVehicleDeedObject() {
	VehicleDeedImplementation* _implementation = static_cast<VehicleDeedImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVEHICLEDEEDOBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isVehicleDeedObject();
	}
}

DistributedObjectServant* VehicleDeed::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* VehicleDeed::_getImplementationForRead() const {
	return _impl;
}

void VehicleDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	VehicleDeedImplementation
 */

VehicleDeedImplementation::VehicleDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


VehicleDeedImplementation::~VehicleDeedImplementation() {
}


void VehicleDeedImplementation::finalize() {
}

void VehicleDeedImplementation::_initializeImplementation() {
	_setClassHelper(VehicleDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void VehicleDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<VehicleDeed*>(stub);
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* VehicleDeedImplementation::_getStub() {
	return _this.get();
}

VehicleDeedImplementation::operator const VehicleDeed*() {
	return _this.get();
}

void VehicleDeedImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void VehicleDeedImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void VehicleDeedImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void VehicleDeedImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void VehicleDeedImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void VehicleDeedImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void VehicleDeedImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void VehicleDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("VehicleDeed");

}

void VehicleDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(VehicleDeedImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool VehicleDeedImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (DeedImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x11c2fd9f: //VehicleDeed.hitPoints
		TypeInfo<int >::parseFromBinaryStream(&hitPoints, stream);
		return true;

	case 0x2470429b: //VehicleDeed.controlDeviceObjectTemplate
		TypeInfo<String >::parseFromBinaryStream(&controlDeviceObjectTemplate, stream);
		return true;

	}

	return false;
}

void VehicleDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VehicleDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VehicleDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x11c2fd9f; //VehicleDeed.hitPoints
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&hitPoints, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x2470429b; //VehicleDeed.controlDeviceObjectTemplate
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&controlDeviceObjectTemplate, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void VehicleDeedImplementation::writeJSON(nlohmann::json& j) {
	DeedImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["hitPoints"] = hitPoints;

	thisObject["controlDeviceObjectTemplate"] = controlDeviceObjectTemplate;

	j["VehicleDeed"] = thisObject;
}

VehicleDeedImplementation::VehicleDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/vehicle/VehicleDeed.idl():  		Logger.setLoggingName("VehicleDeed");
	Logger::setLoggingName("VehicleDeed");
	// server/zone/objects/tangible/deed/vehicle/VehicleDeed.idl():  		hitPoints = 1500;
	hitPoints = 1500;
}

bool VehicleDeedImplementation::isVehicleDeedObject() {
	// server/zone/objects/tangible/deed/vehicle/VehicleDeed.idl():  		return true;
	return true;
}

/*
 *	VehicleDeedAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


VehicleDeedAdapter::VehicleDeedAdapter(VehicleDeed* obj) : DeedAdapter(obj) {
}

void VehicleDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_ISVEHICLEDEEDOBJECT__:
		{
			
			bool _m_res = isVehicleDeedObject();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		DeedAdapter::invokeMethod(methid, inv);
	}
}

void VehicleDeedAdapter::initializeTransientMembers() {
	(static_cast<VehicleDeed*>(stub))->initializeTransientMembers();
}

int VehicleDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<VehicleDeed*>(stub))->handleObjectMenuSelect(player, selectedID);
}

bool VehicleDeedAdapter::isVehicleDeedObject() {
	return (static_cast<VehicleDeed*>(stub))->isVehicleDeedObject();
}

/*
 *	VehicleDeedHelper
 */

VehicleDeedHelper* VehicleDeedHelper::staticInitializer = VehicleDeedHelper::instance();

VehicleDeedHelper::VehicleDeedHelper() {
	className = "VehicleDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void VehicleDeedHelper::finalizeHelper() {
	VehicleDeedHelper::finalize();
}

DistributedObject* VehicleDeedHelper::instantiateObject() {
	return new VehicleDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* VehicleDeedHelper::instantiateServant() {
	return new VehicleDeedImplementation();
}

DistributedObjectPOD* VehicleDeedHelper::instantiatePOD() {
	return new VehicleDeedPOD();
}

DistributedObjectAdapter* VehicleDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VehicleDeedAdapter(static_cast<VehicleDeed*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	VehicleDeedPOD
 */

VehicleDeedPOD::~VehicleDeedPOD() {
	finalize();
}

VehicleDeedPOD::VehicleDeedPOD(void) {
	_className = "VehicleDeed";
}


void VehicleDeedPOD::writeJSON(nlohmann::json& j) {
	DeedPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (hitPoints)
		thisObject["hitPoints"] = hitPoints.value();

	if (controlDeviceObjectTemplate)
		thisObject["controlDeviceObjectTemplate"] = controlDeviceObjectTemplate.value();

	j["VehicleDeed"] = thisObject;
}


void VehicleDeedPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VehicleDeedPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VehicleDeedPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (hitPoints) {
	_nameHashCode = 0x11c2fd9f; //VehicleDeed.hitPoints
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&hitPoints.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (controlDeviceObjectTemplate) {
	_nameHashCode = 0x2470429b; //VehicleDeed.controlDeviceObjectTemplate
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&controlDeviceObjectTemplate.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool VehicleDeedPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (DeedPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x11c2fd9f: //VehicleDeed.hitPoints
		{
			int _mnhitPoints;
			TypeInfo<int >::parseFromBinaryStream(&_mnhitPoints, stream);
			hitPoints = std::move(_mnhitPoints);
		}
		return true;

	case 0x2470429b: //VehicleDeed.controlDeviceObjectTemplate
		{
			String _mncontrolDeviceObjectTemplate;
			TypeInfo<String >::parseFromBinaryStream(&_mncontrolDeviceObjectTemplate, stream);
			controlDeviceObjectTemplate = std::move(_mncontrolDeviceObjectTemplate);
		}
		return true;

	}

	return false;
}

void VehicleDeedPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(VehicleDeedPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void VehicleDeedPOD::writeObjectCompact(ObjectOutputStream* stream) {
	DeedPOD::writeObjectCompact(stream);

	TypeInfo<int >::toBinaryStream(&hitPoints.value(), stream);

	TypeInfo<String >::toBinaryStream(&controlDeviceObjectTemplate.value(), stream);


}
