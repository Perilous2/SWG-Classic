/*
 *	autogen/server/zone/objects/player/sui/transferbox/SuiTransferBox.cpp generated by engine3 IDL compiler 0.70
 */

#include "SuiTransferBox.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiTransferBoxStub
 */

enum {RPC_ADDFROM__STRING_STRING_STRING_STRING_,RPC_ADDTO__STRING_STRING_STRING_STRING_,RPC_ISTRANSFERBOX__};

SuiTransferBox::SuiTransferBox(CreatureObject* player, unsigned int windowType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiTransferBoxImplementation* _implementation = new SuiTransferBoxImplementation(player, windowType);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiTransferBox");
}

SuiTransferBox::SuiTransferBox(DummyConstructorParameter* param) : SuiBox(param) {
	_setClassName("SuiTransferBox");
}

SuiTransferBox::~SuiTransferBox() {
}



BaseMessage* SuiTransferBox::generateMessage() {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->generateMessage();
	}
}

void SuiTransferBox::addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom) {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDFROM__STRING_STRING_STRING_STRING_);
		method.addAsciiParameter(from);
		method.addAsciiParameter(startingFrom);
		method.addAsciiParameter(inputFrom);
		method.addAsciiParameter(rFrom);

		method.executeWithVoidReturn();
	} else {
		_implementation->addFrom(from, startingFrom, inputFrom, rFrom);
	}
}

void SuiTransferBox::addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo) {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTO__STRING_STRING_STRING_STRING_);
		method.addAsciiParameter(to);
		method.addAsciiParameter(startingTo);
		method.addAsciiParameter(inputTo);
		method.addAsciiParameter(rTo);

		method.executeWithVoidReturn();
	} else {
		_implementation->addTo(to, startingTo, inputTo, rTo);
	}
}

bool SuiTransferBox::isTransferBox() {
	SuiTransferBoxImplementation* _implementation = static_cast<SuiTransferBoxImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTRANSFERBOX__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isTransferBox();
	}
}

DistributedObjectServant* SuiTransferBox::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SuiTransferBox::_getImplementationForRead() const {
	return _impl;
}

void SuiTransferBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiTransferBoxImplementation
 */

SuiTransferBoxImplementation::SuiTransferBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiTransferBoxImplementation::~SuiTransferBoxImplementation() {
}


void SuiTransferBoxImplementation::finalize() {
}

void SuiTransferBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiTransferBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiTransferBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiTransferBox*>(stub);
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiTransferBoxImplementation::_getStub() {
	return _this.get();
}

SuiTransferBoxImplementation::operator const SuiTransferBox*() {
	return _this.get();
}

void SuiTransferBoxImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SuiTransferBoxImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SuiTransferBoxImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SuiTransferBoxImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SuiTransferBoxImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SuiTransferBoxImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SuiTransferBoxImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SuiTransferBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiTransferBox");

}

void SuiTransferBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiTransferBoxImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiTransferBoxImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SuiBoxImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x92e61ad: //SuiTransferBox.lblFrom
		TypeInfo<String >::parseFromBinaryStream(&lblFrom, stream);
		return true;

	case 0x23fe6364: //SuiTransferBox.lblStartingFrom
		TypeInfo<String >::parseFromBinaryStream(&lblStartingFrom, stream);
		return true;

	case 0x6ddfe140: //SuiTransferBox.lblInputFrom
		TypeInfo<String >::parseFromBinaryStream(&lblInputFrom, stream);
		return true;

	case 0xf82d3909: //SuiTransferBox.lblTo
		TypeInfo<String >::parseFromBinaryStream(&lblTo, stream);
		return true;

	case 0x9f2e48b0: //SuiTransferBox.lblStartingTo
		TypeInfo<String >::parseFromBinaryStream(&lblStartingTo, stream);
		return true;

	case 0x750b40a4: //SuiTransferBox.lblInputTo
		TypeInfo<String >::parseFromBinaryStream(&lblInputTo, stream);
		return true;

	case 0x4bf43d03: //SuiTransferBox.convertRatioFrom
		TypeInfo<String >::parseFromBinaryStream(&convertRatioFrom, stream);
		return true;

	case 0xf652ccb6: //SuiTransferBox.convertRatioTo
		TypeInfo<String >::parseFromBinaryStream(&convertRatioTo, stream);
		return true;

	}

	return false;
}

void SuiTransferBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiTransferBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiTransferBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x92e61ad; //SuiTransferBox.lblFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x23fe6364; //SuiTransferBox.lblStartingFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x6ddfe140; //SuiTransferBox.lblInputFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf82d3909; //SuiTransferBox.lblTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x9f2e48b0; //SuiTransferBox.lblStartingTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x750b40a4; //SuiTransferBox.lblInputTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x4bf43d03; //SuiTransferBox.convertRatioFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf652ccb6; //SuiTransferBox.convertRatioTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

SuiTransferBoxImplementation::SuiTransferBoxImplementation(CreatureObject* player, unsigned int windowType) : SuiBoxImplementation(player, windowType, SuiBox::TRANSFERBOX) {
	_initializeImplementation();
}

bool SuiTransferBoxImplementation::isTransferBox() {
	// server/zone/objects/player/sui/transferbox/SuiTransferBox.idl():  		return true;
	return true;
}

/*
 *	SuiTransferBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiTransferBoxAdapter::SuiTransferBoxAdapter(SuiTransferBox* obj) : SuiBoxAdapter(obj) {
}

void SuiTransferBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ADDFROM__STRING_STRING_STRING_STRING_:
		{
			 String from; inv->getAsciiParameter(from);
			 String startingFrom; inv->getAsciiParameter(startingFrom);
			 String inputFrom; inv->getAsciiParameter(inputFrom);
			 String rFrom; inv->getAsciiParameter(rFrom);
			
			addFrom(from, startingFrom, inputFrom, rFrom);
			
		}
		break;
	case RPC_ADDTO__STRING_STRING_STRING_STRING_:
		{
			 String to; inv->getAsciiParameter(to);
			 String startingTo; inv->getAsciiParameter(startingTo);
			 String inputTo; inv->getAsciiParameter(inputTo);
			 String rTo; inv->getAsciiParameter(rTo);
			
			addTo(to, startingTo, inputTo, rTo);
			
		}
		break;
	case RPC_ISTRANSFERBOX__:
		{
			
			bool _m_res = isTransferBox();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		SuiBoxAdapter::invokeMethod(methid, inv);
	}
}

void SuiTransferBoxAdapter::addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom) {
	(static_cast<SuiTransferBox*>(stub))->addFrom(from, startingFrom, inputFrom, rFrom);
}

void SuiTransferBoxAdapter::addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo) {
	(static_cast<SuiTransferBox*>(stub))->addTo(to, startingTo, inputTo, rTo);
}

bool SuiTransferBoxAdapter::isTransferBox() {
	return (static_cast<SuiTransferBox*>(stub))->isTransferBox();
}

/*
 *	SuiTransferBoxHelper
 */

SuiTransferBoxHelper* SuiTransferBoxHelper::staticInitializer = SuiTransferBoxHelper::instance();

SuiTransferBoxHelper::SuiTransferBoxHelper() {
	className = "SuiTransferBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiTransferBoxHelper::finalizeHelper() {
	SuiTransferBoxHelper::finalize();
}

