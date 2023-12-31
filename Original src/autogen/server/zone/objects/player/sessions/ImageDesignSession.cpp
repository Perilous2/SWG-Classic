/*
 *	autogen/server/zone/objects/player/sessions/ImageDesignSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "ImageDesignSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/events/ImageDesignTimeoutEvent.h"

#include "server/zone/objects/player/sessions/ImageDesignPositionObserver.h"

/*
 *	ImageDesignSessionStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 3839124790,RPC_INITIALIZESESSION__,RPC_DOPAYMENT__,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_CLEARIDTIMEOUTEVENT__,RPC_CHECKDEQUEUEEVENT__SCENEOBJECT_,RPC_QUEUEIDTIMEOUTEVENT__,RPC_DEQUEUEIDTIMEOUTEVENT__,RPC_SESSIONTIMEOUT__};

ImageDesignSession::ImageDesignSession(CreatureObject* parent) : Facade(DummyConstructorParameter::instance()) {
	ImageDesignSessionImplementation* _implementation = new ImageDesignSessionImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ImageDesignSession");
}

ImageDesignSession::ImageDesignSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("ImageDesignSession");
}

ImageDesignSession::~ImageDesignSession() {
}



void ImageDesignSession::initializeTransientMembers() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void ImageDesignSession::startImageDesign(CreatureObject* designer, CreatureObject* targetPlayer) {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->startImageDesign(designer, targetPlayer);
	}
}

void ImageDesignSession::updateImageDesign(CreatureObject* updater, unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type, const ImageDesignData& data) {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateImageDesign(updater, designer, targetPlayer, tent, type, data);
	}
}

void ImageDesignSession::cancelImageDesign(unsigned long long designer, unsigned long long targetPlayer, unsigned long long tent, int type, const ImageDesignData& data) {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->cancelImageDesign(designer, targetPlayer, tent, type, data);
	}
}

int ImageDesignSession::initializeSession() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int ImageDesignSession::doPayment() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOPAYMENT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->doPayment();
	}
}

int ImageDesignSession::cancelSession() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int ImageDesignSession::clearSession() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

void ImageDesignSession::clearIdTimeoutEvent() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARIDTIMEOUTEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->clearIdTimeoutEvent();
	}
}

void ImageDesignSession::checkDequeueEvent(SceneObject* scene) {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKDEQUEUEEVENT__SCENEOBJECT_);
		method.addObjectParameter(scene);

		method.executeWithVoidReturn();
	} else {
		_implementation->checkDequeueEvent(scene);
	}
}

void ImageDesignSession::queueIdTimeoutEvent() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_QUEUEIDTIMEOUTEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->queueIdTimeoutEvent();
	}
}

void ImageDesignSession::dequeueIdTimeoutEvent() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEQUEUEIDTIMEOUTEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->dequeueIdTimeoutEvent();
	}
}

void ImageDesignSession::sessionTimeout() {
	ImageDesignSessionImplementation* _implementation = static_cast<ImageDesignSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SESSIONTIMEOUT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->sessionTimeout();
	}
}

DistributedObjectServant* ImageDesignSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* ImageDesignSession::_getImplementationForRead() const {
	return _impl;
}

void ImageDesignSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ImageDesignSessionImplementation
 */

ImageDesignSessionImplementation::ImageDesignSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


ImageDesignSessionImplementation::~ImageDesignSessionImplementation() {
}


void ImageDesignSessionImplementation::finalize() {
}

void ImageDesignSessionImplementation::_initializeImplementation() {
	_setClassHelper(ImageDesignSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ImageDesignSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ImageDesignSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* ImageDesignSessionImplementation::_getStub() {
	return _this.get();
}

ImageDesignSessionImplementation::operator const ImageDesignSession*() {
	return _this.get();
}

void ImageDesignSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void ImageDesignSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void ImageDesignSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void ImageDesignSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void ImageDesignSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void ImageDesignSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void ImageDesignSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void ImageDesignSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("ImageDesignSession");

}

void ImageDesignSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ImageDesignSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ImageDesignSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xd24d077b: //ImageDesignSession.designerCreature
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&designerCreature, stream);
		return true;

	case 0x7149a0ad: //ImageDesignSession.targetCreature
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&targetCreature, stream);
		return true;

	case 0xc6d9476a: //ImageDesignSession.imageDesignData
		TypeInfo<ImageDesignData >::parseFromBinaryStream(&imageDesignData, stream);
		return true;

	case 0x28792d48: //ImageDesignSession.hairObject
		TypeInfo<ManagedReference<TangibleObject* > >::parseFromBinaryStream(&hairObject, stream);
		return true;

	case 0x22697116: //ImageDesignSession.positionObserver
		TypeInfo<ManagedReference<ImageDesignPositionObserver* > >::parseFromBinaryStream(&positionObserver, stream);
		return true;

	}

	return false;
}

void ImageDesignSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ImageDesignSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ImageDesignSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xd24d077b; //ImageDesignSession.designerCreature
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&designerCreature, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x7149a0ad; //ImageDesignSession.targetCreature
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&targetCreature, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc6d9476a; //ImageDesignSession.imageDesignData
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ImageDesignData >::toBinaryStream(&imageDesignData, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x28792d48; //ImageDesignSession.hairObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<TangibleObject* > >::toBinaryStream(&hairObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x22697116; //ImageDesignSession.positionObserver
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ImageDesignPositionObserver* > >::toBinaryStream(&positionObserver, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

ImageDesignSessionImplementation::ImageDesignSessionImplementation(CreatureObject* parent) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		Logger.setLoggingName("ImageDesignSession");
	Logger::setLoggingName("ImageDesignSession");
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		initializeSession();
	initializeSession();
}

int ImageDesignSessionImplementation::initializeSession() {
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		designerCreature = null;
	designerCreature = NULL;
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		targetCreature = null;
	targetCreature = NULL;
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		idTimeoutEvent = null;
	idTimeoutEvent = NULL;
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		positionObserver = null;
	positionObserver = NULL;
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		return 0;
	return 0;
}

int ImageDesignSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		return 0;
	return 0;
}

void ImageDesignSessionImplementation::clearIdTimeoutEvent() {
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		}
{
	Locker _locker((&idTimeoutLock));
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  			idTimeoutEvent = null;
	idTimeoutEvent = NULL;
}
}

void ImageDesignSessionImplementation::queueIdTimeoutEvent() {
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		}
{
	Locker _locker((&idTimeoutLock));
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  			if 
	if (!idTimeoutEvent){
	Reference<ImageDesignTimeoutEvent*> _ref0;
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  				ImageDesignTimeoutEvent ev = new ImageDesignTimeoutEvent(this);
	ImageDesignTimeoutEvent* ev = _ref0 = new ImageDesignTimeoutEvent(_this.getReferenceUnsafeStaticCast());
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  				idTimeoutEvent = ev;
	idTimeoutEvent = ev;
}
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		}
	if (!idTimeoutEvent->isScheduled())	// server/zone/objects/player/sessions/ImageDesignSession.idl():  				idTimeoutEvent.schedule(30000);
	idTimeoutEvent->schedule(30000);
}
}

void ImageDesignSessionImplementation::dequeueIdTimeoutEvent() {
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		}
{
	Locker _locker((&idTimeoutLock));
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  		}
	if (idTimeoutEvent){
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  				idTimeoutEvent 
	if (idTimeoutEvent->isScheduled())	// server/zone/objects/player/sessions/ImageDesignSession.idl():  					idTimeoutEvent.cancel();
	idTimeoutEvent->cancel();
	// server/zone/objects/player/sessions/ImageDesignSession.idl():  				idTimeoutEvent = null;
	idTimeoutEvent = NULL;
}
}
}

/*
 *	ImageDesignSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ImageDesignSessionAdapter::ImageDesignSessionAdapter(ImageDesignSession* obj) : FacadeAdapter(obj) {
}

void ImageDesignSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_INITIALIZESESSION__:
		{
			
			int _m_res = initializeSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_DOPAYMENT__:
		{
			
			int _m_res = doPayment();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CLEARSESSION__:
		{
			
			int _m_res = clearSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CLEARIDTIMEOUTEVENT__:
		{
			
			clearIdTimeoutEvent();
			
		}
		break;
	case RPC_CHECKDEQUEUEEVENT__SCENEOBJECT_:
		{
			SceneObject* scene = static_cast<SceneObject*>(inv->getObjectParameter());
			
			checkDequeueEvent(scene);
			
		}
		break;
	case RPC_QUEUEIDTIMEOUTEVENT__:
		{
			
			queueIdTimeoutEvent();
			
		}
		break;
	case RPC_DEQUEUEIDTIMEOUTEVENT__:
		{
			
			dequeueIdTimeoutEvent();
			
		}
		break;
	case RPC_SESSIONTIMEOUT__:
		{
			
			sessionTimeout();
			
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

void ImageDesignSessionAdapter::initializeTransientMembers() {
	(static_cast<ImageDesignSession*>(stub))->initializeTransientMembers();
}

int ImageDesignSessionAdapter::initializeSession() {
	return (static_cast<ImageDesignSession*>(stub))->initializeSession();
}

int ImageDesignSessionAdapter::doPayment() {
	return (static_cast<ImageDesignSession*>(stub))->doPayment();
}

int ImageDesignSessionAdapter::cancelSession() {
	return (static_cast<ImageDesignSession*>(stub))->cancelSession();
}

int ImageDesignSessionAdapter::clearSession() {
	return (static_cast<ImageDesignSession*>(stub))->clearSession();
}

void ImageDesignSessionAdapter::clearIdTimeoutEvent() {
	(static_cast<ImageDesignSession*>(stub))->clearIdTimeoutEvent();
}

void ImageDesignSessionAdapter::checkDequeueEvent(SceneObject* scene) {
	(static_cast<ImageDesignSession*>(stub))->checkDequeueEvent(scene);
}

void ImageDesignSessionAdapter::queueIdTimeoutEvent() {
	(static_cast<ImageDesignSession*>(stub))->queueIdTimeoutEvent();
}

void ImageDesignSessionAdapter::dequeueIdTimeoutEvent() {
	(static_cast<ImageDesignSession*>(stub))->dequeueIdTimeoutEvent();
}

void ImageDesignSessionAdapter::sessionTimeout() {
	(static_cast<ImageDesignSession*>(stub))->sessionTimeout();
}

/*
 *	ImageDesignSessionHelper
 */

