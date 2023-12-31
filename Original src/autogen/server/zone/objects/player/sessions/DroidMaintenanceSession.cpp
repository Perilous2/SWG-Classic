/*
 *	autogen/server/zone/objects/player/sessions/DroidMaintenanceSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "DroidMaintenanceSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/objects/tangible/components/droid/DroidMaintenanceModuleDataComponent.h"

/*
 *	DroidMaintenanceSessionStub
 */

enum {RPC_INITIALIZE__ = 3330724904,RPC_SENDMAINTANCERUNBOX__,RPC_SETSELECTEDSTRUCTURE__STRUCTUREOBJECT_,RPC_SENDMAINTENANCETRANSFERBOX__,RPC_PERFORMMAINTENANCERUN__,RPC_CANCELSESSION__,RPC_GETAVAILABLECREDITS__,RPC_ADDCREDITSTOCURRENTSTRUCTURE__INT_};

DroidMaintenanceSession::DroidMaintenanceSession(DroidMaintenanceModuleDataComponent* module, CreatureObject* creature) : Facade(DummyConstructorParameter::instance()) {
	DroidMaintenanceSessionImplementation* _implementation = new DroidMaintenanceSessionImplementation(module, creature);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DroidMaintenanceSession");
}

DroidMaintenanceSession::DroidMaintenanceSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("DroidMaintenanceSession");
}

DroidMaintenanceSession::~DroidMaintenanceSession() {
}



void DroidMaintenanceSession::initialize() {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initialize();
	}
}

void DroidMaintenanceSession::sendMaintanceRunBox() {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDMAINTANCERUNBOX__);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendMaintanceRunBox();
	}
}

void DroidMaintenanceSession::setSelectedStructure(StructureObject* structure) {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSELECTEDSTRUCTURE__STRUCTUREOBJECT_);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else {
		_implementation->setSelectedStructure(structure);
	}
}

void DroidMaintenanceSession::sendMaintenanceTransferBox() {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDMAINTENANCETRANSFERBOX__);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendMaintenanceTransferBox();
	}
}

void DroidMaintenanceSession::performMaintenanceRun() {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PERFORMMAINTENANCERUN__);

		method.executeWithVoidReturn();
	} else {
		_implementation->performMaintenanceRun();
	}
}

int DroidMaintenanceSession::cancelSession() {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

long long DroidMaintenanceSession::getAvailableCredits() {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAVAILABLECREDITS__);

		return method.executeWithSignedLongReturn();
	} else {
		return _implementation->getAvailableCredits();
	}
}

void DroidMaintenanceSession::addCreditsToCurrentStructure(int amount) {
	DroidMaintenanceSessionImplementation* _implementation = static_cast<DroidMaintenanceSessionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDCREDITSTOCURRENTSTRUCTURE__INT_);
		method.addSignedIntParameter(amount);

		method.executeWithVoidReturn();
	} else {
		_implementation->addCreditsToCurrentStructure(amount);
	}
}

DistributedObjectServant* DroidMaintenanceSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* DroidMaintenanceSession::_getImplementationForRead() const {
	return _impl;
}

void DroidMaintenanceSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DroidMaintenanceSessionImplementation
 */

DroidMaintenanceSessionImplementation::DroidMaintenanceSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


DroidMaintenanceSessionImplementation::~DroidMaintenanceSessionImplementation() {
}


void DroidMaintenanceSessionImplementation::finalize() {
}

