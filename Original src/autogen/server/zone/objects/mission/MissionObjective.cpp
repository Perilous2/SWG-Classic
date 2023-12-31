/*
 *	autogen/server/zone/objects/mission/MissionObjective.cpp generated by engine3 IDL compiler 0.70
 */

#include "MissionObjective.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	MissionObjectiveStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 1042134107,RPC_DESTROYOBJECTFROMDATABASE__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_ADDOBSERVER__MISSIONOBSERVER_BOOL_,RPC_DROPOBSERVER__MISSIONOBSERVER_BOOL_,RPC_GETOBSERVERCOUNT__,RPC_REMOVEALLOBSERVERS__,RPC_GETOBSERVER__INT_,RPC_HASOBSERVERS__,RPC_ACTIVATE__,RPC_DEACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_FAIL__,RPC_GETMISSIONOBJECT__,RPC_GETOBJECTIVETYPE__,RPC_GETPLAYEROWNER__,RPC_AWARDFACTIONPOINTS__,RPC_REMOVEMISSIONFROMPLAYER__,RPC_AWARDREWARD__,RPC_CLEARFAILTASK__,RPC_ISPLAYERBOUNTY__};

MissionObjective::MissionObjective(MissionObject* parent) : ManagedObject(DummyConstructorParameter::instance()) {
	MissionObjectiveImplementation* _implementation = new MissionObjectiveImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("MissionObjective");
}

MissionObjective::MissionObjective(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("MissionObjective");
}

MissionObjective::~MissionObjective() {
}



void MissionObjective::initializeTransientMembers() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void MissionObjective::destroyObjectFromDatabase() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->destroyObjectFromDatabase();
	}
}

int MissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
	}
}

void MissionObjective::addObserver(MissionObserver* observer, bool makePersistent) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDOBSERVER__MISSIONOBSERVER_BOOL_);
		method.addObjectParameter(observer);
		method.addBooleanParameter(makePersistent);

		method.executeWithVoidReturn();
	} else {
		_implementation->addObserver(observer, makePersistent);
	}
}

void MissionObjective::dropObserver(MissionObserver* observer, bool removeFromDatabase) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DROPOBSERVER__MISSIONOBSERVER_BOOL_);
		method.addObjectParameter(observer);
		method.addBooleanParameter(removeFromDatabase);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->dropObserver(observer, removeFromDatabase);
	}
}

int MissionObjective::getObserverCount() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBSERVERCOUNT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getObserverCount();
	}
}

void MissionObjective::removeAllObservers() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEALLOBSERVERS__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->removeAllObservers();
	}
}

MissionObserver* MissionObjective::getObserver(int index) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBSERVER__INT_);
		method.addSignedIntParameter(index);

		return static_cast<MissionObserver*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getObserver(index);
	}
}

bool MissionObjective::hasObservers() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASOBSERVERS__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->hasObservers();
	}
}

void MissionObjective::activate() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->activate();
	}
}

void MissionObjective::deactivate() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->deactivate();
	}
}

void MissionObjective::abort() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->abort();
	}
}

void MissionObjective::complete() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->complete();
	}
}

void MissionObjective::fail() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FAIL__);

		method.executeWithVoidReturn();
	} else {
		_implementation->fail();
	}
}

ManagedWeakReference<MissionObject* > MissionObjective::getMissionObject() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMISSIONOBJECT__);

		return static_cast<MissionObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getMissionObject();
	}
}

unsigned int MissionObjective::getObjectiveType() const {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTIVETYPE__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getObjectiveType();
	}
}

Reference<CreatureObject* > MissionObjective::getPlayerOwner() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLAYEROWNER__);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getPlayerOwner();
	}
}

void MissionObjective::awardFactionPoints() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_AWARDFACTIONPOINTS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->awardFactionPoints();
	}
}

void MissionObjective::removeMissionFromPlayer() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEMISSIONFROMPLAYER__);

		method.executeWithVoidReturn();
	} else {
		_implementation->removeMissionFromPlayer();
	}
}

