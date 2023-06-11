/*
 *	autogen/server/zone/objects/creature/conversation/LuaConversationObserver.cpp generated by engine3 IDL compiler 0.70
 */

#include "LuaConversationObserver.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	LuaConversationObserverStub
 */

LuaConversationObserver::LuaConversationObserver(unsigned int convoTemplateCRC) : ConversationObserver(DummyConstructorParameter::instance()) {
	LuaConversationObserverImplementation* _implementation = new LuaConversationObserverImplementation(convoTemplateCRC);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("LuaConversationObserver");
}

LuaConversationObserver::LuaConversationObserver(DummyConstructorParameter* param) : ConversationObserver(param) {
	_setClassName("LuaConversationObserver");
}

LuaConversationObserver::~LuaConversationObserver() {
}



ConversationScreen* LuaConversationObserver::getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC) {
	LuaConversationObserverImplementation* _implementation = static_cast<LuaConversationObserverImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getNextConversationScreen(conversingPlayer, selectedOption, conversingNPC);
	}
}

ConversationScreen* LuaConversationObserver::runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen) {
	LuaConversationObserverImplementation* _implementation = static_cast<LuaConversationObserverImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->runScreenHandlers(conversingPlayer, conversingNPC, selectedOption, conversationScreen);
	}
}

DistributedObjectServant* LuaConversationObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* LuaConversationObserver::_getImplementationForRead() const {
	return _impl;
}

void LuaConversationObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LuaConversationObserverImplementation
 */

LuaConversationObserverImplementation::LuaConversationObserverImplementation(DummyConstructorParameter* param) : ConversationObserverImplementation(param) {
	_initializeImplementation();
}


LuaConversationObserverImplementation::~LuaConversationObserverImplementation() {
}


void LuaConversationObserverImplementation::finalize() {
}

void LuaConversationObserverImplementation::_initializeImplementation() {
	_setClassHelper(LuaConversationObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LuaConversationObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LuaConversationObserver*>(stub);
	ConversationObserverImplementation::_setStub(stub);
}

DistributedObjectStub* LuaConversationObserverImplementation::_getStub() {
	return _this.get();
}

LuaConversationObserverImplementation::operator const LuaConversationObserver*() {
	return _this.get();
}

void LuaConversationObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void LuaConversationObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void LuaConversationObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void LuaConversationObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void LuaConversationObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void LuaConversationObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void LuaConversationObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void LuaConversationObserverImplementation::_serializationHelperMethod() {
	ConversationObserverImplementation::_serializationHelperMethod();

	_setClassName("LuaConversationObserver");

}

void LuaConversationObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LuaConversationObserverImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LuaConversationObserverImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ConversationObserverImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void LuaConversationObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LuaConversationObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LuaConversationObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ConversationObserverImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

LuaConversationObserverImplementation::LuaConversationObserverImplementation(unsigned int convoTemplateCRC) : ConversationObserverImplementation(convoTemplateCRC) {
	_initializeImplementation();
}

ConversationScreen* LuaConversationObserverImplementation::getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC) {
	// server/zone/objects/creature/conversation/LuaConversationObserver.idl():  		ConversationTemplate conversationTemplate = getConversationTemplate();
	ConversationTemplate* conversationTemplate = getConversationTemplate();
	// server/zone/objects/creature/conversation/LuaConversationObserver.idl():  		return DirectorManager.instance().getNextConversationScreen(conversationTemplate.getLuaClassHandler(), conversationTemplate, conversingPlayer, selectedOption, conversingNPC);
	return DirectorManager::instance()->getNextConversationScreen(conversationTemplate->getLuaClassHandler(), conversationTemplate, conversingPlayer, selectedOption, conversingNPC);
}

ConversationScreen* LuaConversationObserverImplementation::runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen) {
	// server/zone/objects/creature/conversation/LuaConversationObserver.idl():  		ConversationTemplate conversationTemplate = getConversationTemplate();
	ConversationTemplate* conversationTemplate = getConversationTemplate();
	// server/zone/objects/creature/conversation/LuaConversationObserver.idl():  		return DirectorManager.instance().runScreenHandlers(conversationTemplate.getLuaClassHandler(),conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen);
	return DirectorManager::instance()->runScreenHandlers(conversationTemplate->getLuaClassHandler(), conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen);
}

/*
 *	LuaConversationObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


LuaConversationObserverAdapter::LuaConversationObserverAdapter(LuaConversationObserver* obj) : ConversationObserverAdapter(obj) {
}

void LuaConversationObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	default:
		ConversationObserverAdapter::invokeMethod(methid, inv);
	}
}

/*
 *	LuaConversationObserverHelper
 */

LuaConversationObserverHelper* LuaConversationObserverHelper::staticInitializer = LuaConversationObserverHelper::instance();

LuaConversationObserverHelper::LuaConversationObserverHelper() {
	className = "LuaConversationObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void LuaConversationObserverHelper::finalizeHelper() {
	LuaConversationObserverHelper::finalize();
}

DistributedObject* LuaConversationObserverHelper::instantiateObject() {
	return new LuaConversationObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* LuaConversationObserverHelper::instantiateServant() {
	return new LuaConversationObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* LuaConversationObserverHelper::instantiatePOD() {
	return new LuaConversationObserverPOD();
}

DistributedObjectAdapter* LuaConversationObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LuaConversationObserverAdapter(static_cast<LuaConversationObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	LuaConversationObserverPOD
 */

LuaConversationObserverPOD::~LuaConversationObserverPOD() {
}

LuaConversationObserverPOD::LuaConversationObserverPOD(void) {
	_className = "LuaConversationObserver";
}


void LuaConversationObserverPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LuaConversationObserverPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LuaConversationObserverPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ConversationObserverPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool LuaConversationObserverPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ConversationObserverPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void LuaConversationObserverPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LuaConversationObserverPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void LuaConversationObserverPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ConversationObserverPOD::writeObjectCompact(stream);


}

