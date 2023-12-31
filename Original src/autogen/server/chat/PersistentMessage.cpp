/*
 *	autogen/server/chat/PersistentMessage.cpp generated by engine3 IDL compiler 0.70
 */

#include "PersistentMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	PersistentMessageStub
 */

const byte PersistentMessage::NEW = 0x4E;

const byte PersistentMessage::READ = 0x52;

const byte PersistentMessage::UNREAD = 0x55;

enum {RPC_SENDTO__CREATUREOBJECT_BOOL_ = 5714349,RPC_GETMAILID__,RPC_GETOBJECTID__,RPC_GETSENDERNAME__,RPC_GETRECEIVEROBJECTID__,RPC_GETSTATUS__,RPC_GETTIMESTAMP__,RPC_GETBODY__,RPC_GETSUBJECT__,RPC_SETSENDERNAME__STRING_,RPC_SETRECEIVEROBJECTID__LONG_,RPC_SETSTATUS__BYTE_,RPC_SETTIMESTAMP__INT_,RPC_SETBODY__UNICODESTRING_,RPC_SETSUBJECT__UNICODESTRING_,RPC_ISNEW__,RPC_ISREAD__,RPC_ISUNREAD__,};

PersistentMessage::PersistentMessage() : ManagedObject(DummyConstructorParameter::instance()) {
	PersistentMessageImplementation* _implementation = new PersistentMessageImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PersistentMessage");
}

PersistentMessage::PersistentMessage(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("PersistentMessage");
}

PersistentMessage::~PersistentMessage() {
}



void PersistentMessage::sendTo(CreatureObject* player, bool sendBody) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTO__CREATUREOBJECT_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(sendBody);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendTo(player, sendBody);
	}
}

StringIdChatParameterVector* PersistentMessage::getStringIdParameters() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getStringIdParameters();
	}
}

WaypointChatParameterVector* PersistentMessage::getWaypointParameters() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getWaypointParameters();
	}
}

int PersistentMessage::getMailID() {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAILID__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getMailID();
	}
}

unsigned long long PersistentMessage::getObjectID() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getObjectID();
	}
}

String PersistentMessage::getSenderName() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSENDERNAME__);

		String _return_getSenderName;
		method.executeWithAsciiReturn(_return_getSenderName);
		return _return_getSenderName;
	} else {
		return _implementation->getSenderName();
	}
}

unsigned long long PersistentMessage::getReceiverObjectID() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRECEIVEROBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else {
		return _implementation->getReceiverObjectID();
	}
}

byte PersistentMessage::getStatus() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATUS__);

		return method.executeWithByteReturn();
	} else {
		return _implementation->getStatus();
	}
}

int PersistentMessage::getTimeStamp() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMESTAMP__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getTimeStamp();
	}
}

UnicodeString PersistentMessage::getBody() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBODY__);

		UnicodeString _return_getBody;
		method.executeWithUnicodeReturn(_return_getBody);
		return _return_getBody;
	} else {
		return _implementation->getBody();
	}
}

UnicodeString PersistentMessage::getSubject() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSUBJECT__);

		UnicodeString _return_getSubject;
		method.executeWithUnicodeReturn(_return_getSubject);
		return _return_getSubject;
	} else {
		return _implementation->getSubject();
	}
}

void PersistentMessage::setSenderName(const String& name) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSENDERNAME__STRING_);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else {
		_implementation->setSenderName(name);
	}
}

void PersistentMessage::setReceiverObjectID(unsigned long long oid) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRECEIVEROBJECTID__LONG_);
		method.addUnsignedLongParameter(oid);

		method.executeWithVoidReturn();
	} else {
		_implementation->setReceiverObjectID(oid);
	}
}

void PersistentMessage::setStatus(byte stat) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSTATUS__BYTE_);
		method.addByteParameter(stat);

		method.executeWithVoidReturn();
	} else {
		_implementation->setStatus(stat);
	}
}