void MissionObjective::awardReward() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_AWARDREWARD__);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->awardReward();
	}
}

void MissionObjective::addMissionStats(TransactionLog& trx) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->addMissionStats(trx);
	}
}

Vector3 MissionObjective::getEndPosition() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getEndPosition();
	}
}

void MissionObjective::clearFailTask() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARFAILTASK__);

		method.executeWithVoidReturn();
	} else {
		_implementation->clearFailTask();
	}
}

bool MissionObjective::isPlayerBounty() const {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPLAYERBOUNTY__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isPlayerBounty();
	}
}

DistributedObjectServant* MissionObjective::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* MissionObjective::_getImplementationForRead() const {
	return _impl;
}

void MissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MissionObjectiveImplementation
 */

MissionObjectiveImplementation::MissionObjectiveImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


MissionObjectiveImplementation::~MissionObjectiveImplementation() {
}


void MissionObjectiveImplementation::finalize() {
}

void MissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(MissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<MissionObjective*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObjectiveImplementation::_getStub() {
	return _this.get();
}

MissionObjectiveImplementation::operator const MissionObjective*() {
	return _this.get();
}

void MissionObjectiveImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void MissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void MissionObjectiveImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void MissionObjectiveImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void MissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void MissionObjectiveImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void MissionObjectiveImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void MissionObjectiveImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("MissionObjective");

}

void MissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(MissionObjectiveImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x44338d23: //MissionObjective.observers
		TypeInfo<SortedVector<ManagedReference<MissionObserver* > > >::parseFromBinaryStream(&observers, stream);
		return true;

	case 0xc4598e9: //MissionObjective.mission
		TypeInfo<ManagedWeakReference<MissionObject* > >::parseFromBinaryStream(&mission, stream);
		return true;

	case 0xb6ca065b: //MissionObjective.objectiveType
		TypeInfo<unsigned int >::parseFromBinaryStream(&objectiveType, stream);
		return true;

	case 0xc9c97c10: //MissionObjective.missionStartTime
		TypeInfo<Time >::parseFromBinaryStream(&missionStartTime, stream);
		return true;

	}

	return false;
}

void MissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x44338d23; //MissionObjective.observers
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<MissionObserver* > > >::toBinaryStream(&observers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc4598e9; //MissionObjective.mission
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<MissionObject* > >::toBinaryStream(&mission, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xb6ca065b; //MissionObjective.objectiveType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&objectiveType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc9c97c10; //MissionObjective.missionStartTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&missionStartTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void MissionObjectiveImplementation::writeJSON(nlohmann::json& j) {
	ManagedObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["observers"] = observers;

	thisObject["mission"] = mission;

	thisObject["objectiveType"] = objectiveType;

	thisObject["missionStartTime"] = missionStartTime;

	j["MissionObjective"] = thisObject;
}

MissionObjectiveImplementation::MissionObjectiveImplementation(MissionObject* parent) {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObjective.idl():  		mission = parent;
	mission = parent;
	// server/zone/objects/mission/MissionObjective.idl():  		Logger.setLoggingName("MissionObjective");
	Logger::setLoggingName("MissionObjective");
	// server/zone/objects/mission/MissionObjective.idl():  		activated = false;
	activated = false;
	// server/zone/objects/mission/MissionObjective.idl():  		missionStartTime.updateToCurrentTime();
	(&missionStartTime)->updateToCurrentTime();
	// server/zone/objects/mission/MissionObjective.idl():  		failTask = null;
	failTask = NULL;
}

void MissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/MissionObjective.idl():  		activated = false;
	activated = false;
}

int MissionObjectiveImplementation::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/mission/MissionObjective.idl():  		return 1;
	return 1;
}