ImageDesignSessionHelper* ImageDesignSessionHelper::staticInitializer = ImageDesignSessionHelper::instance();

ImageDesignSessionHelper::ImageDesignSessionHelper() {
	className = "ImageDesignSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void ImageDesignSessionHelper::finalizeHelper() {
	ImageDesignSessionHelper::finalize();
}

DistributedObject* ImageDesignSessionHelper::instantiateObject() {
	return new ImageDesignSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* ImageDesignSessionHelper::instantiateServant() {
	return new ImageDesignSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* ImageDesignSessionHelper::instantiatePOD() {
	return new ImageDesignSessionPOD();
}

DistributedObjectAdapter* ImageDesignSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ImageDesignSessionAdapter(static_cast<ImageDesignSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ImageDesignSessionPOD
 */

ImageDesignSessionPOD::~ImageDesignSessionPOD() {
}

ImageDesignSessionPOD::ImageDesignSessionPOD(void) {
	_className = "ImageDesignSession";
}


void ImageDesignSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ImageDesignSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ImageDesignSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (designerCreature) {
	_nameHashCode = 0xd24d077b; //ImageDesignSession.designerCreature
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&designerCreature.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (targetCreature) {
	_nameHashCode = 0x7149a0ad; //ImageDesignSession.targetCreature
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&targetCreature.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (imageDesignData) {
	_nameHashCode = 0xc6d9476a; //ImageDesignSession.imageDesignData
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ImageDesignData >::toBinaryStream(&imageDesignData.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (hairObject) {
	_nameHashCode = 0x28792d48; //ImageDesignSession.hairObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<TangibleObjectPOD* > >::toBinaryStream(&hairObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (positionObserver) {
	_nameHashCode = 0x22697116; //ImageDesignSession.positionObserver
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ImageDesignPositionObserverPOD* > >::toBinaryStream(&positionObserver.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool ImageDesignSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xd24d077b: //ImageDesignSession.designerCreature
		{
			ManagedWeakReference<CreatureObjectPOD* > _mndesignerCreature;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mndesignerCreature, stream);
			designerCreature = std::move(_mndesignerCreature);
		}
		return true;

	case 0x7149a0ad: //ImageDesignSession.targetCreature
		{
			ManagedWeakReference<CreatureObjectPOD* > _mntargetCreature;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mntargetCreature, stream);
			targetCreature = std::move(_mntargetCreature);
		}
		return true;

	case 0xc6d9476a: //ImageDesignSession.imageDesignData
		{
			ImageDesignData _mnimageDesignData;
			TypeInfo<ImageDesignData >::parseFromBinaryStream(&_mnimageDesignData, stream);
			imageDesignData = std::move(_mnimageDesignData);
		}
		return true;

	case 0x28792d48: //ImageDesignSession.hairObject
		{
			ManagedReference<TangibleObjectPOD* > _mnhairObject;
			TypeInfo<ManagedReference<TangibleObjectPOD* > >::parseFromBinaryStream(&_mnhairObject, stream);
			hairObject = std::move(_mnhairObject);
		}
		return true;

	case 0x22697116: //ImageDesignSession.positionObserver
		{
			ManagedReference<ImageDesignPositionObserverPOD* > _mnpositionObserver;
			TypeInfo<ManagedReference<ImageDesignPositionObserverPOD* > >::parseFromBinaryStream(&_mnpositionObserver, stream);
			positionObserver = std::move(_mnpositionObserver);
		}
		return true;

	}

	return false;
}

void ImageDesignSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ImageDesignSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void ImageDesignSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&designerCreature.value(), stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&targetCreature.value(), stream);

	TypeInfo<ImageDesignData >::toBinaryStream(&imageDesignData.value(), stream);

	TypeInfo<ManagedReference<TangibleObjectPOD* > >::toBinaryStream(&hairObject.value(), stream);

	TypeInfo<ManagedReference<ImageDesignPositionObserverPOD* > >::toBinaryStream(&positionObserver.value(), stream);


}

