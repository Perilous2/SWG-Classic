/*
 *	autogen/server/zone/objects/building/recreation/RecreationBuildingObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef RECREATIONBUILDINGOBJECT_H_
#define RECREATIONBUILDINGOBJECT_H_

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

#include "server/zone/objects/building/BuildingObject.h"

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace recreation {

class RecreationBuildingObject : public BuildingObject {
public:
	RecreationBuildingObject();

	bool isRecreationalBuildingObject() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RecreationBuildingObject(DummyConstructorParameter* param);

	virtual ~RecreationBuildingObject();

	friend class RecreationBuildingObjectHelper;
};

} // namespace recreation
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::recreation;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace recreation {

class RecreationBuildingObjectImplementation : public BuildingObjectImplementation {

public:
	RecreationBuildingObjectImplementation();

	RecreationBuildingObjectImplementation(DummyConstructorParameter* param);

	bool isRecreationalBuildingObject() const;

	WeakReference<RecreationBuildingObject*> _this;

	operator const RecreationBuildingObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RecreationBuildingObjectImplementation();

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

	friend class RecreationBuildingObject;
};

class RecreationBuildingObjectAdapter : public BuildingObjectAdapter {
public:
	RecreationBuildingObjectAdapter(RecreationBuildingObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isRecreationalBuildingObject() const;

};

class RecreationBuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<RecreationBuildingObjectHelper> {
	static RecreationBuildingObjectHelper* staticInitializer;

public:
	RecreationBuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RecreationBuildingObjectHelper>;
};

} // namespace recreation
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::recreation;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace recreation {

class RecreationBuildingObjectPOD : public BuildingObjectPOD {
public:

	RecreationBuildingObjectPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~RecreationBuildingObjectPOD();

};

} // namespace recreation
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::recreation;

#endif /*RECREATIONBUILDINGOBJECTPOD_H_*/