void DroidMaintenanceSessionImplementation::_initializeImplementation() {
	_setClassHelper(DroidMaintenanceSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DroidMaintenanceSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DroidMaintenanceSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* DroidMaintenanceSessionImplementation::_getStub() {
	return _this.get();
}

DroidMaintenanceSessionImplementation::operator const DroidMaintenanceSession*() {
	return _this.get();
}

void DroidMaintenanceSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DroidMaintenanceSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DroidMaintenanceSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DroidMaintenanceSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DroidMaintenanceSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DroidMaintenanceSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DroidMaintenanceSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DroidMaintenanceSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("DroidMaintenanceSession");

}

void DroidMaintenanceSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DroidMaintenanceSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DroidMaintenanceSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x9f32972d: //DroidMaintenanceSession.maintModule
		TypeInfo<WeakReference<DroidMaintenanceModuleDataComponent* > >::parseFromBinaryStream(&maintModule, stream);
		return true;

	case 0xf51a5ceb: //DroidMaintenanceSession.player
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;

	case 0x46a6b1e3: //DroidMaintenanceSession.structures
		TypeInfo<Vector<ManagedReference<StructureObject* > > >::parseFromBinaryStream(&structures, stream);
		return true;

	case 0x6b04a0e2: //DroidMaintenanceSession.maintenance
		TypeInfo<VectorMap<unsigned long long, int> >::parseFromBinaryStream(&maintenance, stream);
		return true;

	case 0x16f4ef53: //DroidMaintenanceSession.fees
		TypeInfo<Vector<int> >::parseFromBinaryStream(&fees, stream);
		return true;

	case 0x8199ad3e: //DroidMaintenanceSession.selectedStructure
		TypeInfo<ManagedReference<StructureObject* > >::parseFromBinaryStream(&selectedStructure, stream);
		return true;

	case 0x7bcaab63: //DroidMaintenanceSession.selectedFees
		TypeInfo<int >::parseFromBinaryStream(&selectedFees, stream);
		return true;

	case 0xeec82ece: //DroidMaintenanceSession.availableCredits
		TypeInfo<long long >::parseFromBinaryStream(&availableCredits, stream);
		return true;

	}

	return false;
}

void DroidMaintenanceSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DroidMaintenanceSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DroidMaintenanceSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x9f32972d; //DroidMaintenanceSession.maintModule
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<WeakReference<DroidMaintenanceModuleDataComponent* > >::toBinaryStream(&maintModule, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf51a5ceb; //DroidMaintenanceSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x46a6b1e3; //DroidMaintenanceSession.structures
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<ManagedReference<StructureObject* > > >::toBinaryStream(&structures, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x6b04a0e2; //DroidMaintenanceSession.maintenance
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<unsigned long long, int> >::toBinaryStream(&maintenance, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x16f4ef53; //DroidMaintenanceSession.fees
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&fees, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x8199ad3e; //DroidMaintenanceSession.selectedStructure
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<StructureObject* > >::toBinaryStream(&selectedStructure, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x7bcaab63; //DroidMaintenanceSession.selectedFees
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&selectedFees, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xeec82ece; //DroidMaintenanceSession.availableCredits
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<long long >::toBinaryStream(&availableCredits, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

DroidMaintenanceSessionImplementation::DroidMaintenanceSessionImplementation(DroidMaintenanceModuleDataComponent* module, CreatureObject* creature) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/DroidMaintenanceSession.idl():  		maintModule = module;
	maintModule = module;
	// server/zone/objects/player/sessions/DroidMaintenanceSession.idl():  		player = creature;
	player = creature;
	// server/zone/objects/player/sessions/DroidMaintenanceSession.idl():  		selectedStructure = null;
	selectedStructure = NULL;
}

void DroidMaintenanceSessionImplementation::setSelectedStructure(StructureObject* structure) {
	// server/zone/objects/player/sessions/DroidMaintenanceSession.idl():  		selectedStructure = structure;
	selectedStructure = structure;
}

long long DroidMaintenanceSessionImplementation::getAvailableCredits() {
	// server/zone/objects/player/sessions/DroidMaintenanceSession.idl():  		return availableCredits;
	return availableCredits;
}

/*
 *	DroidMaintenanceSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DroidMaintenanceSessionAdapter::DroidMaintenanceSessionAdapter(DroidMaintenanceSession* obj) : FacadeAdapter(obj) {
}

void DroidMaintenanceSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZE__:
		{
			
			initialize();
			
		}
		break;
	case RPC_SENDMAINTANCERUNBOX__:
		{
			
			sendMaintanceRunBox();
			
		}
		break;
	case RPC_SETSELECTEDSTRUCTURE__STRUCTUREOBJECT_:
		{
			StructureObject* structure = static_cast<StructureObject*>(inv->getObjectParameter());
			
			setSelectedStructure(structure);
			
		}
		break;
	case RPC_SENDMAINTENANCETRANSFERBOX__:
		{
			
			sendMaintenanceTransferBox();
			
		}
		break;
	case RPC_PERFORMMAINTENANCERUN__:
		{
			
			performMaintenanceRun();
			
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETAVAILABLECREDITS__:
		{
			
			long long _m_res = getAvailableCredits();
			resp->insertSignedLong(_m_res);
		}
		break;
	case RPC_ADDCREDITSTOCURRENTSTRUCTURE__INT_:
		{
			int amount = inv->getSignedIntParameter();
			
			addCreditsToCurrentStructure(amount);
			
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

void DroidMaintenanceSessionAdapter::initialize() {
	(static_cast<DroidMaintenanceSession*>(stub))->initialize();
}

void DroidMaintenanceSessionAdapter::sendMaintanceRunBox() {
	(static_cast<DroidMaintenanceSession*>(stub))->sendMaintanceRunBox();
}

void DroidMaintenanceSessionAdapter::setSelectedStructure(StructureObject* structure) {
	(static_cast<DroidMaintenanceSession*>(stub))->setSelectedStructure(structure);
}

void DroidMaintenanceSessionAdapter::sendMaintenanceTransferBox() {
	(static_cast<DroidMaintenanceSession*>(stub))->sendMaintenanceTransferBox();
}

void DroidMaintenanceSessionAdapter::performMaintenanceRun() {
	(static_cast<DroidMaintenanceSession*>(stub))->performMaintenanceRun();
}

int DroidMaintenanceSessionAdapter::cancelSession() {
	return (static_cast<DroidMaintenanceSession*>(stub))->cancelSession();
}

long long DroidMaintenanceSessionAdapter::getAvailableCredits() {
	return (static_cast<DroidMaintenanceSession*>(stub))->getAvailableCredits();
}

void DroidMaintenanceSessionAdapter::addCreditsToCurrentStructure(int amount) {
	(static_cast<DroidMaintenanceSession*>(stub))->addCreditsToCurrentStructure(amount);
}

/*
 *	DroidMaintenanceSessionHelper
 */

DroidMaintenanceSessionHelper* DroidMaintenanceSessionHelper::staticInitializer = DroidMaintenanceSessionHelper::instance();

DroidMaintenanceSessionHelper::DroidMaintenanceSessionHelper() {
	className = "DroidMaintenanceSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void DroidMaintenanceSessionHelper::finalizeHelper() {
	DroidMaintenanceSessionHelper::finalize();
}

DistributedObject* DroidMaintenanceSessionHelper::instantiateObject() {
	return new DroidMaintenanceSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* DroidMaintenanceSessionHelper::instantiateServant() {
	return new DroidMaintenanceSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* DroidMaintenanceSessionHelper::instantiatePOD() {
	return new DroidMaintenanceSessionPOD();
}

DistributedObjectAdapter* DroidMaintenanceSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DroidMaintenanceSessionAdapter(static_cast<DroidMaintenanceSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DroidMaintenanceSessionPOD
 */

DroidMaintenanceSessionPOD::~DroidMaintenanceSessionPOD() {
}

DroidMaintenanceSessionPOD::DroidMaintenanceSessionPOD(void) {
	_className = "DroidMaintenanceSession";
}


void DroidMaintenanceSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DroidMaintenanceSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DroidMaintenanceSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (maintModule) {
	_nameHashCode = 0x9f32972d; //DroidMaintenanceSession.maintModule
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<WeakReference<DroidMaintenanceModuleDataComponent* > >::toBinaryStream(&maintModule.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (player) {
	_nameHashCode = 0xf51a5ceb; //DroidMaintenanceSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (structures) {
	_nameHashCode = 0x46a6b1e3; //DroidMaintenanceSession.structures
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<ManagedReference<StructureObjectPOD* > > >::toBinaryStream(&structures.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (maintenance) {
	_nameHashCode = 0x6b04a0e2; //DroidMaintenanceSession.maintenance
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<unsigned long long, int> >::toBinaryStream(&maintenance.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (fees) {
	_nameHashCode = 0x16f4ef53; //DroidMaintenanceSession.fees
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&fees.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (selectedStructure) {
	_nameHashCode = 0x8199ad3e; //DroidMaintenanceSession.selectedStructure
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<StructureObjectPOD* > >::toBinaryStream(&selectedStructure.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (selectedFees) {
	_nameHashCode = 0x7bcaab63; //DroidMaintenanceSession.selectedFees
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&selectedFees.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (availableCredits) {
	_nameHashCode = 0xeec82ece; //DroidMaintenanceSession.availableCredits
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<long long >::toBinaryStream(&availableCredits.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool DroidMaintenanceSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x9f32972d: //DroidMaintenanceSession.maintModule
		{
			WeakReference<DroidMaintenanceModuleDataComponent* > _mnmaintModule;
			TypeInfo<WeakReference<DroidMaintenanceModuleDataComponent* > >::parseFromBinaryStream(&_mnmaintModule, stream);
			maintModule = std::move(_mnmaintModule);
		}
		return true;

	case 0xf51a5ceb: //DroidMaintenanceSession.player
		{
			ManagedWeakReference<CreatureObjectPOD* > _mnplayer;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnplayer, stream);
			player = std::move(_mnplayer);
		}
		return true;

	case 0x46a6b1e3: //DroidMaintenanceSession.structures
		{
			Vector<ManagedReference<StructureObjectPOD* > > _mnstructures;
			TypeInfo<Vector<ManagedReference<StructureObjectPOD* > > >::parseFromBinaryStream(&_mnstructures, stream);
			structures = std::move(_mnstructures);
		}
		return true;

	case 0x6b04a0e2: //DroidMaintenanceSession.maintenance
		{
			VectorMap<unsigned long long, int> _mnmaintenance;
			TypeInfo<VectorMap<unsigned long long, int> >::parseFromBinaryStream(&_mnmaintenance, stream);
			maintenance = std::move(_mnmaintenance);
		}
		return true;

	case 0x16f4ef53: //DroidMaintenanceSession.fees
		{
			Vector<int> _mnfees;
			TypeInfo<Vector<int> >::parseFromBinaryStream(&_mnfees, stream);
			fees = std::move(_mnfees);
		}
		return true;

	case 0x8199ad3e: //DroidMaintenanceSession.selectedStructure
		{
			ManagedReference<StructureObjectPOD* > _mnselectedStructure;
			TypeInfo<ManagedReference<StructureObjectPOD* > >::parseFromBinaryStream(&_mnselectedStructure, stream);
			selectedStructure = std::move(_mnselectedStructure);
		}
		return true;

	case 0x7bcaab63: //DroidMaintenanceSession.selectedFees
		{
			int _mnselectedFees;
			TypeInfo<int >::parseFromBinaryStream(&_mnselectedFees, stream);
			selectedFees = std::move(_mnselectedFees);
		}
		return true;

	case 0xeec82ece: //DroidMaintenanceSession.availableCredits
		{
			long long _mnavailableCredits;
			TypeInfo<long long >::parseFromBinaryStream(&_mnavailableCredits, stream);
			availableCredits = std::move(_mnavailableCredits);
		}
		return true;

	}

	return false;
}

void DroidMaintenanceSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DroidMaintenanceSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void DroidMaintenanceSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<WeakReference<DroidMaintenanceModuleDataComponent* > >::toBinaryStream(&maintModule.value(), stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&player.value(), stream);

	TypeInfo<Vector<ManagedReference<StructureObjectPOD* > > >::toBinaryStream(&structures.value(), stream);

	TypeInfo<VectorMap<unsigned long long, int> >::toBinaryStream(&maintenance.value(), stream);

	TypeInfo<Vector<int> >::toBinaryStream(&fees.value(), stream);

	TypeInfo<ManagedReference<StructureObjectPOD* > >::toBinaryStream(&selectedStructure.value(), stream);

	TypeInfo<int >::toBinaryStream(&selectedFees.value(), stream);

	TypeInfo<long long >::toBinaryStream(&availableCredits.value(), stream);


}

