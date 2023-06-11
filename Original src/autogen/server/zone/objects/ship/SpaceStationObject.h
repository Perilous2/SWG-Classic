/*
 *	autogen/server/zone/objects/ship/SpaceStationObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef SPACESTATIONOBJECT_H_
#define SPACESTATIONOBJECT_H_

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

#include "server/zone/objects/ship/ShipObject.h"

namespace server {
namespace zone {
namespace objects {
namespace ship {

class SpaceStationObject : public ShipObject {
public:
	SpaceStationObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SpaceStationObject(DummyConstructorParameter* param);

	virtual ~SpaceStationObject();

	friend class SpaceStationObjectHelper;
};

} // namespace ship
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::ship;

namespace server {
namespace zone {
namespace objects {
namespace ship {

class SpaceStationObjectImplementation : public ShipObjectImplementation {

public:
	SpaceStationObjectImplementation();

	SpaceStationObjectImplementation(DummyConstructorParameter* param);

	WeakReference<SpaceStationObject*> _this;

	operator const SpaceStationObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SpaceStationObjectImplementation();

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

	friend class SpaceStationObject;
};

class SpaceStationObjectAdapter : public ShipObjectAdapter {
public:
	SpaceStationObjectAdapter(SpaceStationObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class SpaceStationObjectHelper : public DistributedObjectClassHelper, public Singleton<SpaceStationObjectHelper> {
	static SpaceStationObjectHelper* staticInitializer;

public:
	SpaceStationObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SpaceStationObjectHelper>;
};

} // namespace ship
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::ship;

namespace server {
namespace zone {
namespace objects {
namespace ship {

class SpaceStationObjectPOD : public ShipObjectPOD {
public:

	SpaceStationObjectPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SpaceStationObjectPOD();

};

} // namespace ship
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::ship;

#endif /*SPACESTATIONOBJECTPOD_H_*/