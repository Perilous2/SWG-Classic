/*
 *	autogen/server/zone/objects/tangible/component/weapon/De10BarrelComponent.h generated by engine3 IDL compiler 0.70
 */

#ifndef DE10BARRELCOMPONENT_H_
#define DE10BARRELCOMPONENT_H_

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/component/Component.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {

class De10BarrelComponent : public Component {
public:
	De10BarrelComponent();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	De10BarrelComponent(DummyConstructorParameter* param);

	virtual ~De10BarrelComponent();

	friend class De10BarrelComponentHelper;
};

} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {

class De10BarrelComponentImplementation : public ComponentImplementation {

public:
	De10BarrelComponentImplementation();

	De10BarrelComponentImplementation(DummyConstructorParameter* param);

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	WeakReference<De10BarrelComponent*> _this;

	operator const De10BarrelComponent*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~De10BarrelComponentImplementation();

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

	friend class De10BarrelComponent;
};

class De10BarrelComponentAdapter : public ComponentAdapter {
public:
	De10BarrelComponentAdapter(De10BarrelComponent* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

};

class De10BarrelComponentHelper : public DistributedObjectClassHelper, public Singleton<De10BarrelComponentHelper> {
	static De10BarrelComponentHelper* staticInitializer;

public:
	De10BarrelComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<De10BarrelComponentHelper>;
};

} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {

class De10BarrelComponentPOD : public ComponentPOD {
public:

	De10BarrelComponentPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~De10BarrelComponentPOD();

};

} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component;

#endif /*DE10BARRELCOMPONENTPOD_H_*/