DistributedObject* SuiTransferBoxHelper::instantiateObject() {
	return new SuiTransferBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiTransferBoxHelper::instantiateServant() {
	return new SuiTransferBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* SuiTransferBoxHelper::instantiatePOD() {
	return new SuiTransferBoxPOD();
}

DistributedObjectAdapter* SuiTransferBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiTransferBoxAdapter(static_cast<SuiTransferBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	SuiTransferBoxPOD
 */

SuiTransferBoxPOD::~SuiTransferBoxPOD() {
	finalize();
}

SuiTransferBoxPOD::SuiTransferBoxPOD(void) {
	_className = "SuiTransferBox";
}


void SuiTransferBoxPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiTransferBoxPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiTransferBoxPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (lblFrom) {
	_nameHashCode = 0x92e61ad; //SuiTransferBox.lblFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblFrom.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (lblStartingFrom) {
	_nameHashCode = 0x23fe6364; //SuiTransferBox.lblStartingFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingFrom.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (lblInputFrom) {
	_nameHashCode = 0x6ddfe140; //SuiTransferBox.lblInputFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputFrom.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (lblTo) {
	_nameHashCode = 0xf82d3909; //SuiTransferBox.lblTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblTo.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (lblStartingTo) {
	_nameHashCode = 0x9f2e48b0; //SuiTransferBox.lblStartingTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingTo.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (lblInputTo) {
	_nameHashCode = 0x750b40a4; //SuiTransferBox.lblInputTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputTo.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (convertRatioFrom) {
	_nameHashCode = 0x4bf43d03; //SuiTransferBox.convertRatioFrom
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioFrom.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (convertRatioTo) {
	_nameHashCode = 0xf652ccb6; //SuiTransferBox.convertRatioTo
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioTo.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool SuiTransferBoxPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SuiBoxPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x92e61ad: //SuiTransferBox.lblFrom
		{
			String _mnlblFrom;
			TypeInfo<String >::parseFromBinaryStream(&_mnlblFrom, stream);
			lblFrom = std::move(_mnlblFrom);
		}
		return true;

	case 0x23fe6364: //SuiTransferBox.lblStartingFrom
		{
			String _mnlblStartingFrom;
			TypeInfo<String >::parseFromBinaryStream(&_mnlblStartingFrom, stream);
			lblStartingFrom = std::move(_mnlblStartingFrom);
		}
		return true;

	case 0x6ddfe140: //SuiTransferBox.lblInputFrom
		{
			String _mnlblInputFrom;
			TypeInfo<String >::parseFromBinaryStream(&_mnlblInputFrom, stream);
			lblInputFrom = std::move(_mnlblInputFrom);
		}
		return true;

	case 0xf82d3909: //SuiTransferBox.lblTo
		{
			String _mnlblTo;
			TypeInfo<String >::parseFromBinaryStream(&_mnlblTo, stream);
			lblTo = std::move(_mnlblTo);
		}
		return true;

	case 0x9f2e48b0: //SuiTransferBox.lblStartingTo
		{
			String _mnlblStartingTo;
			TypeInfo<String >::parseFromBinaryStream(&_mnlblStartingTo, stream);
			lblStartingTo = std::move(_mnlblStartingTo);
		}
		return true;

	case 0x750b40a4: //SuiTransferBox.lblInputTo
		{
			String _mnlblInputTo;
			TypeInfo<String >::parseFromBinaryStream(&_mnlblInputTo, stream);
			lblInputTo = std::move(_mnlblInputTo);
		}
		return true;

	case 0x4bf43d03: //SuiTransferBox.convertRatioFrom
		{
			String _mnconvertRatioFrom;
			TypeInfo<String >::parseFromBinaryStream(&_mnconvertRatioFrom, stream);
			convertRatioFrom = std::move(_mnconvertRatioFrom);
		}
		return true;

	case 0xf652ccb6: //SuiTransferBox.convertRatioTo
		{
			String _mnconvertRatioTo;
			TypeInfo<String >::parseFromBinaryStream(&_mnconvertRatioTo, stream);
			convertRatioTo = std::move(_mnconvertRatioTo);
		}
		return true;

	}

	return false;
}

void SuiTransferBoxPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiTransferBoxPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void SuiTransferBoxPOD::writeObjectCompact(ObjectOutputStream* stream) {
	SuiBoxPOD::writeObjectCompact(stream);

	TypeInfo<String >::toBinaryStream(&lblFrom.value(), stream);

	TypeInfo<String >::toBinaryStream(&lblStartingFrom.value(), stream);

	TypeInfo<String >::toBinaryStream(&lblInputFrom.value(), stream);

	TypeInfo<String >::toBinaryStream(&lblTo.value(), stream);

	TypeInfo<String >::toBinaryStream(&lblStartingTo.value(), stream);

	TypeInfo<String >::toBinaryStream(&lblInputTo.value(), stream);

	TypeInfo<String >::toBinaryStream(&convertRatioFrom.value(), stream);

	TypeInfo<String >::toBinaryStream(&convertRatioTo.value(), stream);


}