void MissionObjectiveImplementation::dropObserver(MissionObserver* observer, bool removeFromDatabase) {
	// server/zone/objects/mission/MissionObjective.idl():  		observers.
	if (removeFromDatabase){
	// server/zone/objects/mission/MissionObjective.idl():  			}
{
	Locker _locker(observer);
	// server/zone/objects/mission/MissionObjective.idl():  				observer.destroyObjectFromDatabase();
	observer->destroyObjectFromDatabase();
}
}
	// server/zone/objects/mission/MissionObjective.idl():  		observers.drop(observer);
	(&observers)->drop(observer);
}

int MissionObjectiveImplementation::getObserverCount() {
	// server/zone/objects/mission/MissionObjective.idl():  		return observers.size();
	return (&observers)->size();
}

void MissionObjectiveImplementation::removeAllObservers() {
	// server/zone/objects/mission/MissionObjective.idl():  		observers.removeAll();
	(&observers)->removeAll();
}

MissionObserver* MissionObjectiveImplementation::getObserver(int index) {
	// server/zone/objects/mission/MissionObjective.idl():  		return observers.get(index);
	return (&observers)->get(index);
}

bool MissionObjectiveImplementation::hasObservers() {
	// server/zone/objects/mission/MissionObjective.idl():  		return observers.size() != 0;
	return (&observers)->size() != 0;
}

void MissionObjectiveImplementation::deactivate() {
	// server/zone/objects/mission/MissionObjective.idl():  		activated = false;
	activated = false;
}

ManagedWeakReference<MissionObject* > MissionObjectiveImplementation::getMissionObject() {
	// server/zone/objects/mission/MissionObjective.idl():  		return mission;
	return mission;
}

unsigned int MissionObjectiveImplementation::getObjectiveType() const{
	// server/zone/objects/mission/MissionObjective.idl():  		return objectiveType;
	return objectiveType;
}

bool MissionObjectiveImplementation::isPlayerBounty() const{
	// server/zone/objects/mission/MissionObjective.idl():  		return false;
	return false;
}

