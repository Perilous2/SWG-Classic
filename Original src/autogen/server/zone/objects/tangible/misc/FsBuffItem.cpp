/*
 *	autogen/server/zone/objects/tangible/misc/FsBuffItem.cpp generated by engine3 IDL compiler 0.70
 */

#include "FsBuffItem.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	FsBuffItemStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_GETTIMESTRING__INT_,RPC_GETBUFFCRC__,RPC_SETREUSETIME__INT_,RPC_SETBUFFATTRIBUTE__INT_,RPC_SETBUFFVALUE__INT_,RPC_SETBUFFDURATION__INT_};

FsBuffItem::FsBuffItem() : TangibleObject(DummyConstructorParameter::instance()) {
	FsBuffItemImplementation* _implementation = new FsBuffItemImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("FsBuffItem");
}

FsBuffItem::FsBuffItem(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("FsBuffItem");
}

FsBuffItem::~FsBuffItem() {
}



void FsBuffItem::fillAttributeList(AttributeListMessage* msg, CreatureObject* player) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, player);
	}
}

int FsBuffItem::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
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

void FsBuffItem::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

String FsBuffItem::getTimeString(unsigned int timestamp) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMESTRING__INT_);
		method.addUnsignedIntParameter(timestamp);

		String _return_getTimeString;
		method.executeWithAsciiReturn(_return_getTimeString);
		return _return_getTimeString;
	} else {
		return _implementation->getTimeString(timestamp);
	}
}

unsigned int FsBuffItem::getBuffCRC() {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBUFFCRC__);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->getBuffCRC();
	}
}

void FsBuffItem::setReuseTime(unsigned int time) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETREUSETIME__INT_);
		method.addUnsignedIntParameter(time);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setReuseTime(time);
	}
}

void FsBuffItem::setBuffAttribute(int attrib) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBUFFATTRIBUTE__INT_);
		method.addSignedIntParameter(attrib);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setBuffAttribute(attrib);
	}
}

void FsBuffItem::setBuffValue(int value) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBUFFVALUE__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setBuffValue(value);
	}
}

void FsBuffItem::setBuffDuration(unsigned int dur) {
	FsBuffItemImplementation* _implementation = static_cast<FsBuffItemImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBUFFDURATION__INT_);
		method.addUnsignedIntParameter(dur);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setBuffDuration(dur);
	}
}

DistributedObjectServant* FsBuffItem::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* FsBuffItem::_getImplementationForRead() const {
	return _impl;
}

void FsBuffItem::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FsBuffItemImplementation
 */

FsBuffItemImplementation::FsBuffItemImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FsBuffItemImplementation::~FsBuffItemImplementation() {
}


void FsBuffItemImplementation::finalize() {
}

void FsBuffItemImplementation::_initializeImplementation() {
	_setClassHelper(FsBuffItemHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FsBuffItemImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FsBuffItem*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FsBuffItemImplementation::_getStub() {
	return _this.get();
}

FsBuffItemImplementation::operator const FsBuffItem*() {
	return _this.get();
}

void FsBuffItemImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void FsBuffItemImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void FsBuffItemImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void FsBuffItemImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void FsBuffItemImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void FsBuffItemImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void FsBuffItemImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void FsBuffItemImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FsBuffItem");

}

void FsBuffItemImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FsBuffItemImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FsBuffItemImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xfff1a09a: //FsBuffItem.reuseTime
		TypeInfo<unsigned int >::parseFromBinaryStream(&reuseTime, stream);
		return true;

	case 0x3bbc2073: //FsBuffItem.buffAttribute
		TypeInfo<int >::parseFromBinaryStream(&buffAttribute, stream);
		return true;

	case 0xc6487dd2: //FsBuffItem.buffValue
		TypeInfo<int >::parseFromBinaryStream(&buffValue, stream);
		return true;

	case 0x68f327db: //FsBuffItem.buffDuration
		TypeInfo<unsigned int >::parseFromBinaryStream(&buffDuration, stream);
		return true;

	}

	return false;
}

void FsBuffItemImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FsBuffItemImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FsBuffItemImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xfff1a09a; //FsBuffItem.reuseTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&reuseTime, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x3bbc2073; //FsBuffItem.buffAttribute
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&buffAttribute, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc6487dd2; //FsBuffItem.buffValue
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&buffValue, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x68f327db; //FsBuffItem.buffDuration
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&buffDuration, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void FsBuffItemImplementation::writeJSON(nlohmann::json& j) {
	TangibleObjectImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["reuseTime"] = reuseTime;

	thisObject["buffAttribute"] = buffAttribute;

	thisObject["buffValue"] = buffValue;

	thisObject["buffDuration"] = buffDuration;

	j["FsBuffItem"] = thisObject;
}