void PersistentMessage::setTimeStamp(int stamp) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTIMESTAMP__INT_);
		method.addSignedIntParameter(stamp);

		method.executeWithVoidReturn();
	} else {
		_implementation->setTimeStamp(stamp);
	}
}

void PersistentMessage::setBody(const UnicodeString& message) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBODY__UNICODESTRING_);
		method.addUnicodeParameter(message);

		method.executeWithVoidReturn();
	} else {
		_implementation->setBody(message);
	}
}

void PersistentMessage::setSubject(const UnicodeString& subj) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSUBJECT__UNICODESTRING_);
		method.addUnicodeParameter(subj);

		method.executeWithVoidReturn();
	} else {
		_implementation->setSubject(subj);
	}
}

bool PersistentMessage::isNew() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISNEW__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isNew();
	}
}

bool PersistentMessage::isRead() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREAD__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRead();
	}
}

bool PersistentMessage::isUnread() const {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISUNREAD__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isUnread();
	}
}

void PersistentMessage::addStringIdParameter(StringIdChatParameter& param) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->addStringIdParameter(param);
	}
}

void PersistentMessage::addWaypointParameter(WaypointChatParameter& param) {
	PersistentMessageImplementation* _implementation = static_cast<PersistentMessageImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->addWaypointParameter(param);
	}
}

DistributedObjectServant* PersistentMessage::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PersistentMessage::_getImplementationForRead() const {
	return _impl;
}

void PersistentMessage::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PersistentMessageImplementation
 */

const byte PersistentMessageImplementation::NEW = 0x4E;

const byte PersistentMessageImplementation::READ = 0x52;

const byte PersistentMessageImplementation::UNREAD = 0x55;

PersistentMessageImplementation::PersistentMessageImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


PersistentMessageImplementation::~PersistentMessageImplementation() {
}


void PersistentMessageImplementation::finalize() {
}

void PersistentMessageImplementation::_initializeImplementation() {
	_setClassHelper(PersistentMessageHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PersistentMessageImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PersistentMessage*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PersistentMessageImplementation::_getStub() {
	return _this.get();
}

PersistentMessageImplementation::operator const PersistentMessage*() {
	return _this.get();
}

void PersistentMessageImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PersistentMessageImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PersistentMessageImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PersistentMessageImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PersistentMessageImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PersistentMessageImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PersistentMessageImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PersistentMessageImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("PersistentMessage");

}

void PersistentMessageImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PersistentMessageImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PersistentMessageImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa6c6ceb5: //PersistentMessage.senderName
		TypeInfo<String >::parseFromBinaryStream(&senderName, stream);
		return true;

	case 0xe9fbfb82: //PersistentMessage.subject
		TypeInfo<UnicodeString >::parseFromBinaryStream(&subject, stream);
		return true;

	case 0xcdb90e9b: //PersistentMessage.body
		TypeInfo<UnicodeString >::parseFromBinaryStream(&body, stream);
		return true;

	case 0x848d409d: //PersistentMessage.timeStamp
		TypeInfo<unsigned int >::parseFromBinaryStream(&timeStamp, stream);
		return true;

	case 0xa74721f1: //PersistentMessage.status
		TypeInfo<byte >::parseFromBinaryStream(&status, stream);
		return true;

	case 0xc0fc200f: //PersistentMessage.receiverObjectID
		TypeInfo<unsigned long long >::parseFromBinaryStream(&receiverObjectID, stream);
		return true;

	case 0x1b2466ec: //PersistentMessage.stringIdParameters
		TypeInfo<StringIdChatParameterVector >::parseFromBinaryStream(&stringIdParameters, stream);
		return true;

	case 0xcc670081: //PersistentMessage.waypointParameters
		TypeInfo<WaypointChatParameterVector >::parseFromBinaryStream(&waypointParameters, stream);
		return true;

	}

	return false;
}

void PersistentMessageImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PersistentMessageImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PersistentMessageImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xa6c6ceb5; //PersistentMessage.senderName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&senderName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xe9fbfb82; //PersistentMessage.subject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<UnicodeString >::toBinaryStream(&subject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xcdb90e9b; //PersistentMessage.body
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<UnicodeString >::toBinaryStream(&body, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x848d409d; //PersistentMessage.timeStamp
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&timeStamp, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xa74721f1; //PersistentMessage.status
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&status, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc0fc200f; //PersistentMessage.receiverObjectID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&receiverObjectID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x1b2466ec; //PersistentMessage.stringIdParameters
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<StringIdChatParameterVector >::toBinaryStream(&stringIdParameters, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xcc670081; //PersistentMessage.waypointParameters
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<WaypointChatParameterVector >::toBinaryStream(&waypointParameters, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void PersistentMessageImplementation::writeJSON(nlohmann::json& j) {
	ManagedObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["senderName"] = senderName;

	thisObject["subject"] = subject;

	thisObject["body"] = body;

	thisObject["timeStamp"] = timeStamp;

	thisObject["status"] = status;

	thisObject["receiverObjectID"] = receiverObjectID;

	thisObject["stringIdParameters"] = stringIdParameters;

	thisObject["waypointParameters"] = waypointParameters;

	j["PersistentMessage"] = thisObject;
}

PersistentMessageImplementation::PersistentMessageImplementation() {
	_initializeImplementation();
	// server/chat/PersistentMessage.idl():  		timeStamp = System.getTime();
	timeStamp = System::getTime();
	// server/chat/PersistentMessage.idl():  		status = NEW;
	status = NEW;
	// server/chat/PersistentMessage.idl():  		receiverObjectID = 0;
	receiverObjectID = 0;
}

StringIdChatParameterVector* PersistentMessageImplementation::getStringIdParameters() {
	// server/chat/PersistentMessage.idl():  		return stringIdParameters;
	return (&stringIdParameters);
}

WaypointChatParameterVector* PersistentMessageImplementation::getWaypointParameters() {
	// server/chat/PersistentMessage.idl():  		return waypointParameters;
	return (&waypointParameters);
}

String PersistentMessageImplementation::getSenderName() const{
	// server/chat/PersistentMessage.idl():  		return senderName;
	return senderName;
}

unsigned long long PersistentMessageImplementation::getReceiverObjectID() const{
	// server/chat/PersistentMessage.idl():  		return receiverObjectID;
	return receiverObjectID;
}

byte PersistentMessageImplementation::getStatus() const{
	// server/chat/PersistentMessage.idl():  		return status;
	return status;
}

int PersistentMessageImplementation::getTimeStamp() const{
	// server/chat/PersistentMessage.idl():  		return timeStamp;
	return timeStamp;
}

UnicodeString PersistentMessageImplementation::getBody() const{
	// server/chat/PersistentMessage.idl():  		return body;
	return body;
}

UnicodeString PersistentMessageImplementation::getSubject() const{
	// server/chat/PersistentMessage.idl():  		return subject;
	return subject;
}

void PersistentMessageImplementation::setSenderName(const String& name) {
	// server/chat/PersistentMessage.idl():  		senderName = name;
	senderName = name;
}

void PersistentMessageImplementation::setReceiverObjectID(unsigned long long oid) {
	// server/chat/PersistentMessage.idl():  		receiverObjectID = oid;
	receiverObjectID = oid;
}

void PersistentMessageImplementation::setStatus(byte stat) {
	// server/chat/PersistentMessage.idl():  		status = stat;
	status = stat;
}

void PersistentMessageImplementation::setTimeStamp(int stamp) {
	// server/chat/PersistentMessage.idl():  		timeStamp = stamp;
	timeStamp = stamp;
}

void PersistentMessageImplementation::setBody(const UnicodeString& message) {
	// server/chat/PersistentMessage.idl():  		body = message;
	body = message;
}

void PersistentMessageImplementation::setSubject(const UnicodeString& subj) {
	// server/chat/PersistentMessage.idl():  		subject = subj;
	subject = subj;
}

bool PersistentMessageImplementation::isNew() const{
	// server/chat/PersistentMessage.idl():  		return status == NEW;
	return status == NEW;
}

bool PersistentMessageImplementation::isRead() const{
	// server/chat/PersistentMessage.idl():  		return status == READ;
	return status == READ;
}

bool PersistentMessageImplementation::isUnread() const{
	// server/chat/PersistentMessage.idl():  		return status == UNREAD;
	return status == UNREAD;
}

/*
 *	PersistentMessageAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PersistentMessageAdapter::PersistentMessageAdapter(PersistentMessage* obj) : ManagedObjectAdapter(obj) {
}

void PersistentMessageAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SENDTO__CREATUREOBJECT_BOOL_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			bool sendBody = inv->getBooleanParameter();
			
			sendTo(player, sendBody);
			
		}
		break;
	case RPC_GETMAILID__:
		{
			
			int _m_res = getMailID();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETOBJECTID__:
		{
			
			unsigned long long _m_res = getObjectID();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_GETSENDERNAME__:
		{
			
			String _m_res = getSenderName();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETRECEIVEROBJECTID__:
		{
			
			unsigned long long _m_res = getReceiverObjectID();
			resp->insertLong(_m_res);
		}
		break;
	case RPC_GETSTATUS__:
		{
			
			byte _m_res = getStatus();
			resp->insertByte(_m_res);
		}
		break;
	case RPC_GETTIMESTAMP__:
		{
			
			int _m_res = getTimeStamp();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETBODY__:
		{
			
			UnicodeString _m_res = getBody();
			resp->insertUnicode(_m_res);
		}
		break;
	case RPC_GETSUBJECT__:
		{
			
			UnicodeString _m_res = getSubject();
			resp->insertUnicode(_m_res);
		}
		break;
	case RPC_SETSENDERNAME__STRING_:
		{
			 String name; inv->getAsciiParameter(name);
			
			setSenderName(name);
			
		}
		break;
	case RPC_SETRECEIVEROBJECTID__LONG_:
		{
			unsigned long long oid = inv->getUnsignedLongParameter();
			
			setReceiverObjectID(oid);
			
		}
		break;
	case RPC_SETSTATUS__BYTE_:
		{
			byte stat = inv->getByteParameter();
			
			setStatus(stat);
			
		}
		break;
	case RPC_SETTIMESTAMP__INT_:
		{
			int stamp = inv->getSignedIntParameter();
			
			setTimeStamp(stamp);
			
		}
		break;
	case RPC_SETBODY__UNICODESTRING_:
		{
			 UnicodeString message; inv->getUnicodeParameter(message);
			
			setBody(message);
			
		}
		break;
	case RPC_SETSUBJECT__UNICODESTRING_:
		{
			 UnicodeString subj; inv->getUnicodeParameter(subj);
			
			setSubject(subj);
			
		}
		break;
	case RPC_ISNEW__:
		{
			
			bool _m_res = isNew();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISREAD__:
		{
			
			bool _m_res = isRead();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISUNREAD__:
		{
			
			bool _m_res = isUnread();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

void PersistentMessageAdapter::sendTo(CreatureObject* player, bool sendBody) {
	(static_cast<PersistentMessage*>(stub))->sendTo(player, sendBody);
}

int PersistentMessageAdapter::getMailID() {
	return (static_cast<PersistentMessage*>(stub))->getMailID();
}

unsigned long long PersistentMessageAdapter::getObjectID() const {
	return (static_cast<PersistentMessage*>(stub))->getObjectID();
}

String PersistentMessageAdapter::getSenderName() const {
	return (static_cast<PersistentMessage*>(stub))->getSenderName();
}

unsigned long long PersistentMessageAdapter::getReceiverObjectID() const {
	return (static_cast<PersistentMessage*>(stub))->getReceiverObjectID();
}

byte PersistentMessageAdapter::getStatus() const {
	return (static_cast<PersistentMessage*>(stub))->getStatus();
}

int PersistentMessageAdapter::getTimeStamp() const {
	return (static_cast<PersistentMessage*>(stub))->getTimeStamp();
}

UnicodeString PersistentMessageAdapter::getBody() const {
	return (static_cast<PersistentMessage*>(stub))->getBody();
}

UnicodeString PersistentMessageAdapter::getSubject() const {
	return (static_cast<PersistentMessage*>(stub))->getSubject();
}

void PersistentMessageAdapter::setSenderName(const String& name) {
	(static_cast<PersistentMessage*>(stub))->setSenderName(name);
}

void PersistentMessageAdapter::setReceiverObjectID(unsigned long long oid) {
	(static_cast<PersistentMessage*>(stub))->setReceiverObjectID(oid);
}

void PersistentMessageAdapter::setStatus(byte stat) {
	(static_cast<PersistentMessage*>(stub))->setStatus(stat);
}

void PersistentMessageAdapter::setTimeStamp(int stamp) {
	(static_cast<PersistentMessage*>(stub))->setTimeStamp(stamp);
}

void PersistentMessageAdapter::setBody(const UnicodeString& message) {
	(static_cast<PersistentMessage*>(stub))->setBody(message);
}

void PersistentMessageAdapter::setSubject(const UnicodeString& subj) {
	(static_cast<PersistentMessage*>(stub))->setSubject(subj);
}

bool PersistentMessageAdapter::isNew() const {
	return (static_cast<PersistentMessage*>(stub))->isNew();
}

bool PersistentMessageAdapter::isRead() const {
	return (static_cast<PersistentMessage*>(stub))->isRead();
}

bool PersistentMessageAdapter::isUnread() const {
	return (static_cast<PersistentMessage*>(stub))->isUnread();
}

/*
 *	PersistentMessageHelper
 */

PersistentMessageHelper* PersistentMessageHelper::staticInitializer = PersistentMessageHelper::instance();

PersistentMessageHelper::PersistentMessageHelper() {
	className = "PersistentMessage";

	Core::getObjectBroker()->registerClass(className, this);
}

void PersistentMessageHelper::finalizeHelper() {
	PersistentMessageHelper::finalize();
}

DistributedObject* PersistentMessageHelper::instantiateObject() {
	return new PersistentMessage(DummyConstructorParameter::instance());
}

DistributedObjectServant* PersistentMessageHelper::instantiateServant() {
	return new PersistentMessageImplementation();
}

DistributedObjectPOD* PersistentMessageHelper::instantiatePOD() {
	return new PersistentMessagePOD();
}

DistributedObjectAdapter* PersistentMessageHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PersistentMessageAdapter(static_cast<PersistentMessage*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PersistentMessagePOD
 */

PersistentMessagePOD::~PersistentMessagePOD() {
}

PersistentMessagePOD::PersistentMessagePOD(void) {
	_className = "PersistentMessage";
}


void PersistentMessagePOD::writeJSON(nlohmann::json& j) {
	ManagedObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (senderName)
		thisObject["senderName"] = senderName.value();

	if (subject)
		thisObject["subject"] = subject.value();

	if (body)
		thisObject["body"] = body.value();

	if (timeStamp)
		thisObject["timeStamp"] = timeStamp.value();

	if (status)
		thisObject["status"] = status.value();

	if (receiverObjectID)
		thisObject["receiverObjectID"] = receiverObjectID.value();

	if (stringIdParameters)
		thisObject["stringIdParameters"] = stringIdParameters.value();

	if (waypointParameters)
		thisObject["waypointParameters"] = waypointParameters.value();

	j["PersistentMessage"] = thisObject;
}


void PersistentMessagePOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PersistentMessagePOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PersistentMessagePOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (senderName) {
	_nameHashCode = 0xa6c6ceb5; //PersistentMessage.senderName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&senderName.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (subject) {
	_nameHashCode = 0xe9fbfb82; //PersistentMessage.subject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<UnicodeString >::toBinaryStream(&subject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (body) {
	_nameHashCode = 0xcdb90e9b; //PersistentMessage.body
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<UnicodeString >::toBinaryStream(&body.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (timeStamp) {
	_nameHashCode = 0x848d409d; //PersistentMessage.timeStamp
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&timeStamp.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (status) {
	_nameHashCode = 0xa74721f1; //PersistentMessage.status
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&status.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (receiverObjectID) {
	_nameHashCode = 0xc0fc200f; //PersistentMessage.receiverObjectID
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned long long >::toBinaryStream(&receiverObjectID.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (stringIdParameters) {
	_nameHashCode = 0x1b2466ec; //PersistentMessage.stringIdParameters
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<StringIdChatParameterVector >::toBinaryStream(&stringIdParameters.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (waypointParameters) {
	_nameHashCode = 0xcc670081; //PersistentMessage.waypointParameters
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<WaypointChatParameterVector >::toBinaryStream(&waypointParameters.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool PersistentMessagePOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa6c6ceb5: //PersistentMessage.senderName
		{
			String _mnsenderName;
			TypeInfo<String >::parseFromBinaryStream(&_mnsenderName, stream);
			senderName = std::move(_mnsenderName);
		}
		return true;

	case 0xe9fbfb82: //PersistentMessage.subject
		{
			UnicodeString _mnsubject;
			TypeInfo<UnicodeString >::parseFromBinaryStream(&_mnsubject, stream);
			subject = std::move(_mnsubject);
		}
		return true;

	case 0xcdb90e9b: //PersistentMessage.body
		{
			UnicodeString _mnbody;
			TypeInfo<UnicodeString >::parseFromBinaryStream(&_mnbody, stream);
			body = std::move(_mnbody);
		}
		return true;

	case 0x848d409d: //PersistentMessage.timeStamp
		{
			unsigned int _mntimeStamp;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mntimeStamp, stream);
			timeStamp = std::move(_mntimeStamp);
		}
		return true;

	case 0xa74721f1: //PersistentMessage.status
		{
			byte _mnstatus;
			TypeInfo<byte >::parseFromBinaryStream(&_mnstatus, stream);
			status = std::move(_mnstatus);
		}
		return true;

	case 0xc0fc200f: //PersistentMessage.receiverObjectID
		{
			unsigned long long _mnreceiverObjectID;
			TypeInfo<unsigned long long >::parseFromBinaryStream(&_mnreceiverObjectID, stream);
			receiverObjectID = std::move(_mnreceiverObjectID);
		}
		return true;

	case 0x1b2466ec: //PersistentMessage.stringIdParameters
		{
			StringIdChatParameterVector _mnstringIdParameters;
			TypeInfo<StringIdChatParameterVector >::parseFromBinaryStream(&_mnstringIdParameters, stream);
			stringIdParameters = std::move(_mnstringIdParameters);
		}
		return true;

	case 0xcc670081: //PersistentMessage.waypointParameters
		{
			WaypointChatParameterVector _mnwaypointParameters;
			TypeInfo<WaypointChatParameterVector >::parseFromBinaryStream(&_mnwaypointParameters, stream);
			waypointParameters = std::move(_mnwaypointParameters);
		}
		return true;

	}

	return false;
}

void PersistentMessagePOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PersistentMessagePOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void PersistentMessagePOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedObjectPOD::writeObjectCompact(stream);

	TypeInfo<String >::toBinaryStream(&senderName.value(), stream);

	TypeInfo<UnicodeString >::toBinaryStream(&subject.value(), stream);

	TypeInfo<UnicodeString >::toBinaryStream(&body.value(), stream);

	TypeInfo<unsigned int >::toBinaryStream(&timeStamp.value(), stream);

	TypeInfo<byte >::toBinaryStream(&status.value(), stream);

	TypeInfo<unsigned long long >::toBinaryStream(&receiverObjectID.value(), stream);

	TypeInfo<StringIdChatParameterVector >::toBinaryStream(&stringIdParameters.value(), stream);

	TypeInfo<WaypointChatParameterVector >::toBinaryStream(&waypointParameters.value(), stream);


}

