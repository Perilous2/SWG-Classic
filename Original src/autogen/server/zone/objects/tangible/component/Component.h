/*
 *	autogen/server/zone/objects/tangible/component/Component.h generated by engine3 IDL compiler 0.70
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

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

#include "engine/lua/Luna.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {

class Component : public TangibleObject {
public:
	Component();

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isComponent();

	void generateLootStats(const String& lootstring, int level);

	bool compare(Component* inCmpo);

	bool hasKey(const String& key);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void addProperty(const String& attributeName, const float value, const int precision, const String& craftingTitle, const bool hidden);

	float getAttributeValue(const String& attributeName);

	int getAttributePrecision(const String& attributeName);

	String getAttributeGroup(const String& attributeName);

	bool getAttributeHidden(const String& attributeName);

	void setPropertyToHidden(const String& property);

	void addProperty(const String& attribute, const float value, const int precision, const String& title);

	int getPropertyCount();

	String getProperty(const int j);

	bool changeAttributeValue(const String& property, float value);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Component(DummyConstructorParameter* param);

	virtual ~Component();

	friend class ComponentHelper;
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

class ComponentImplementation : public TangibleObjectImplementation {
protected:
	VectorMap<String, float> attributeMap;

	VectorMap<String, int> precisionMap;

	VectorMap<String, String> titleMap;

	VectorMap<String, bool> hiddenMap;

	Vector<String> keyList;

public:
	ComponentImplementation();

	ComponentImplementation(DummyConstructorParameter* param);

	/**
	 * Initializes the transient members of SceneObject, must call the inherited object method first.
	 * @pre {transient members are not initialized }
	 * @post { transient members are initialized }
	 */
	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isComponent();

	void generateLootStats(const String& lootstring, int level);

	bool compare(Component* inCmpo);

	bool hasKey(const String& key);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void addProperty(const String& attributeName, const float value, const int precision, const String& craftingTitle, const bool hidden);

	float getAttributeValue(const String& attributeName);

	int getAttributePrecision(const String& attributeName);

	String getAttributeGroup(const String& attributeName);

	bool getAttributeHidden(const String& attributeName);

	void setPropertyToHidden(const String& property);

	void addProperty(const String& attribute, const float value, const int precision, const String& title);

	int getPropertyCount();

	String getProperty(const int j);

	bool changeAttributeValue(const String& property, float value);

	WeakReference<Component*> _this;

	operator const Component*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~ComponentImplementation();

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

	friend class Component;
};

class ComponentAdapter : public TangibleObjectAdapter {
public:
	ComponentAdapter(Component* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	bool isComponent();

	void generateLootStats(const String& lootstring, int level);

	bool compare(Component* inCmpo);

	bool hasKey(const String& key);

	void addProperty(const String& attributeName, const float value, const int precision, const String& craftingTitle, const bool hidden);

	float getAttributeValue(const String& attributeName);

	int getAttributePrecision(const String& attributeName);

	String getAttributeGroup(const String& attributeName);

	bool getAttributeHidden(const String& attributeName);

	void setPropertyToHidden(const String& property);

	void addProperty(const String& attribute, const float value, const int precision, const String& title);

	int getPropertyCount();

	String getProperty(const int j);

	bool changeAttributeValue(const String& property, float value);

};

class ComponentHelper : public DistributedObjectClassHelper, public Singleton<ComponentHelper> {
	static ComponentHelper* staticInitializer;

public:
	ComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ComponentHelper>;
};

class LuaComponent {
public:
	static const char className[];
	static Luna<LuaComponent>::RegType Register[];

	LuaComponent(lua_State *L);
	virtual ~LuaComponent();

	int _setObject(lua_State *L);
	int _getObject(lua_State *L);
	int initializeTransientMembers(lua_State *L);
	int fillObjectMenuResponse(lua_State *L);
	int fillAttributeList(lua_State *L);
	int isComponent(lua_State *L);
	int generateLootStats(lua_State *L);
	int compare(lua_State *L);
	int hasKey(lua_State *L);
	int updateCraftingValues(lua_State *L);
	int addProperty(lua_State *L);
	int getAttributeValue(lua_State *L);
	int getAttributePrecision(lua_State *L);
	int getAttributeGroup(lua_State *L);
	int getAttributeHidden(lua_State *L);
	int setPropertyToHidden(lua_State *L);
	int getPropertyCount(lua_State *L);
	int getProperty(lua_State *L);
	int changeAttributeValue(lua_State *L);

	Reference<Component*> realObject;
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

class ComponentPOD : public TangibleObjectPOD {
public:
	Optional<VectorMap<String, float>> attributeMap;

	Optional<VectorMap<String, int>> precisionMap;

	Optional<VectorMap<String, String>> titleMap;

	Optional<VectorMap<String, bool>> hiddenMap;

	Optional<Vector<String>> keyList;

	String _className;
	ComponentPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ComponentPOD();

};

} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component;

#endif /*COMPONENTPOD_H_*/