/*
 *	MissionObjectiveAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


MissionObjectiveAdapter::MissionObjectiveAdapter(MissionObjective* obj) : ManagedObjectAdapter(obj) {
}

void MissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__:
		{
			
			destroyObjectFromDatabase();
			
		}
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			MissionObserver* observer = static_cast<MissionObserver*>(inv->getObjectParameter());
			unsigned int eventType = inv->getUnsignedIntParameter();
			Observable* observable = static_cast<Observable*>(inv->getObjectParameter());
			ManagedObject* arg1 = static_cast<ManagedObject*>(inv->getObjectParameter());
			long long arg2 = inv->getSignedLongParameter();
			
			int _m_res = notifyObserverEvent(observer, eventType, observable, arg1, arg2);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ADDOBSERVER__MISSIONOBSERVER_BOOL_:
		{
			MissionObserver* observer = static_cast<MissionObserver*>(inv->getObjectParameter());
			bool makePersistent = inv->getBooleanParameter();
			
			addObserver(observer, makePersistent);
			
		}
		break;
	case RPC_DROPOBSERVER__MISSIONOBSERVER_BOOL_:
		{
			MissionObserver* observer = static_cast<MissionObserver*>(inv->getObjectParameter());
			bool removeFromDatabase = inv->getBooleanParameter();
			
			dropObserver(observer, removeFromDatabase);
			
		}
		break;
	case RPC_GETOBSERVERCOUNT__:
		{
			
			int _m_res = getObserverCount();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_REMOVEALLOBSERVERS__:
		{
			
			removeAllObservers();
			
		}
		break;
	case RPC_GETOBSERVER__INT_:
		{
			int index = inv->getSignedIntParameter();
			
			DistributedObject* _m_res = getObserver(index);
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_HASOBSERVERS__:
		{
			
			bool _m_res = hasObservers();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ACTIVATE__:
		{
			
			activate();
			
		}
		break;
	case RPC_DEACTIVATE__:
		{
			
			deactivate();
			
		}
		break;
	case RPC_ABORT__:
		{
			
			abort();
			
		}
		break;
	case RPC_COMPLETE__:
		{
			
			complete();
			
		}
		break;
	case RPC_FAIL__:
		{
			
			fail();
			
		}
		break;
	case RPC_GETMISSIONOBJECT__:
		{
			
			DistributedObject* _m_res = getMissionObject().get();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_GETOBJECTIVETYPE__:
		{
			
			unsigned int _m_res = getObjectiveType();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETPLAYEROWNER__:
		{
			
			DistributedObject* _m_res = getPlayerOwner();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_AWARDFACTIONPOINTS__:
		{
			
			awardFactionPoints();
			
		}
		break;
	case RPC_REMOVEMISSIONFROMPLAYER__:
		{
			
			removeMissionFromPlayer();
			
		}
		break;
	case RPC_AWARDREWARD__:
		{
			
			awardReward();
			
		}
		break;
	case RPC_CLEARFAILTASK__:
		{
			
			clearFailTask();
			
		}
		break;
	case RPC_ISPLAYERBOUNTY__:
		{
			
			bool _m_res = isPlayerBounty();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

void MissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<MissionObjective*>(stub))->initializeTransientMembers();
}

void MissionObjectiveAdapter::destroyObjectFromDatabase() {
	(static_cast<MissionObjective*>(stub))->destroyObjectFromDatabase();
}

int MissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<MissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjectiveAdapter::addObserver(MissionObserver* observer, bool makePersistent) {
	(static_cast<MissionObjective*>(stub))->addObserver(observer, makePersistent);
}

void MissionObjectiveAdapter::dropObserver(MissionObserver* observer, bool removeFromDatabase) {
	(static_cast<MissionObjective*>(stub))->dropObserver(observer, removeFromDatabase);
}

int MissionObjectiveAdapter::getObserverCount() {
	return (static_cast<MissionObjective*>(stub))->getObserverCount();
}

void MissionObjectiveAdapter::removeAllObservers() {
	(static_cast<MissionObjective*>(stub))->removeAllObservers();
}

MissionObserver* MissionObjectiveAdapter::getObserver(int index) {
	return (static_cast<MissionObjective*>(stub))->getObserver(index);
}

bool MissionObjectiveAdapter::hasObservers() {
	return (static_cast<MissionObjective*>(stub))->hasObservers();
}

void MissionObjectiveAdapter::activate() {
	(static_cast<MissionObjective*>(stub))->activate();
}

void MissionObjectiveAdapter::deactivate() {
	(static_cast<MissionObjective*>(stub))->deactivate();
}

void MissionObjectiveAdapter::abort() {
	(static_cast<MissionObjective*>(stub))->abort();
}

void MissionObjectiveAdapter::complete() {
	(static_cast<MissionObjective*>(stub))->complete();
}

void MissionObjectiveAdapter::fail() {
	(static_cast<MissionObjective*>(stub))->fail();
}

ManagedWeakReference<MissionObject* > MissionObjectiveAdapter::getMissionObject() {
	return (static_cast<MissionObjective*>(stub))->getMissionObject();
}

unsigned int MissionObjectiveAdapter::getObjectiveType() const {
	return (static_cast<MissionObjective*>(stub))->getObjectiveType();
}

Reference<CreatureObject* > MissionObjectiveAdapter::getPlayerOwner() {
	return (static_cast<MissionObjective*>(stub))->getPlayerOwner();
}

void MissionObjectiveAdapter::awardFactionPoints() {
	(static_cast<MissionObjective*>(stub))->awardFactionPoints();
}

void MissionObjectiveAdapter::removeMissionFromPlayer() {
	(static_cast<MissionObjective*>(stub))->removeMissionFromPlayer();
}

void MissionObjectiveAdapter::awardReward() {
	(static_cast<MissionObjective*>(stub))->awardReward();
}

void MissionObjectiveAdapter::clearFailTask() {
	(static_cast<MissionObjective*>(stub))->clearFailTask();
}

bool MissionObjectiveAdapter::isPlayerBounty() const {
	return (static_cast<MissionObjective*>(stub))->isPlayerBounty();
}

/*
 *	MissionObjectiveHelper
 */

