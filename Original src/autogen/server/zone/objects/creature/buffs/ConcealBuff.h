/*
 *	autogen/server/zone/objects/creature/buffs/ConcealBuff.h generated by engine3 IDL compiler 0.70
 */

#ifndef CONCEALBUFF_H_
#define CONCEALBUFF_H_

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

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/zone/objects/creature/buffs/Buff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class ConcealBuff : public Buff {
public:
	ConcealBuff(CreatureObject* creo, CreatureObject* ranger, unsigned int buffCRC, int duration, String& zoneName);

	CreatureObject* getBuffGiver();

	String getPlanetName();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ConcealBuff(DummyConstructorParameter* param);

	virtual ~ConcealBuff();

	friend class ConcealBuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class ConcealBuffImplementation : public BuffImplementation {
protected:
	ManagedWeakReference<CreatureObject* > buffGiver;

private:
	String planetName;

public:
	ConcealBuffImplementation(CreatureObject* creo, CreatureObject* ranger, unsigned int buffCRC, int duration, String& zoneName);

	ConcealBuffImplementation(DummyConstructorParameter* param);

	CreatureObject* getBuffGiver();

	String getPlanetName();

	WeakReference<ConcealBuff*> _this;

	operator const ConcealBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~ConcealBuffImplementation();

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

	friend class ConcealBuff;
};

class ConcealBuffAdapter : public BuffAdapter {
public:
	ConcealBuffAdapter(ConcealBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	CreatureObject* getBuffGiver();

	String getPlanetName();

};

class ConcealBuffHelper : public DistributedObjectClassHelper, public Singleton<ConcealBuffHelper> {
	static ConcealBuffHelper* staticInitializer;

public:
	ConcealBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ConcealBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class ConcealBuffPOD : public BuffPOD {
public:
	Optional<ManagedWeakReference<CreatureObjectPOD* >> buffGiver;

	Optional<String> planetName;

	String _className;
	ConcealBuffPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~ConcealBuffPOD();

};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*CONCEALBUFFPOD_H_*/