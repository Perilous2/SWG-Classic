/*
 *	autogen/server/zone/objects/player/sessions/CityRemoveMilitiaSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef CITYREMOVEMILITIASESSION_H_
#define CITYREMOVEMILITIASESSION_H_

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

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class CityRemoveMilitiaSession : public Facade {
public:
	CityRemoveMilitiaSession(CreatureObject* creature, CityRegion* city, unsigned long long militiaid, SceneObject* terminal = NULL);

	unsigned long long getMilitiaID();

	int initializeSession();

	int cancelSession();

	int clearSession();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CityRemoveMilitiaSession(DummyConstructorParameter* param);

	virtual ~CityRemoveMilitiaSession();

	friend class CityRemoveMilitiaSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class CityRemoveMilitiaSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > creatureObject;

	ManagedWeakReference<CityRegion* > cityRegion;

	ManagedWeakReference<SceneObject* > terminalObject;

	unsigned long long militiaID;

public:
	CityRemoveMilitiaSessionImplementation(CreatureObject* creature, CityRegion* city, unsigned long long militiaid, SceneObject* terminal = NULL);

	CityRemoveMilitiaSessionImplementation(DummyConstructorParameter* param);

	unsigned long long getMilitiaID();

	int initializeSession();

	int cancelSession();

	int clearSession();

	WeakReference<CityRemoveMilitiaSession*> _this;

	operator const CityRemoveMilitiaSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CityRemoveMilitiaSessionImplementation();

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

	friend class CityRemoveMilitiaSession;
};

class CityRemoveMilitiaSessionAdapter : public FacadeAdapter {
public:
	CityRemoveMilitiaSessionAdapter(CityRemoveMilitiaSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned long long getMilitiaID();

	int initializeSession();

	int cancelSession();

	int clearSession();

};

class CityRemoveMilitiaSessionHelper : public DistributedObjectClassHelper, public Singleton<CityRemoveMilitiaSessionHelper> {
	static CityRemoveMilitiaSessionHelper* staticInitializer;

public:
	CityRemoveMilitiaSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CityRemoveMilitiaSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class CityRemoveMilitiaSessionPOD : public FacadePOD {
public:
	Optional<ManagedWeakReference<CreatureObjectPOD* >> creatureObject;

	Optional<ManagedWeakReference<CityRegionPOD* >> cityRegion;

	Optional<ManagedWeakReference<SceneObjectPOD* >> terminalObject;

	Optional<unsigned long long> militiaID;

	String _className;
	CityRemoveMilitiaSessionPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~CityRemoveMilitiaSessionPOD();

};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*CITYREMOVEMILITIASESSIONPOD_H_*/
