/*
 *	autogen/server/zone/objects/ship/ShipObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef SHIPOBJECT_H_
#define SHIPOBJECT_H_

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

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/CloseObjectsVector.h"

#include "server/zone/objects/scene/variables/DeltaFloatVariable.h"

#include "server/zone/objects/scene/variables/DeltaVectorMap.h"

#include "server/zone/objects/tangible/TangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace ship {

class ShipObject : public TangibleObject {
public:
	ShipObject();

	unsigned short getUniqueID();

	void initializeTransientMembers();

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer = true);

	void sendBaselinesTo(SceneObject* player);

	void setMaxYawAcceleration(float radians, bool notifyClient = true);

	void setCurrentYawAcceleration(float scale, bool notifyClient = true);

	void setMaxPitchAcceleration(float radians, bool notifyClient = true);

	void setCurrentPitchAcceleration(float scale, bool notifyClient = true);

	void setMaxRollAcceleration(float radians, bool notifyClient = true);

	void setCurrentRollAcceleration(float scale, bool notifyClient = true);

	float getMaxYawAcceleration() const;

	float getMaxRollAcceleration() const;

	float getMaxPitchAcceleration() const;

	float getTotalMass() const;

	float getMaxSpeed() const;

	bool isShipObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ShipObject(DummyConstructorParameter* param);

	virtual ~ShipObject();

	friend class ShipObjectHelper;
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

class ShipObjectImplementation : public TangibleObjectImplementation {
protected:
	float totalMass;

	float currentMass;

	/**
	 * stored in radians
	 */
	DeltaFloatVariable<'SHIP', 6, 6 > maxYawAcceleration;

	/**
	 * stored in radians
	 */
	DeltaFloatVariable<'SHIP', 6, 7 > maxPitchAcceleration;

	/**
	 * stored in radians
	 */
	DeltaFloatVariable<'SHIP', 6, 8 > maxRollAcceleration;

	/**
	 * scale factor between 0 and 1
	 */
	DeltaFloatVariable<'SHIP', 6, 9 > currentYawAcceleration;

	/**
	 * scale factor between 0 and 1
	 */
	DeltaFloatVariable<'SHIP', 6, 10 > currentPitchAcceleration;

	/**
	 * scale factor between 0 and 1
	 */
	DeltaFloatVariable<'SHIP', 6, 11 > currentRollAcceleration;

	float maxSpeed;

	/**
	 * Maps installed components to slots
	 */
	DeltaVectorMap<unsigned int, unsigned int> shipComponents;

public:
	ShipObjectImplementation();

	ShipObjectImplementation(DummyConstructorParameter* param);

	unsigned short getUniqueID();

	void initializeTransientMembers();

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer = true);

	void sendBaselinesTo(SceneObject* player);

	void setMaxYawAcceleration(float radians, bool notifyClient = true);

	void setCurrentYawAcceleration(float scale, bool notifyClient = true);

	void setMaxPitchAcceleration(float radians, bool notifyClient = true);

	void setCurrentPitchAcceleration(float scale, bool notifyClient = true);

	void setMaxRollAcceleration(float radians, bool notifyClient = true);

	void setCurrentRollAcceleration(float scale, bool notifyClient = true);

	float getMaxYawAcceleration() const;

	float getMaxRollAcceleration() const;

	float getMaxPitchAcceleration() const;

	float getTotalMass() const;

	float getMaxSpeed() const;

	bool isShipObject();

	WeakReference<ShipObject*> _this;

	operator const ShipObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ShipObjectImplementation();

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

	friend class ShipObject;
};

class ShipObjectAdapter : public TangibleObjectAdapter {
public:
	ShipObjectAdapter(ShipObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned short getUniqueID();

	void initializeTransientMembers();

	void sendTo(SceneObject* player, bool doClose, bool forceLoadContainer);

	void sendBaselinesTo(SceneObject* player);

	void setMaxYawAcceleration(float radians, bool notifyClient);

	void setCurrentYawAcceleration(float scale, bool notifyClient);

	void setMaxPitchAcceleration(float radians, bool notifyClient);

	void setCurrentPitchAcceleration(float scale, bool notifyClient);

	void setMaxRollAcceleration(float radians, bool notifyClient);

	void setCurrentRollAcceleration(float scale, bool notifyClient);

	float getMaxYawAcceleration() const;

	float getMaxRollAcceleration() const;

	float getMaxPitchAcceleration() const;

	float getTotalMass() const;

	float getMaxSpeed() const;

	bool isShipObject();

};

class ShipObjectHelper : public DistributedObjectClassHelper, public Singleton<ShipObjectHelper> {
	static ShipObjectHelper* staticInitializer;

public:
	ShipObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ShipObjectHelper>;
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

class ShipObjectPOD : public TangibleObjectPOD {
public:
	Optional<float> totalMass;

	Optional<float> currentMass;

	Optional<DeltaFloatVariable<'SHIP', 6, 6 >> maxYawAcceleration;

	Optional<DeltaFloatVariable<'SHIP', 6, 7 >> maxPitchAcceleration;

	Optional<DeltaFloatVariable<'SHIP', 6, 8 >> maxRollAcceleration;

	Optional<DeltaFloatVariable<'SHIP', 6, 9 >> currentYawAcceleration;

	Optional<DeltaFloatVariable<'SHIP', 6, 10 >> currentPitchAcceleration;

	Optional<DeltaFloatVariable<'SHIP', 6, 11 >> currentRollAcceleration;

	Optional<float> maxSpeed;

	Optional<DeltaVectorMap<unsigned int, unsigned int>> shipComponents;

	String _className;
	ShipObjectPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ShipObjectPOD();

};

} // namespace ship
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::ship;

#endif /*SHIPOBJECTPOD_H_*/
