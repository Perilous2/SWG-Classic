/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef PHARMACEUTICALOBJECT_H_
#define PHARMACEUTICALOBJECT_H_

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

#include "templates/SharedObjectTemplate.h"

#include "system/lang/String.h"

#include "server/zone/objects/tangible/TangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class PharmaceuticalObject : public TangibleObject {
public:
	PharmaceuticalObject();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	int getMedicineUseRequired();

	float getRange(CreatureObject* creature = NULL);

	bool isArea();

	float getArea();

	bool isPharmaceuticalObject();

	bool isStimPack();

	bool isPetStimPack();

	bool isDroidRepairKit();

	bool isRangedStimPack();

	bool isEnhancePack();

	bool isWoundPack();

	bool isDroidReconstructionKit();

	bool isCurePack();

	bool isStatePack();

	bool isRevivePack();

	bool isVitalityPack();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PharmaceuticalObject(DummyConstructorParameter* param);

	virtual ~PharmaceuticalObject();

	friend class PharmaceuticalObjectHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class PharmaceuticalObjectImplementation : public TangibleObjectImplementation {
protected:
	int medicineUseRequired;

public:
	PharmaceuticalObjectImplementation();

	PharmaceuticalObjectImplementation(DummyConstructorParameter* param);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	int getMedicineUseRequired();

	virtual float getRange(CreatureObject* creature = NULL);

	virtual bool isArea();

	virtual float getArea();

	bool isPharmaceuticalObject();

	virtual bool isStimPack();

	virtual bool isPetStimPack();

	virtual bool isDroidRepairKit();

	virtual bool isRangedStimPack();

	virtual bool isEnhancePack();

	virtual bool isWoundPack();

	virtual bool isDroidReconstructionKit();

	virtual bool isCurePack();

	virtual bool isStatePack();

	virtual bool isRevivePack();

	virtual bool isVitalityPack();

	WeakReference<PharmaceuticalObject*> _this;

	operator const PharmaceuticalObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~PharmaceuticalObjectImplementation();

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

	friend class PharmaceuticalObject;
};

class PharmaceuticalObjectAdapter : public TangibleObjectAdapter {
public:
	PharmaceuticalObjectAdapter(PharmaceuticalObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getMedicineUseRequired();

	float getRange(CreatureObject* creature);

	bool isArea();

	float getArea();

	bool isPharmaceuticalObject();

	bool isStimPack();

	bool isPetStimPack();

	bool isDroidRepairKit();

	bool isRangedStimPack();

	bool isEnhancePack();

	bool isWoundPack();

	bool isDroidReconstructionKit();

	bool isCurePack();

	bool isStatePack();

	bool isRevivePack();

	bool isVitalityPack();

};

class PharmaceuticalObjectHelper : public DistributedObjectClassHelper, public Singleton<PharmaceuticalObjectHelper> {
	static PharmaceuticalObjectHelper* staticInitializer;

public:
	PharmaceuticalObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PharmaceuticalObjectHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class PharmaceuticalObjectPOD : public TangibleObjectPOD {
public:
	Optional<int> medicineUseRequired;

	String _className;
	PharmaceuticalObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~PharmaceuticalObjectPOD();

};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*PHARMACEUTICALOBJECTPOD_H_*/
