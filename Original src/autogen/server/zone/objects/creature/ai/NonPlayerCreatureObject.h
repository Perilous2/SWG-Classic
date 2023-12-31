/*
 *	autogen/server/zone/objects/creature/ai/NonPlayerCreatureObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef NONPLAYERCREATUREOBJECT_H_
#define NONPLAYERCREATUREOBJECT_H_

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

#include "server/zone/objects/creature/ai/AiAgent.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class NonPlayerCreatureObject : public AiAgent {
public:
	NonPlayerCreatureObject();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	bool isNonPlayerCreatureObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	NonPlayerCreatureObject(DummyConstructorParameter* param);

	virtual ~NonPlayerCreatureObject();

	friend class NonPlayerCreatureObjectHelper;
};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class NonPlayerCreatureObjectImplementation : public AiAgentImplementation {

public:
	NonPlayerCreatureObjectImplementation();

	NonPlayerCreatureObjectImplementation(DummyConstructorParameter* param);

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	bool isNonPlayerCreatureObject();

	WeakReference<NonPlayerCreatureObject*> _this;

	operator const NonPlayerCreatureObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~NonPlayerCreatureObjectImplementation();

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

	friend class NonPlayerCreatureObject;
};

class NonPlayerCreatureObjectAdapter : public AiAgentAdapter {
public:
	NonPlayerCreatureObjectAdapter(NonPlayerCreatureObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	bool isNonPlayerCreatureObject();

};

class NonPlayerCreatureObjectHelper : public DistributedObjectClassHelper, public Singleton<NonPlayerCreatureObjectHelper> {
	static NonPlayerCreatureObjectHelper* staticInitializer;

public:
	NonPlayerCreatureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<NonPlayerCreatureObjectHelper>;
};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class NonPlayerCreatureObjectPOD : public AiAgentPOD {
public:

	NonPlayerCreatureObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~NonPlayerCreatureObjectPOD();

};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

#endif /*NONPLAYERCREATUREOBJECTPOD_H_*/
