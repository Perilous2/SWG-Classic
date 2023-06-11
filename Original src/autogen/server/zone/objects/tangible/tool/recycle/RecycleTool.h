/*
 *	autogen/server/zone/objects/tangible/tool/recycle/RecycleTool.h generated by engine3 IDL compiler 0.70
 */

#ifndef RECYCLETOOL_H_
#define RECYCLETOOL_H_

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
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "templates/SharedObjectTemplate.h"

#include "engine/log/Logger.h"

#include "server/zone/objects/tangible/Container.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace recycle {

class RecycleTool : public Container {
public:
	static const int NOTYPE = -1;

	static const int CHEMICAL = 1;

	static const int WATER = 2;

	static const int CHEMICALS = 3;

	static const int SOLIDFUEL = 4;

	static const int RADIOACTIVE = 5;

	static const int CREATURE = 6;

	static const int HIDE = 7;

	static const int MEAT = 8;

	static const int BONE = 9;

	static const int HORN = 10;

	static const int SEAFOOD = 11;

	static const int MILK = 12;

	static const int FLORA = 13;

	static const int CEREAL = 14;

	static const int FRUIT = 15;

	static const int VEGETABLE = 16;

	static const int WOOD = 17;

	static const int METAL = 18;

	static const int FERROUS = 19;

	static const int NONFERROUS = 20;

	static const int ORE = 21;

	static const int IGNEOUS = 22;

	static const int SEDIMENTARY = 23;

	static const int GEMSTONE = 24;

	RecycleTool();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	int getToolType();

	int getSelectedResource();

	void setSelectedResource(int res);

	String getSelectedTypeName();

	void setSelectedTypeName(String& res);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RecycleTool(DummyConstructorParameter* param);

	virtual ~RecycleTool();

	friend class RecycleToolHelper;
};

} // namespace recycle
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::recycle;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace recycle {

class RecycleToolImplementation : public ContainerImplementation {
protected:
	int toolType;

	int selectedResource;

	String selectedTypeName;

public:
	static const int NOTYPE = -1;

	static const int CHEMICAL = 1;

	static const int WATER = 2;

	static const int CHEMICALS = 3;

	static const int SOLIDFUEL = 4;

	static const int RADIOACTIVE = 5;

	static const int CREATURE = 6;

	static const int HIDE = 7;

	static const int MEAT = 8;

	static const int BONE = 9;

	static const int HORN = 10;

	static const int SEAFOOD = 11;

	static const int MILK = 12;

	static const int FLORA = 13;

	static const int CEREAL = 14;

	static const int FRUIT = 15;

	static const int VEGETABLE = 16;

	static const int WOOD = 17;

	static const int METAL = 18;

	static const int FERROUS = 19;

	static const int NONFERROUS = 20;

	static const int ORE = 21;

	static const int IGNEOUS = 22;

	static const int SEDIMENTARY = 23;

	static const int GEMSTONE = 24;

	RecycleToolImplementation();

	RecycleToolImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	int getToolType();

	int getSelectedResource();

	void setSelectedResource(int res);

	String getSelectedTypeName();

	void setSelectedTypeName(String& res);

	WeakReference<RecycleTool*> _this;

	operator const RecycleTool*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~RecycleToolImplementation();

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

	friend class RecycleTool;
};

class RecycleToolAdapter : public ContainerAdapter {
public:
	RecycleToolAdapter(RecycleTool* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int getToolType();

	int getSelectedResource();

	void setSelectedResource(int res);

	String getSelectedTypeName();

	void setSelectedTypeName(String& res);

};

class RecycleToolHelper : public DistributedObjectClassHelper, public Singleton<RecycleToolHelper> {
	static RecycleToolHelper* staticInitializer;

public:
	RecycleToolHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RecycleToolHelper>;
};

} // namespace recycle
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::recycle;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace recycle {

class RecycleToolPOD : public ContainerPOD {
public:
	Optional<int> toolType;

	Optional<int> selectedResource;

	Optional<String> selectedTypeName;

	String _className;
	RecycleToolPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~RecycleToolPOD();

};

} // namespace recycle
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::recycle;

#endif /*RECYCLETOOLPOD_H_*/