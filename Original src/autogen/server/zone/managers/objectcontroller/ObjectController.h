/*
 *	autogen/server/zone/managers/objectcontroller/ObjectController.h generated by engine3 IDL compiler 0.70
 */

#ifndef OBJECTCONTROLLER_H_
#define OBJECTCONTROLLER_H_

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
namespace managers {
namespace objectcontroller {
namespace command {

class CommandList;

} // namespace command
} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller::command;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {
namespace command {

class CommandConfigManager;

} // namespace command
} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller::command;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace commands {

class QueueCommand;

} // namespace commands
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::commands;

namespace server {
namespace zone {

class ZoneProcessServer;

class ZoneProcessServerPOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

class SceneObjectPOD;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

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

#include "engine/core/ManagedService.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController : public ManagedService {
public:
	ObjectController(ZoneProcessServer* srv);

	void loadCommands();

	bool transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient = false, bool allowOverflow = false);

	/**
	 * Activates a queue command from a creature object
	 * @param object creature object that the command will be run on
	 * @param actionCRC crc of the command to run
	 * @param actionCount count of the command
	 * @paramt targetID target object id
	 * @param arguments arguments of the command
	 * @returns time in seconds of command execution
	 */
	float activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) const;

	void addQueueCommand(QueueCommand* command);

	const QueueCommand* getQueueCommand(const String& name) const;

	const QueueCommand* getQueueCommand(unsigned int crc) const;

	void logAdminCommand(SceneObject* object, const QueueCommand* command, unsigned long long targetID, const UnicodeString& argumets) const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ObjectController(DummyConstructorParameter* param);

	virtual ~ObjectController();

	friend class ObjectControllerHelper;
};

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectControllerImplementation : public ManagedServiceImplementation, public Logger {
	ManagedReference<ZoneProcessServer* > server;

	Reference<CommandConfigManager* > configManager;

	Reference<CommandList* > queueCommands;

	Logger adminLog;

public:
	ObjectControllerImplementation(ZoneProcessServer* srv);

	ObjectControllerImplementation(DummyConstructorParameter* param);

	void finalize();

	void loadCommands();

	bool transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient = false, bool allowOverflow = false);

	/**
	 * Activates a queue command from a creature object
	 * @param object creature object that the command will be run on
	 * @param actionCRC crc of the command to run
	 * @param actionCount count of the command
	 * @paramt targetID target object id
	 * @param arguments arguments of the command
	 * @returns time in seconds of command execution
	 */
	float activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) const;

	void addQueueCommand(QueueCommand* command);

	const QueueCommand* getQueueCommand(const String& name) const;

	const QueueCommand* getQueueCommand(unsigned int crc) const;

	void logAdminCommand(SceneObject* object, const QueueCommand* command, unsigned long long targetID, const UnicodeString& argumets) const;

	WeakReference<ObjectController*> _this;

	operator const ObjectController*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ObjectControllerImplementation();

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

	friend class ObjectController;
};

class ObjectControllerAdapter : public ManagedServiceAdapter {
public:
	ObjectControllerAdapter(ObjectController* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void loadCommands();

	bool transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient, bool allowOverflow);

	float activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) const;

};

class ObjectControllerHelper : public DistributedObjectClassHelper, public Singleton<ObjectControllerHelper> {
	static ObjectControllerHelper* staticInitializer;

public:
	ObjectControllerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ObjectControllerHelper>;
};

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectControllerPOD : public ManagedServicePOD {
public:
	String _className;
	ObjectControllerPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ObjectControllerPOD();

};

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

#endif /*OBJECTCONTROLLERPOD_H_*/
