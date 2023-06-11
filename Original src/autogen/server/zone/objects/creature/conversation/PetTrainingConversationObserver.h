/*
 *	autogen/server/zone/objects/creature/conversation/PetTrainingConversationObserver.h generated by engine3 IDL compiler 0.70
 */

#ifndef PETTRAININGCONVERSATIONOBSERVER_H_
#define PETTRAININGCONVERSATIONOBSERVER_H_

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

#include "server/zone/objects/creature/conversation/ConversationObserver.h"

#include "server/zone/objects/creature/conversation/screenhandlers/PetTrainingScreenHandler.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class PetTrainingConversationObserver : public ConversationObserver {
public:
	PetTrainingConversationObserver(unsigned int convoTemplateCRC);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PetTrainingConversationObserver(DummyConstructorParameter* param);

	virtual ~PetTrainingConversationObserver();

	friend class PetTrainingConversationObserverHelper;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class PetTrainingConversationObserverImplementation : public ConversationObserverImplementation {
	PetTrainingScreenHandler screenHandler;

public:
	PetTrainingConversationObserverImplementation(unsigned int convoTemplateCRC);

	PetTrainingConversationObserverImplementation(DummyConstructorParameter* param);

	WeakReference<PetTrainingConversationObserver*> _this;

	operator const PetTrainingConversationObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PetTrainingConversationObserverImplementation();

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

	friend class PetTrainingConversationObserver;
};

class PetTrainingConversationObserverAdapter : public ConversationObserverAdapter {
public:
	PetTrainingConversationObserverAdapter(PetTrainingConversationObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class PetTrainingConversationObserverHelper : public DistributedObjectClassHelper, public Singleton<PetTrainingConversationObserverHelper> {
	static PetTrainingConversationObserverHelper* staticInitializer;

public:
	PetTrainingConversationObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PetTrainingConversationObserverHelper>;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class PetTrainingConversationObserverPOD : public ConversationObserverPOD {
public:
	Optional<PetTrainingScreenHandler> screenHandler;

	String _className;
	PetTrainingConversationObserverPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~PetTrainingConversationObserverPOD();

};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

#endif /*PETTRAININGCONVERSATIONOBSERVERPOD_H_*/