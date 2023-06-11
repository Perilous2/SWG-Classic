/*
 *	autogen/server/zone/objects/player/sui/messagebox/SuiMessageBox.h generated by engine3 IDL compiler 0.70
 */

#ifndef SUIMESSAGEBOX_H_
#define SUIMESSAGEBOX_H_

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

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiMessageBox : public SuiBox {
public:
	SuiMessageBox(CreatureObject* player, unsigned int windowType);

	BaseMessage* generateMessage();

	bool isMessageBox();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiMessageBox(DummyConstructorParameter* param);

	virtual ~SuiMessageBox();

	friend class SuiMessageBoxHelper;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiMessageBoxImplementation : public SuiBoxImplementation {

public:
	SuiMessageBoxImplementation(CreatureObject* player, unsigned int windowType);

	SuiMessageBoxImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	bool isMessageBox();

	WeakReference<SuiMessageBox*> _this;

	operator const SuiMessageBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiMessageBoxImplementation();

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

	friend class SuiMessageBox;
};

class SuiMessageBoxAdapter : public SuiBoxAdapter {
public:
	SuiMessageBoxAdapter(SuiMessageBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isMessageBox();

};

class SuiMessageBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiMessageBoxHelper> {
	static SuiMessageBoxHelper* staticInitializer;

public:
	SuiMessageBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiMessageBoxHelper>;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiMessageBoxPOD : public SuiBoxPOD {
public:

	SuiMessageBoxPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SuiMessageBoxPOD();

};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

#endif /*SUIMESSAGEBOXPOD_H_*/