/*
 *	autogen/server/zone/objects/player/sessions/ConversationSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "ConversationSession.h"

#include "server/zone/objects/creature/conversation/ConversationScreen.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ConversationSessionStub
 */

enum {RPC_GETNPC__};

ConversationSession::ConversationSession(CreatureObject* conversingCreature) : Facade(DummyConstructorParameter::instance()) {
	ConversationSessionImplementation* _implementation = new ConversationSessionImplementation(conversingCreature);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ConversationSession");
}

ConversationSession::ConversationSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("ConversationSession");
}

ConversationSession::~ConversationSession() {
}



void ConversationSession::setLastConversationScreen(ConversationScreen* screen) {
	ConversationSessionImplementation* _implementation = static_cast<ConversationSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->setLastConversationScreen(screen);
	}
}

ConversationScreen* ConversationSession::getLastConversationScreen() {
	ConversationSessionImplementation* _implementation = static_cast<ConversationSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getLastConversationScreen();
	}
}

ManagedWeakReference<CreatureObject* > ConversationSession::getNPC() {
	ConversationSessionImplementation* _implementation = static_cast<ConversationSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNPC__);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getNPC();
	}
}

DistributedObjectServant* ConversationSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ConversationSession::_getImplementationForRead() const {
	return _impl;
}

void ConversationSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ConversationSessionImplementation
 */

ConversationSessionImplementation::ConversationSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


ConversationSessionImplementation::~ConversationSessionImplementation() {
}


void ConversationSessionImplementation::finalize() {
}

void ConversationSessionImplementation::_initializeImplementation() {
	_setClassHelper(ConversationSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ConversationSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ConversationSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* ConversationSessionImplementation::_getStub() {
	return _this.get();
}

ConversationSessionImplementation::operator const ConversationSession*() {
	return _this.get();
}

void ConversationSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ConversationSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ConversationSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ConversationSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ConversationSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ConversationSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ConversationSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ConversationSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("ConversationSession");

}

void ConversationSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ConversationSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ConversationSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xec59cf82: //ConversationSession.lastConversationScreen
		TypeInfo<Reference<ConversationScreen* > >::parseFromBinaryStream(&lastConversationScreen, stream);
		return true;

	case 0x8bed8028: //ConversationSession.npc
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&npc, stream);
		return true;

	}

	return false;
}

void ConversationSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ConversationSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ConversationSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xec59cf82; //ConversationSession.lastConversationScreen
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<ConversationScreen* > >::toBinaryStream(&lastConversationScreen, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x8bed8028; //ConversationSession.npc
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&npc, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

ConversationSessionImplementation::ConversationSessionImplementation(CreatureObject* conversingCreature) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/ConversationSession.idl():  		lastConversationScreen = null;
	lastConversationScreen = NULL;
	// server/zone/objects/player/sessions/ConversationSession.idl():  		npc = conversingCreature;
	npc = conversingCreature;
}

void ConversationSessionImplementation::setLastConversationScreen(ConversationScreen* screen) {
	// server/zone/objects/player/sessions/ConversationSession.idl():  		lastConversationScreen = screen;
	lastConversationScreen = screen;
}

ConversationScreen* ConversationSessionImplementation::getLastConversationScreen() {
	// server/zone/objects/player/sessions/ConversationSession.idl():  		return lastConversationScreen;
	return lastConversationScreen;
}

ManagedWeakReference<CreatureObject* > ConversationSessionImplementation::getNPC() {
	// server/zone/objects/player/sessions/ConversationSession.idl():  		return npc;
	return npc;
}

/*
 *	ConversationSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ConversationSessionAdapter::ConversationSessionAdapter(ConversationSession* obj) : FacadeAdapter(obj) {
}

void ConversationSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETNPC__:
		{
			
			DistributedObject* _m_res = getNPC().get();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

ManagedWeakReference<CreatureObject* > ConversationSessionAdapter::getNPC() {
	return (static_cast<ConversationSession*>(stub))->getNPC();
}

/*
 *	ConversationSessionHelper
 */

ConversationSessionHelper* ConversationSessionHelper::staticInitializer = ConversationSessionHelper::instance();

ConversationSessionHelper::ConversationSessionHelper() {
	className = "ConversationSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void ConversationSessionHelper::finalizeHelper() {
	ConversationSessionHelper::finalize();
}

DistributedObject* ConversationSessionHelper::instantiateObject() {
	return new ConversationSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* ConversationSessionHelper::instantiateServant() {
	return new ConversationSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* ConversationSessionHelper::instantiatePOD() {
	return new ConversationSessionPOD();
}

DistributedObjectAdapter* ConversationSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ConversationSessionAdapter(static_cast<ConversationSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ConversationSessionPOD
 */

ConversationSessionPOD::~ConversationSessionPOD() {
}

ConversationSessionPOD::ConversationSessionPOD(void) {
	_className = "ConversationSession";
}


void ConversationSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ConversationSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ConversationSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (lastConversationScreen) {
	_nameHashCode = 0xec59cf82; //ConversationSession.lastConversationScreen
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<ConversationScreen* > >::toBinaryStream(&lastConversationScreen.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (npc) {
	_nameHashCode = 0x8bed8028; //ConversationSession.npc
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&npc.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool ConversationSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xec59cf82: //ConversationSession.lastConversationScreen
		{
			Reference<ConversationScreen* > _mnlastConversationScreen;
			TypeInfo<Reference<ConversationScreen* > >::parseFromBinaryStream(&_mnlastConversationScreen, stream);
			lastConversationScreen = std::move(_mnlastConversationScreen);
		}
		return true;

	case 0x8bed8028: //ConversationSession.npc
		{
			ManagedWeakReference<CreatureObjectPOD* > _mnnpc;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mnnpc, stream);
			npc = std::move(_mnnpc);
		}
		return true;

	}

	return false;
}

void ConversationSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ConversationSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ConversationSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<Reference<ConversationScreen* > >::toBinaryStream(&lastConversationScreen.value(), stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&npc.value(), stream);


}

