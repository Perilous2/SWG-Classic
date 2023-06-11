/*
 *	autogen/server/zone/managers/crafting/CraftingManager.h generated by engine3 IDL compiler 0.70
 */

#ifndef CRAFTINGMANAGER_H_
#define CRAFTINGMANAGER_H_

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
namespace player {

class PlayerObject;

class PlayerObjectPOD;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

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
namespace manufactureschematic {

class ManufactureSchematic;

class ManufactureSchematicPOD;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematic;

class DraftSchematicPOD;

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

#include "system/util/Vector.h"

#include "server/zone/managers/crafting/labratories/SharedLabratory.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/managers/crafting/schematicmap/SchematicMap.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "system/util/HashTable.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

#include "server/zone/managers/ZoneManager.h"

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManager : public ZoneManager {
public:
	static const short CR = 1;

	static const short CD = 2;

	static const short DR = 3;

	static const short HR = 4;

	static const short FL = 5;

	static const short MA = 6;

	static const short PE = 7;

	static const short OQ = 8;

	static const short SR = 9;

	static const short UT = 10;

	static const short AMAZINGSUCCESS = 0;

	static const short GREATSUCCESS = 1;

	static const short GOODSUCCESS = 2;

	static const short MODERATESUCCESS = 3;

	static const short SUCCESS = 4;

	static const short MARGINALSUCCESS = 5;

	static const short OK = 6;

	static const short BARELYSUCCESSFUL = 7;

	static const short CRITICALFAILURE = 8;

	CraftingManager();

	void initialize();

	void stop();

	void awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	void removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(CreatureObject* player, unsigned int schematicID);

	void sendResourceWeightsTo(CreatureObject* player, unsigned int schematicID);

	int calculateAssemblySuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	void experimentRow(ManufactureSchematic* schematic, CraftingValues* craftingValues, int rowEffected, int pointsAttempted, float failure, int experimentationResult);

	int calculateExperimentationFailureRate(CreatureObject* player, ManufactureSchematic* manufactureSchematic, int pointsUsed);

	int calculateExperimentationSuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	String generateSerial();

	void setInitialCraftingValues(TangibleObject* prototype, ManufactureSchematic* manufactureSchematic, int assemblySuccess);

	int getCreationCount(ManufactureSchematic* manufactureSchematic);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CraftingManager(DummyConstructorParameter* param);

	virtual ~CraftingManager();

	friend class CraftingManagerHelper;
};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManagerImplementation : public ZoneManagerImplementation {
	Reference<SchematicMap* > schematicMap;

public:
	static const short CR = 1;

	static const short CD = 2;

	static const short DR = 3;

	static const short HR = 4;

	static const short FL = 5;

	static const short MA = 6;

	static const short PE = 7;

	static const short OQ = 8;

	static const short SR = 9;

	static const short UT = 10;

	static const short AMAZINGSUCCESS = 0;

	static const short GREATSUCCESS = 1;

	static const short GOODSUCCESS = 2;

	static const short MODERATESUCCESS = 3;

	static const short SUCCESS = 4;

	static const short MARGINALSUCCESS = 5;

	static const short OK = 6;

	static const short BARELYSUCCESSFUL = 7;

	static const short CRITICALFAILURE = 8;

private:
	HashTable<int, Reference<SharedLabratory*> > labs;

public:
	CraftingManagerImplementation();

	CraftingManagerImplementation(DummyConstructorParameter* param);

	void initialize();

	void stop();

	void awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	void removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(CreatureObject* player, unsigned int schematicID);

	void sendResourceWeightsTo(CreatureObject* player, unsigned int schematicID);

	int calculateAssemblySuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	void experimentRow(ManufactureSchematic* schematic, CraftingValues* craftingValues, int rowEffected, int pointsAttempted, float failure, int experimentationResult);

	int calculateExperimentationFailureRate(CreatureObject* player, ManufactureSchematic* manufactureSchematic, int pointsUsed);

	int calculateExperimentationSuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	String generateSerial();

private:
	void configureLabratories();

public:
	void setInitialCraftingValues(TangibleObject* prototype, ManufactureSchematic* manufactureSchematic, int assemblySuccess);

	int getCreationCount(ManufactureSchematic* manufactureSchematic);

	WeakReference<CraftingManager*> _this;

	operator const CraftingManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CraftingManagerImplementation();

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

	friend class CraftingManager;
};

class CraftingManagerAdapter : public ZoneManagerAdapter {
public:
	CraftingManagerAdapter(CraftingManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void stop();

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(CreatureObject* player, unsigned int schematicID);

	void sendResourceWeightsTo(CreatureObject* player, unsigned int schematicID);

	int calculateAssemblySuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	int calculateExperimentationFailureRate(CreatureObject* player, ManufactureSchematic* manufactureSchematic, int pointsUsed);

	int calculateExperimentationSuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	String generateSerial();

	void setInitialCraftingValues(TangibleObject* prototype, ManufactureSchematic* manufactureSchematic, int assemblySuccess);

	int getCreationCount(ManufactureSchematic* manufactureSchematic);

};

class CraftingManagerHelper : public DistributedObjectClassHelper, public Singleton<CraftingManagerHelper> {
	static CraftingManagerHelper* staticInitializer;

public:
	CraftingManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingManagerHelper>;
};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManagerPOD : public ZoneManagerPOD {
public:
	String _className;
	CraftingManagerPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~CraftingManagerPOD();

};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

#endif /*CRAFTINGMANAGERPOD_H_*/