MissionObjectiveHelper* MissionObjectiveHelper::staticInitializer = MissionObjectiveHelper::instance();

MissionObjectiveHelper::MissionObjectiveHelper() {
	className = "MissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void MissionObjectiveHelper::finalizeHelper() {
	MissionObjectiveHelper::finalize();
}

DistributedObject* MissionObjectiveHelper::instantiateObject() {
	return new MissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObjectiveHelper::instantiateServant() {
	return new MissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* MissionObjectiveHelper::instantiatePOD() {
	return new MissionObjectivePOD();
}

DistributedObjectAdapter* MissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectiveAdapter(static_cast<MissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionObjectivePOD
 */

MissionObjectivePOD::~MissionObjectivePOD() {
}

MissionObjectivePOD::MissionObjectivePOD(void) {
	_className = "MissionObjective";
}


void MissionObjectivePOD::writeJSON(nlohmann::json& j) {
	ManagedObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (observers)
		thisObject["observers"] = observers.value();

	if (mission)
		thisObject["mission"] = mission.value();

	if (objectiveType)
		thisObject["objectiveType"] = objectiveType.value();

	if (missionStartTime)
		thisObject["missionStartTime"] = missionStartTime.value();

	j["MissionObjective"] = thisObject;
}


void MissionObjectivePOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionObjectivePOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionObjectivePOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (observers) {
	_nameHashCode = 0x44338d23; //MissionObjective.observers
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<SortedVector<ManagedReference<MissionObserverPOD* > > >::toBinaryStream(&observers.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (mission) {
	_nameHashCode = 0xc4598e9; //MissionObjective.mission
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<MissionObjectPOD* > >::toBinaryStream(&mission.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (objectiveType) {
	_nameHashCode = 0xb6ca065b; //MissionObjective.objectiveType
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&objectiveType.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (missionStartTime) {
	_nameHashCode = 0xc9c97c10; //MissionObjective.missionStartTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&missionStartTime.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool MissionObjectivePOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x44338d23: //MissionObjective.observers
		{
			SortedVector<ManagedReference<MissionObserverPOD* > > _mnobservers;
			TypeInfo<SortedVector<ManagedReference<MissionObserverPOD* > > >::parseFromBinaryStream(&_mnobservers, stream);
			observers = std::move(_mnobservers);
		}
		return true;

	case 0xc4598e9: //MissionObjective.mission
		{
			ManagedWeakReference<MissionObjectPOD* > _mnmission;
			TypeInfo<ManagedWeakReference<MissionObjectPOD* > >::parseFromBinaryStream(&_mnmission, stream);
			mission = std::move(_mnmission);
		}
		return true;

	case 0xb6ca065b: //MissionObjective.objectiveType
		{
			unsigned int _mnobjectiveType;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mnobjectiveType, stream);
			objectiveType = std::move(_mnobjectiveType);
		}
		return true;

	case 0xc9c97c10: //MissionObjective.missionStartTime
		{
			Time _mnmissionStartTime;
			TypeInfo<Time >::parseFromBinaryStream(&_mnmissionStartTime, stream);
			missionStartTime = std::move(_mnmissionStartTime);
		}
		return true;

	}

	return false;
}

void MissionObjectivePOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(MissionObjectivePOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void MissionObjectivePOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedObjectPOD::writeObjectCompact(stream);

	TypeInfo<SortedVector<ManagedReference<MissionObserverPOD* > > >::toBinaryStream(&observers.value(), stream);

	TypeInfo<ManagedWeakReference<MissionObjectPOD* > >::toBinaryStream(&mission.value(), stream);

	TypeInfo<unsigned int >::toBinaryStream(&objectiveType.value(), stream);

	TypeInfo<Time >::toBinaryStream(&missionStartTime.value(), stream);


}

