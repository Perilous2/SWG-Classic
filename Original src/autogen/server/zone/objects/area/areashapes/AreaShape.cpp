/*
 *	autogen/server/zone/objects/area/areashapes/AreaShape.cpp generated by engine3 IDL compiler 0.70
 */

#include "AreaShape.h"

/*
 *	AreaShapeStub
 */

enum {RPC_SETAREACENTER__FLOAT_FLOAT_ = 2391961143,RPC_CONTAINSPOINT__FLOAT_FLOAT_,RPC_GETRADIUS__,RPC_ISCIRCULARAREASHAPE__,RPC_ISRECTANGULARAREASHAPE__,RPC_ISRINGAREASHAPE__,RPC_INTERSECTSWITH__AREASHAPE_,RPC_GETAREA__};

AreaShape::AreaShape() : ManagedObject(DummyConstructorParameter::instance()) {
	AreaShapeImplementation* _implementation = new AreaShapeImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("AreaShape");
}

AreaShape::AreaShape(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("AreaShape");
}

AreaShape::~AreaShape() {
}



void AreaShape::setAreaCenter(float x, float y) {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETAREACENTER__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setAreaCenter(x, y);
	}
}

Vector3 AreaShape::getAreaCenter() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getAreaCenter();
	}
}

bool AreaShape::containsPoint(float x, float y) const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTAINSPOINT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->containsPoint(x, y);
	}
}

bool AreaShape::containsPoint(const Vector3& point) const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->containsPoint(point);
	}
}

float AreaShape::getRadius() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRADIUS__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getRadius();
	}
}

Vector3 AreaShape::getRandomPosition() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getRandomPosition();
	}
}

Vector3 AreaShape::getRandomPosition(const Vector3& origin, float minDistance, float maxDistance) const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getRandomPosition(origin, minDistance, maxDistance);
	}
}

bool AreaShape::isCircularAreaShape() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCIRCULARAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isCircularAreaShape();
	}
}

bool AreaShape::isRectangularAreaShape() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRECTANGULARAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRectangularAreaShape();
	}
}

bool AreaShape::isRingAreaShape() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRINGAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRingAreaShape();
	}
}

bool AreaShape::intersectsWith(AreaShape* areaShape) const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INTERSECTSWITH__AREASHAPE_);
		method.addObjectParameter(areaShape);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->intersectsWith(areaShape);
	}
}

float AreaShape::getArea() const {
	AreaShapeImplementation* _implementation = static_cast<AreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getArea();
	}
}

DistributedObjectServant* AreaShape::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* AreaShape::_getImplementationForRead() const {
	return _impl;
}

void AreaShape::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AreaShapeImplementation
 */

AreaShapeImplementation::AreaShapeImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


AreaShapeImplementation::~AreaShapeImplementation() {
}


void AreaShapeImplementation::finalize() {
}

void AreaShapeImplementation::_initializeImplementation() {
	_setClassHelper(AreaShapeHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AreaShapeImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<AreaShape*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AreaShapeImplementation::_getStub() {
	return _this.get();
}

AreaShapeImplementation::operator const AreaShape*() {
	return _this.get();
}

void AreaShapeImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AreaShapeImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AreaShapeImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AreaShapeImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AreaShapeImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AreaShapeImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AreaShapeImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AreaShapeImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("AreaShape");

}

void AreaShapeImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AreaShapeImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AreaShapeImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x7eb8f7c7: //AreaShape.areaCenter
		TypeInfo<Vector3 >::parseFromBinaryStream(&areaCenter, stream);
		return true;

	}

	return false;
}

void AreaShapeImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AreaShapeImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AreaShapeImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x7eb8f7c7; //AreaShape.areaCenter
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector3 >::toBinaryStream(&areaCenter, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

AreaShapeImplementation::AreaShapeImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/areashapes/AreaShape.idl():  		areaCenter.set(0, 0, 0);
	(&areaCenter)->set(0, 0, 0);
	// server/zone/objects/area/areashapes/AreaShape.idl():  		Logger.setLoggingName("AreaShape");
	Logger::setLoggingName("AreaShape");
}

void AreaShapeImplementation::setAreaCenter(float x, float y) {
	// server/zone/objects/area/areashapes/AreaShape.idl():  		areaCenter.set(x, 0, y);
	(&areaCenter)->set(x, 0, y);
}

bool AreaShapeImplementation::containsPoint(float x, float y) const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return false;
	return false;
}

bool AreaShapeImplementation::containsPoint(const Vector3& point) const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return false;
	return false;
}

float AreaShapeImplementation::getRadius() const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return 0;
	return 0;
}

