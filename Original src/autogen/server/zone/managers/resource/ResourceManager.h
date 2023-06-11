/*
 *	autogen/server/zone/managers/resource/ResourceManager.h generated by engine3 IDL compiler 0.70
 */

#ifndef RESOURCEMANAGER_H_
#define RESOURCEMANAGER_H_

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

class ZoneServer;

class ZoneServerPOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServer;

class ZoneProcessServerPOD;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace objects {
namespace resource {

class ResourceContainer;

class ResourceContainerPOD;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace listbox {

class SuiListBox;

class SuiListBoxPOD;

} // namespace listbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::listbox;

#include "server/zone/managers/resource/resourcespawner/ResourceSpawner.h"

#include "server/zone/objects/resource/ResourceSpawn.h"

#include "server/zone/objects/transaction/TransactionLog.h"

#include "system/util/Vector.h"

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace managers {
namespace resource {

	/**
 * The resource manager handles all aspects of in game resources
 * within the Core3 environment
 */
class ResourceManager : public Observer {
public:
	static const int RESOURCE_DEED_QUANTITY = 30000;

	ResourceManager(ZoneServer* server, ZoneProcessServer* impl);

	void stop();

	void initialize();

	void shiftResources();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int getResourceRecycleType(ResourceSpawn* resource);

	void sendResourceListForSurvey(CreatureObject* playerCreature, const int toolType, const String& surveyType);

	void sendSurvey(CreatureObject* playerCreature, const String& resname);

	void sendSample(CreatureObject* playerCreature, const String& resname, const String& sampleAnimation);

	ResourceContainer* harvestResource(CreatureObject* player, const String& type, const int quantity);

	bool harvestResourceToPlayer(TransactionLog& trx, CreatureObject* player, ResourceSpawn* resourceSpawn, const int quantity);

	unsigned int getAvailablePowerFromPlayer(CreatureObject* player);

	void removePowerFromPlayer(CreatureObject* player, unsigned int power);

	void getResourceListByType(Vector<ManagedReference<ResourceSpawn* > >& list, int type, const String& zoneName);

	void createResourceSpawn(CreatureObject* playerCreature, const UnicodeString& args);

	void givePlayerResource(CreatureObject* playerCreature, const String& restype, const int quantity);

	ResourceSpawn* getCurrentSpawn(const String& restype, const String& zoneName);

	ResourceSpawn* getResourceSpawn(const String& spawnName);

	bool isRecycledResource(ResourceSpawn* resource);

	ResourceSpawn* getRecycledVersion(ResourceSpawn* resource);

	void addNodeToListBox(SuiListBox* sui, const String& nodeName);

	String addParentNodeToListBox(SuiListBox* sui, const String& currentNode);

	void listResourcesForPlanetOnScreen(CreatureObject* creature, const String& planet);

	String healthCheck();

	String dumpResources();

	String despawnResource(String& resourceName);

	void addPlanetsToListBox(SuiListBox* sui);

	String getPlanetByIndex(int idx);

	ResourceSpawner* getResourceSpawner();

	ZoneServer* getZoneServer();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ResourceManager(DummyConstructorParameter* param);

	virtual ~ResourceManager();

	friend class ResourceManagerHelper;
};

} // namespace resource
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::resource;

namespace server {
namespace zone {
namespace managers {
namespace resource {

class ResourceManagerImplementation : public ObserverImplementation, public Logger {
	ManagedReference<ZoneProcessServer* > processor;

	ManagedReference<ZoneServer* > zoneServer;

	Reference<ResourceSpawner* > resourceSpawner;

	int shiftInterval;

public:
	static const int RESOURCE_DEED_QUANTITY = 30000;

	ResourceManagerImplementation(ZoneServer* server, ZoneProcessServer* impl);

	ResourceManagerImplementation(DummyConstructorParameter* param);

	void stop();

	void initialize();

	void shiftResources();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int getResourceRecycleType(ResourceSpawn* resource);

	void sendResourceListForSurvey(CreatureObject* playerCreature, const int toolType, const String& surveyType);

	void sendSurvey(CreatureObject* playerCreature, const String& resname);

	void sendSample(CreatureObject* playerCreature, const String& resname, const String& sampleAnimation);

	ResourceContainer* harvestResource(CreatureObject* player, const String& type, const int quantity);

	bool harvestResourceToPlayer(TransactionLog& trx, CreatureObject* player, ResourceSpawn* resourceSpawn, const int quantity);

	unsigned int getAvailablePowerFromPlayer(CreatureObject* player);

	void removePowerFromPlayer(CreatureObject* player, unsigned int power);

	void getResourceListByType(Vector<ManagedReference<ResourceSpawn* > >& list, int type, const String& zoneName);

	void createResourceSpawn(CreatureObject* playerCreature, const UnicodeString& args);

	void givePlayerResource(CreatureObject* playerCreature, const String& restype, const int quantity);

	ResourceSpawn* getCurrentSpawn(const String& restype, const String& zoneName);

	ResourceSpawn* getResourceSpawn(const String& spawnName);

private:
	bool loadConfigData();

	void loadDefaultConfig();

	void loadSurveyData();

	void startResourceSpawner();

public:
	bool isRecycledResource(ResourceSpawn* resource);

	ResourceSpawn* getRecycledVersion(ResourceSpawn* resource);

	void addNodeToListBox(SuiListBox* sui, const String& nodeName);

	String addParentNodeToListBox(SuiListBox* sui, const String& currentNode);

	void listResourcesForPlanetOnScreen(CreatureObject* creature, const String& planet);

	String healthCheck();

	String dumpResources();

	String despawnResource(String& resourceName);

	void addPlanetsToListBox(SuiListBox* sui);

	String getPlanetByIndex(int idx);

	ResourceSpawner* getResourceSpawner();

	ZoneServer* getZoneServer();

	WeakReference<ResourceManager*> _this;

	operator const ResourceManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ResourceManagerImplementation();

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

	friend class ResourceManager;
};

class ResourceManagerAdapter : public ObserverAdapter {
public:
	ResourceManagerAdapter(ResourceManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void stop();

	void initialize();

	void shiftResources();

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int getResourceRecycleType(ResourceSpawn* resource);

	void sendResourceListForSurvey(CreatureObject* playerCreature, const int toolType, const String& surveyType);

	void sendSurvey(CreatureObject* playerCreature, const String& resname);

	void sendSample(CreatureObject* playerCreature, const String& resname, const String& sampleAnimation);

	ResourceContainer* harvestResource(CreatureObject* player, const String& type, const int quantity);

	unsigned int getAvailablePowerFromPlayer(CreatureObject* player);

	void removePowerFromPlayer(CreatureObject* player, unsigned int power);

	void createResourceSpawn(CreatureObject* playerCreature, const UnicodeString& args);

	void givePlayerResource(CreatureObject* playerCreature, const String& restype, const int quantity);

	ResourceSpawn* getCurrentSpawn(const String& restype, const String& zoneName);

	ResourceSpawn* getResourceSpawn(const String& spawnName);

	bool isRecycledResource(ResourceSpawn* resource);

	ResourceSpawn* getRecycledVersion(ResourceSpawn* resource);

	void addNodeToListBox(SuiListBox* sui, const String& nodeName);

	String addParentNodeToListBox(SuiListBox* sui, const String& currentNode);

	void listResourcesForPlanetOnScreen(CreatureObject* creature, const String& planet);

	String healthCheck();

	String dumpResources();

	String despawnResource(String& resourceName);

	void addPlanetsToListBox(SuiListBox* sui);

	String getPlanetByIndex(int idx);

	ZoneServer* getZoneServer();

};

class ResourceManagerHelper : public DistributedObjectClassHelper, public Singleton<ResourceManagerHelper> {
	static ResourceManagerHelper* staticInitializer;

public:
	ResourceManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ResourceManagerHelper>;
};

} // namespace resource
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::resource;

namespace server {
namespace zone {
namespace managers {
namespace resource {

	/**
 * The resource manager handles all aspects of in game resources
 * within the Core3 environment
 */
class ResourceManagerPOD : public ObserverPOD {
public:
	String _className;
	ResourceManagerPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ResourceManagerPOD();

};

} // namespace resource
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::resource;

#endif /*RESOURCEMANAGERPOD_H_*/