FsBuffItemImplementation::FsBuffItemImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		setLoggingName("FsBuffItem");
	setLoggingName("FsBuffItem");
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		reuseTime = 3 * 24 * 60 * 60 * 1000;
	reuseTime = 3 * 24 * 60 * 60 * 1000;
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		buffAttribute = 0;
	buffAttribute = 0;
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		buffValue = 1000;
	buffValue = 1000;
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		buffDuration = 60 * 60;
	buffDuration = 60 * 60;
}

void FsBuffItemImplementation::setReuseTime(unsigned int time) {
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		reuseTime = time;
	reuseTime = time;
}

void FsBuffItemImplementation::setBuffAttribute(int attrib) {
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		buffAttribute = attrib;
	buffAttribute = attrib;
}

void FsBuffItemImplementation::setBuffValue(int value) {
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		buffValue = value;
	buffValue = value;
}

void FsBuffItemImplementation::setBuffDuration(unsigned int dur) {
	// server/zone/objects/tangible/misc/FsBuffItem.idl():  		buffDuration = dur;
	buffDuration = dur;
}

/*
 *	FsBuffItemAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


FsBuffItemAdapter::FsBuffItemAdapter(FsBuffItem* obj) : TangibleObjectAdapter(obj) {
}

void FsBuffItemAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETTIMESTRING__INT_:
		{
			unsigned int timestamp = inv->getUnsignedIntParameter();
			
			String _m_res = getTimeString(timestamp);
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_GETBUFFCRC__:
		{
			
			unsigned int _m_res = getBuffCRC();
			resp->insertInt(_m_res);
		}
		break;
	case RPC_SETREUSETIME__INT_:
		{
			unsigned int time = inv->getUnsignedIntParameter();
			
			setReuseTime(time);
			
		}
		break;
	case RPC_SETBUFFATTRIBUTE__INT_:
		{
			int attrib = inv->getSignedIntParameter();
			
			setBuffAttribute(attrib);
			
		}
		break;
	case RPC_SETBUFFVALUE__INT_:
		{
			int value = inv->getSignedIntParameter();
			
			setBuffValue(value);
			
		}
		break;
	case RPC_SETBUFFDURATION__INT_:
		{
			unsigned int dur = inv->getUnsignedIntParameter();
			
			setBuffDuration(dur);
			
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

int FsBuffItemAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<FsBuffItem*>(stub))->handleObjectMenuSelect(player, selectedID);
}

String FsBuffItemAdapter::getTimeString(unsigned int timestamp) {
	return (static_cast<FsBuffItem*>(stub))->getTimeString(timestamp);
}

unsigned int FsBuffItemAdapter::getBuffCRC() {
	return (static_cast<FsBuffItem*>(stub))->getBuffCRC();
}

void FsBuffItemAdapter::setReuseTime(unsigned int time) {
	(static_cast<FsBuffItem*>(stub))->setReuseTime(time);
}

void FsBuffItemAdapter::setBuffAttribute(int attrib) {
	(static_cast<FsBuffItem*>(stub))->setBuffAttribute(attrib);
}

void FsBuffItemAdapter::setBuffValue(int value) {
	(static_cast<FsBuffItem*>(stub))->setBuffValue(value);
}

void FsBuffItemAdapter::setBuffDuration(unsigned int dur) {
	(static_cast<FsBuffItem*>(stub))->setBuffDuration(dur);
}

/*
 *	FsBuffItemHelper
 */

FsBuffItemHelper* FsBuffItemHelper::staticInitializer = FsBuffItemHelper::instance();

FsBuffItemHelper::FsBuffItemHelper() {
	className = "FsBuffItem";

	Core::getObjectBroker()->registerClass(className, this);
}

void FsBuffItemHelper::finalizeHelper() {
	FsBuffItemHelper::finalize();
}

DistributedObject* FsBuffItemHelper::instantiateObject() {
	return new FsBuffItem(DummyConstructorParameter::instance());
}

DistributedObjectServant* FsBuffItemHelper::instantiateServant() {
	return new FsBuffItemImplementation();
}

DistributedObjectPOD* FsBuffItemHelper::instantiatePOD() {
	return new FsBuffItemPOD();
}