bool AreaShapeImplementation::isCircularAreaShape() const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return false;
	return false;
}

bool AreaShapeImplementation::isRectangularAreaShape() const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return false;
	return false;
}

bool AreaShapeImplementation::isRingAreaShape() const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return false;
	return false;
}

bool AreaShapeImplementation::intersectsWith(AreaShape* areaShape) const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return false;
	return false;
}

float AreaShapeImplementation::getArea() const{
	// server/zone/objects/area/areashapes/AreaShape.idl():  		return 0;
	return 0;
}

/*
 *	AreaShapeAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AreaShapeAdapter::AreaShapeAdapter(AreaShape* obj) : ManagedObjectAdapter(obj) {
}

void AreaShapeAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETAREACENTER__FLOAT_FLOAT_:
		{
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			
			setAreaCenter(x, y);
			
		}
		break;
	case RPC_CONTAINSPOINT__FLOAT_FLOAT_:
		{
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			
			bool _m_res = containsPoint(x, y);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETRADIUS__:
		{
			
			float _m_res = getRadius();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_ISCIRCULARAREASHAPE__:
		{
			
			bool _m_res = isCircularAreaShape();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISRECTANGULARAREASHAPE__:
		{
			
			bool _m_res = isRectangularAreaShape();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISRINGAREASHAPE__:
		{
			
			bool _m_res = isRingAreaShape();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_INTERSECTSWITH__AREASHAPE_:
		{
			AreaShape* areaShape = static_cast<AreaShape*>(inv->getObjectParameter());
			
			bool _m_res = intersectsWith(areaShape);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETAREA__:
		{
			
			float _m_res = getArea();
			resp->insertFloat(_m_res);
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

void AreaShapeAdapter::setAreaCenter(float x, float y) {
	(static_cast<AreaShape*>(stub))->setAreaCenter(x, y);
}

bool AreaShapeAdapter::containsPoint(float x, float y) const {
	return (static_cast<AreaShape*>(stub))->containsPoint(x, y);
}

float AreaShapeAdapter::getRadius() const {
	return (static_cast<AreaShape*>(stub))->getRadius();
}

bool AreaShapeAdapter::isCircularAreaShape() const {
	return (static_cast<AreaShape*>(stub))->isCircularAreaShape();
}

bool AreaShapeAdapter::isRectangularAreaShape() const {
	return (static_cast<AreaShape*>(stub))->isRectangularAreaShape();
}

bool AreaShapeAdapter::isRingAreaShape() const {
	return (static_cast<AreaShape*>(stub))->isRingAreaShape();
}

bool AreaShapeAdapter::intersectsWith(AreaShape* areaShape) const {
	return (static_cast<AreaShape*>(stub))->intersectsWith(areaShape);
}

float AreaShapeAdapter::getArea() const {
	return (static_cast<AreaShape*>(stub))->getArea();
}

/*
 *	AreaShapeHelper
 */

AreaShapeHelper* AreaShapeHelper::staticInitializer = AreaShapeHelper::instance();

AreaShapeHelper::AreaShapeHelper() {
	className = "AreaShape";

	Core::getObjectBroker()->registerClass(className, this);
}

void AreaShapeHelper::finalizeHelper() {
	AreaShapeHelper::finalize();
}

DistributedObject* AreaShapeHelper::instantiateObject() {
	return new AreaShape(DummyConstructorParameter::instance());
}

DistributedObjectServant* AreaShapeHelper::instantiateServant() {
	return new AreaShapeImplementation();
}

DistributedObjectPOD* AreaShapeHelper::instantiatePOD() {
	return new AreaShapePOD();
}

DistributedObjectAdapter* AreaShapeHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AreaShapeAdapter(static_cast<AreaShape*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	AreaShapePOD
 */

AreaShapePOD::~AreaShapePOD() {
}

AreaShapePOD::AreaShapePOD(void) {
	_className = "AreaShape";
}


void AreaShapePOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AreaShapePOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AreaShapePOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (areaCenter) {
	_nameHashCode = 0x7eb8f7c7; //AreaShape.areaCenter
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector3 >::toBinaryStream(&areaCenter.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool AreaShapePOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x7eb8f7c7: //AreaShape.areaCenter
		{
			Vector3 _mnareaCenter;
			TypeInfo<Vector3 >::parseFromBinaryStream(&_mnareaCenter, stream);
			areaCenter = std::move(_mnareaCenter);
		}
		return true;

	}

	return false;
}

void AreaShapePOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AreaShapePOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void AreaShapePOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedObjectPOD::writeObjectCompact(stream);

	TypeInfo<Vector3 >::toBinaryStream(&areaCenter.value(), stream);


}

