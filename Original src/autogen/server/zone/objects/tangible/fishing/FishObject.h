/*
 *	autogen/server/zone/objects/tangible/fishing/FishObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef FISHOBJECT_H_
#define FISHOBJECT_H_

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

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

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

#include "server/zone/objects/tangible/TangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishObject : public TangibleObject {
public:
	FishObject();

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	/**
	 * Fills the radial options
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Filet a fish
	 * Takes objects in the Container and sends them to the player invenvotry
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player The player to whom to send the items
	 */
	void filet(CreatureObject* player);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FishObject(DummyConstructorParameter* param);

	virtual ~FishObject();

	friend class FishObjectHelper;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishObjectImplementation : public TangibleObjectImplementation {
protected:
	String player;

	String zoneName;

	String timeCaught;

	float length;

public:
	FishObjectImplementation();

	FishObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	/**
	 * Fills the radial options
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Filet a fish
	 * Takes objects in the Container and sends them to the player invenvotry
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player The player to whom to send the items
	 */
	void filet(CreatureObject* player);

	WeakReference<FishObject*> _this;

	operator const FishObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~FishObjectImplementation();

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

	friend class FishObject;
};

class FishObjectAdapter : public TangibleObjectAdapter {
public:
	FishObjectAdapter(FishObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void filet(CreatureObject* player);

};

class FishObjectHelper : public DistributedObjectClassHelper, public Singleton<FishObjectHelper> {
	static FishObjectHelper* staticInitializer;

public:
	FishObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishObjectHelper>;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishObjectPOD : public TangibleObjectPOD {
public:
	Optional<String> player;

	Optional<String> zoneName;

	Optional<String> timeCaught;

	Optional<float> length;

	String _className;
	FishObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~FishObjectPOD();

};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

#endif /*FISHOBJECTPOD_H_*/
