/*
 *	autogen/server/zone/objects/intangible/ControlDevice.h generated by engine3 IDL compiler 0.70
 */

#ifndef CONTROLDEVICE_H_
#define CONTROLDEVICE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "system/util/Optional.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
#include "engine/util/json_utils.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

class CreatureObjectPOD;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

class TangibleObjectPOD;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#include "engine/lua/Luna.h"

#include "server/zone/objects/scene/variables/ContainerPermissions.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class ControlDevice : public IntangibleObject {
public:
	ControlDevice();

	/**
	 * Updates this object to database (calls updatesToDatabaseAllObjects())
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param startTask if true, queues a new update task
	 */
	void updateToDatabaseAllObjects(bool startTask);

	void storeObject(CreatureObject* player, bool force = false);

	void generateObject(CreatureObject* player);

	void callObject(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	void setControlledObject(TangibleObject* object);

	TangibleObject* getControlledObject();

	bool isControlDevice();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ControlDevice(DummyConstructorParameter* param);

	virtual ~ControlDevice();

	friend class ControlDeviceHelper;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class ControlDeviceImplementation : public IntangibleObjectImplementation {
protected:
	ManagedWeakReference<TangibleObject* > controlledObject;

public:
	ControlDeviceImplementation();

	ControlDeviceImplementation(DummyConstructorParameter* param);

	/**
	 * Updates this object to database (calls updatesToDatabaseAllObjects())
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param startTask if true, queues a new update task
	 */
	void updateToDatabaseAllObjects(bool startTask);

	virtual void storeObject(CreatureObject* player, bool force = false);

	virtual void generateObject(CreatureObject* player);

	virtual void callObject(CreatureObject* player);

	virtual bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	void setControlledObject(TangibleObject* object);

	TangibleObject* getControlledObject();

	bool isControlDevice();

	WeakReference<ControlDevice*> _this;

	operator const ControlDevice*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~ControlDeviceImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class ControlDevice;
};

class ControlDeviceAdapter : public IntangibleObjectAdapter {
public:
	ControlDeviceAdapter(ControlDevice* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void updateToDatabaseAllObjects(bool startTask);

	void storeObject(CreatureObject* player, bool force);

	void generateObject(CreatureObject* player);

	void callObject(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	void setControlledObject(TangibleObject* object);

	TangibleObject* getControlledObject();

	bool isControlDevice();

};

class ControlDeviceHelper : public DistributedObjectClassHelper, public Singleton<ControlDeviceHelper> {
	static ControlDeviceHelper* staticInitializer;

public:
	ControlDeviceHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ControlDeviceHelper>;
};

class LuaControlDevice {
public:
	static const char className[];
	static Luna<LuaControlDevice>::RegType Register[];

	LuaControlDevice(lua_State *L);
	virtual ~LuaControlDevice();

	int _setObject(lua_State *L);
	int _getObject(lua_State *L);
	int updateToDatabaseAllObjects(lua_State *L);
	int storeObject(lua_State *L);
	int generateObject(lua_State *L);
	int callObject(lua_State *L);
	int canBeTradedTo(lua_State *L);
	int setControlledObject(lua_State *L);
	int getControlledObject(lua_State *L);
	int isControlDevice(lua_State *L);

	Reference<ControlDevice*> realObject;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class ControlDevicePOD : public IntangibleObjectPOD {
public:
	Optional<ManagedWeakReference<TangibleObjectPOD* >> controlledObject;

	String _className;
	ControlDevicePOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ControlDevicePOD();

};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#endif /*CONTROLDEVICEPOD_H_*/
