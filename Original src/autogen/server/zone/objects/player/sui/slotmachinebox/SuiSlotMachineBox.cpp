/*
 *	autogen/server/zone/objects/player/sui/slotmachinebox/SuiSlotMachineBox.cpp generated by engine3 IDL compiler 0.70
 */

#include "SuiSlotMachineBox.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiSlotMachineBoxStub
 */

enum {RPC_GETPAYOUTBOXID__ = 413154677};

SuiSlotMachineBox::SuiSlotMachineBox(CreatureObject* player, unsigned int windowType, unsigned int payoutBox, unsigned int listBoxType) : SuiListBox(DummyConstructorParameter::instance()) {
	SuiSlotMachineBoxImplementation* _implementation = new SuiSlotMachineBoxImplementation(player, windowType, payoutBox, listBoxType);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiSlotMachineBox");
}

SuiSlotMachineBox::SuiSlotMachineBox(DummyConstructorParameter* param) : SuiListBox(param) {
	_setClassName("SuiSlotMachineBox");
}

SuiSlotMachineBox::~SuiSlotMachineBox() {
}



unsigned int SuiSlotMachineBox::getPayoutBoxID() {
	SuiSlotMachineBoxImplementation* _implementation = static_cast<SuiSlotMachineBoxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPAYOUTBOXID__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getPayoutBoxID();
	}
}

DistributedObjectServant* SuiSlotMachineBox::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SuiSlotMachineBox::_getImplementationForRead() const {
	return _impl;
}

void SuiSlotMachineBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiSlotMachineBoxImplementation
 */

SuiSlotMachineBoxImplementation::SuiSlotMachineBoxImplementation(DummyConstructorParameter* param) : SuiListBoxImplementation(param) {
	_initializeImplementation();
}


SuiSlotMachineBoxImplementation::~SuiSlotMachineBoxImplementation() {
}


void SuiSlotMachineBoxImplementation::finalize() {
}

void SuiSlotMachineBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiSlotMachineBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiSlotMachineBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiSlotMachineBox*>(stub);
	SuiListBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiSlotMachineBoxImplementation::_getStub() {
	return _this.get();
}

SuiSlotMachineBoxImplementation::operator const SuiSlotMachineBox*() {
	return _this.get();
}

void SuiSlotMachineBoxImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SuiSlotMachineBoxImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SuiSlotMachineBoxImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SuiSlotMachineBoxImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SuiSlotMachineBoxImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SuiSlotMachineBoxImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SuiSlotMachineBoxImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SuiSlotMachineBoxImplementation::_serializationHelperMethod() {
	SuiListBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiSlotMachineBox");

}

void SuiSlotMachineBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiSlotMachineBoxImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiSlotMachineBoxImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SuiListBoxImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xb660d76c: //SuiSlotMachineBox.payoutBoxID
		TypeInfo<unsigned int >::parseFromBinaryStream(&payoutBoxID, stream);
		return true;

	}

	return false;
}

void SuiSlotMachineBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiSlotMachineBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiSlotMachineBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiListBoxImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xb660d76c; //SuiSlotMachineBox.payoutBoxID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&payoutBoxID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

SuiSlotMachineBoxImplementation::SuiSlotMachineBoxImplementation(CreatureObject* player, unsigned int windowType, unsigned int payoutBox, unsigned int listBoxType) : SuiListBoxImplementation(player, windowType, listBoxType) {
	_initializeImplementation();
	// server/zone/objects/player/sui/slotmachinebox/SuiSlotMachineBox.idl():  		payoutBoxID = payoutBox;
	payoutBoxID = payoutBox;
}

unsigned int SuiSlotMachineBoxImplementation::getPayoutBoxID() {
	// server/zone/objects/player/sui/slotmachinebox/SuiSlotMachineBox.idl():  		return payoutBoxID;
	return payoutBoxID;
}

/*
 *	SuiSlotMachineBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiSlotMachineBoxAdapter::SuiSlotMachineBoxAdapter(SuiSlotMachineBox* obj) : SuiListBoxAdapter(obj) {
}

void SuiSlotMachineBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETPAYOUTBOXID__:
		{
			
			unsigned int _m_res = getPayoutBoxID();
			resp->insertInt(_m_res);
		}
		break;
	default:
		SuiListBoxAdapter::invokeMethod(methid, inv);
	}
}

unsigned int SuiSlotMachineBoxAdapter::getPayoutBoxID() {
	return (static_cast<SuiSlotMachineBox*>(stub))->getPayoutBoxID();
}

/*
 *	SuiSlotMachineBoxHelper
 */

SuiSlotMachineBoxHelper* SuiSlotMachineBoxHelper::staticInitializer = SuiSlotMachineBoxHelper::instance();

SuiSlotMachineBoxHelper::SuiSlotMachineBoxHelper() {
	className = "SuiSlotMachineBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiSlotMachineBoxHelper::finalizeHelper() {
	SuiSlotMachineBoxHelper::finalize();
}

DistributedObject* SuiSlotMachineBoxHelper::instantiateObject() {
	return new SuiSlotMachineBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiSlotMachineBoxHelper::instantiateServant() {
	return new SuiSlotMachineBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* SuiSlotMachineBoxHelper::instantiatePOD() {
	return new SuiSlotMachineBoxPOD();
}

DistributedObjectAdapter* SuiSlotMachineBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiSlotMachineBoxAdapter(static_cast<SuiSlotMachineBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	SuiSlotMachineBoxPOD
 */

SuiSlotMachineBoxPOD::~SuiSlotMachineBoxPOD() {
	finalize();
}

SuiSlotMachineBoxPOD::SuiSlotMachineBoxPOD(void) {
	_className = "SuiSlotMachineBox";
}


void SuiSlotMachineBoxPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiSlotMachineBoxPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiSlotMachineBoxPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiListBoxPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (payoutBoxID) {
	_nameHashCode = 0xb660d76c; //SuiSlotMachineBox.payoutBoxID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&payoutBoxID.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool SuiSlotMachineBoxPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SuiListBoxPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xb660d76c: //SuiSlotMachineBox.payoutBoxID
		{
			unsigned int _mnpayoutBoxID;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mnpayoutBoxID, stream);
			payoutBoxID = std::move(_mnpayoutBoxID);
		}
		return true;

	}

	return false;
}

void SuiSlotMachineBoxPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiSlotMachineBoxPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void SuiSlotMachineBoxPOD::writeObjectCompact(ObjectOutputStream* stream) {
	SuiListBoxPOD::writeObjectCompact(stream);

	TypeInfo<unsigned int >::toBinaryStream(&payoutBoxID.value(), stream);


}