DistributedObjectAdapter* FsBuffItemHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FsBuffItemAdapter(static_cast<FsBuffItem*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

const char LuaFsBuffItem::className[] = "LuaFsBuffItem";

Luna<LuaFsBuffItem>::RegType LuaFsBuffItem::Register[] = {
	{ "_setObject", &LuaFsBuffItem::_setObject },
	{ "_getObject", &LuaFsBuffItem::_getObject },
	{ "fillAttributeList", &LuaFsBuffItem::fillAttributeList },
	{ "handleObjectMenuSelect", &LuaFsBuffItem::handleObjectMenuSelect },
	{ "fillObjectMenuResponse", &LuaFsBuffItem::fillObjectMenuResponse },
	{ "getTimeString", &LuaFsBuffItem::getTimeString },
	{ "getBuffCRC", &LuaFsBuffItem::getBuffCRC },
	{ "setReuseTime", &LuaFsBuffItem::setReuseTime },
	{ "setBuffAttribute", &LuaFsBuffItem::setBuffAttribute },
	{ "setBuffValue", &LuaFsBuffItem::setBuffValue },
	{ "setBuffDuration", &LuaFsBuffItem::setBuffDuration },
	{ 0, 0 }
};

LuaFsBuffItem::LuaFsBuffItem(lua_State *L) {
	realObject = static_cast<FsBuffItem*>(lua_touserdata(L, 1));
}

LuaFsBuffItem::~LuaFsBuffItem() {
}

int LuaFsBuffItem::_setObject(lua_State* L) {
	realObject = static_cast<FsBuffItem*>(lua_touserdata(L, -1));

	return 0;
}

int LuaFsBuffItem::_getObject(lua_State* L) {
	lua_pushlightuserdata(L, realObject.get());

	return 1;
}

int LuaFsBuffItem::fillAttributeList(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isuserdata(L, -1)) {
		if (lua_isuserdata(L, -2)) {
			if (parameterCount == 2) {
				AttributeListMessage* msg = static_cast<AttributeListMessage*>(lua_touserdata(L, -2));
				CreatureObject* player = static_cast<CreatureObject*>(lua_touserdata(L, -1));

				realObject->fillAttributeList(msg, player);

				return 0;
			} else {
				throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:fillAttributeList(userdata, userdata)'");
			}
		} else {
			throw LuaCallbackException(L, "invalid argument at 1 for lua method 'FsBuffItem:fillAttributeList(userdata, userdata)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:fillAttributeList(userdata, userdata)'");
	}
	return 0;
}

int LuaFsBuffItem::handleObjectMenuSelect(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (lua_isuserdata(L, -2)) {
			if (parameterCount == 2) {
				CreatureObject* player = static_cast<CreatureObject*>(lua_touserdata(L, -2));
				byte selectedID = lua_tointeger(L, -1);

				Locker _guard(realObject);

				int result = realObject->handleObjectMenuSelect(player, selectedID);

				lua_pushinteger(L, result);
				return 1;
			} else {
				throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:handleObjectMenuSelect(userdata, integer)'");
			}
		} else {
			throw LuaCallbackException(L, "invalid argument at 1 for lua method 'FsBuffItem:handleObjectMenuSelect(userdata, integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:handleObjectMenuSelect(userdata, integer)'");
	}
	return 0;
}

int LuaFsBuffItem::fillObjectMenuResponse(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isuserdata(L, -1)) {
		if (lua_isuserdata(L, -2)) {
			if (parameterCount == 2) {
				ObjectMenuResponse* menuResponse = static_cast<ObjectMenuResponse*>(lua_touserdata(L, -2));
				CreatureObject* player = static_cast<CreatureObject*>(lua_touserdata(L, -1));

				realObject->fillObjectMenuResponse(menuResponse, player);

				return 0;
			} else {
				throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:fillObjectMenuResponse(userdata, userdata)'");
			}
		} else {
			throw LuaCallbackException(L, "invalid argument at 1 for lua method 'FsBuffItem:fillObjectMenuResponse(userdata, userdata)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:fillObjectMenuResponse(userdata, userdata)'");
	}
	return 0;
}

int LuaFsBuffItem::getTimeString(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (parameterCount == 1) {
			unsigned int timestamp = lua_tointeger(L, -1);

			String result = realObject->getTimeString(timestamp);

			lua_pushstring(L, result.toCharArray());
			return 1;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:getTimeString(integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:getTimeString(integer)'");
	}
	return 0;
}

int LuaFsBuffItem::getBuffCRC(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (parameterCount == 0) {
		unsigned int result = realObject->getBuffCRC();

		lua_pushinteger(L, result);
		return 1;
	} else {
		throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:getBuffCRC()'");
	}
	return 0;
}

int LuaFsBuffItem::setReuseTime(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (parameterCount == 1) {
			unsigned int time = lua_tointeger(L, -1);

			Locker _guard(realObject);

			realObject->setReuseTime(time);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:setReuseTime(integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:setReuseTime(integer)'");
	}
	return 0;
}

int LuaFsBuffItem::setBuffAttribute(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (parameterCount == 1) {
			int attrib = lua_tointeger(L, -1);

			Locker _guard(realObject);

			realObject->setBuffAttribute(attrib);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:setBuffAttribute(integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:setBuffAttribute(integer)'");
	}
	return 0;
}

int LuaFsBuffItem::setBuffValue(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (parameterCount == 1) {
			int value = lua_tointeger(L, -1);

			Locker _guard(realObject);

			realObject->setBuffValue(value);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:setBuffValue(integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:setBuffValue(integer)'");
	}
	return 0;
}

int LuaFsBuffItem::setBuffDuration(lua_State *L) {
	int parameterCount = lua_gettop(L) - 1;
	
	if (lua_isnumber(L, -1)) {
		if (parameterCount == 1) {
			unsigned int dur = lua_tointeger(L, -1);

			Locker _guard(realObject);

			realObject->setBuffDuration(dur);

			return 0;
		} else {
			throw LuaCallbackException(L, "invalid argument count " + String::valueOf(parameterCount) + " for lua method 'FsBuffItem:setBuffDuration(integer)'");
		}
	} else {
		throw LuaCallbackException(L, "invalid argument at 0 for lua method 'FsBuffItem:setBuffDuration(integer)'");
	}
	return 0;
}

/*
 *	FsBuffItemPOD
 */

FsBuffItemPOD::~FsBuffItemPOD() {
	finalize();
}

FsBuffItemPOD::FsBuffItemPOD(void) {
	_className = "FsBuffItem";
}


void FsBuffItemPOD::writeJSON(nlohmann::json& j) {
	TangibleObjectPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (reuseTime)
		thisObject["reuseTime"] = reuseTime.value();

	if (buffAttribute)
		thisObject["buffAttribute"] = buffAttribute.value();

	if (buffValue)
		thisObject["buffValue"] = buffValue.value();

	if (buffDuration)
		thisObject["buffDuration"] = buffDuration.value();

	j["FsBuffItem"] = thisObject;
}


void FsBuffItemPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FsBuffItemPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FsBuffItemPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (reuseTime) {
	_nameHashCode = 0xfff1a09a; //FsBuffItem.reuseTime
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&reuseTime.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (buffAttribute) {
	_nameHashCode = 0x3bbc2073; //FsBuffItem.buffAttribute
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&buffAttribute.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (buffValue) {
	_nameHashCode = 0xc6487dd2; //FsBuffItem.buffValue
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&buffValue.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (buffDuration) {
	_nameHashCode = 0x68f327db; //FsBuffItem.buffDuration
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&buffDuration.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool FsBuffItemPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xfff1a09a: //FsBuffItem.reuseTime
		{
			unsigned int _mnreuseTime;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mnreuseTime, stream);
			reuseTime = std::move(_mnreuseTime);
		}
		return true;

	case 0x3bbc2073: //FsBuffItem.buffAttribute
		{
			int _mnbuffAttribute;
			TypeInfo<int >::parseFromBinaryStream(&_mnbuffAttribute, stream);
			buffAttribute = std::move(_mnbuffAttribute);
		}
		return true;

	case 0xc6487dd2: //FsBuffItem.buffValue
		{
			int _mnbuffValue;
			TypeInfo<int >::parseFromBinaryStream(&_mnbuffValue, stream);
			buffValue = std::move(_mnbuffValue);
		}
		return true;

	case 0x68f327db: //FsBuffItem.buffDuration
		{
			unsigned int _mnbuffDuration;
			TypeInfo<unsigned int >::parseFromBinaryStream(&_mnbuffDuration, stream);
			buffDuration = std::move(_mnbuffDuration);
		}
		return true;

	}

	return false;
}

void FsBuffItemPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(FsBuffItemPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void FsBuffItemPOD::writeObjectCompact(ObjectOutputStream* stream) {
	TangibleObjectPOD::writeObjectCompact(stream);

	TypeInfo<unsigned int >::toBinaryStream(&reuseTime.value(), stream);

	TypeInfo<int >::toBinaryStream(&buffAttribute.value(), stream);

	TypeInfo<int >::toBinaryStream(&buffValue.value(), stream);

	TypeInfo<unsigned int >::toBinaryStream(&buffDuration.value(), stream);


}

