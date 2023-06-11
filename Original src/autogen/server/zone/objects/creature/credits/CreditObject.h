/*
 *	autogen/server/zone/objects/creature/credits/CreditObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef CREDITOBJECT_H_
#define CREDITOBJECT_H_

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

#include "engine/log/LoggerHelperStream.h"

#include "system/lang/ref/WeakReference.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace credits {

class CreditObject : public ManagedObject {
public:
	static const int CREDITCAP = 2000000000;

	CreditObject();

	void notifyLoadFromDatabase();

	void setBankCredits(int credits, bool notifyClient = true);

	void setCashCredits(int credits, bool notifyClient = true);

	int getBankCredits() const;

	int getCashCredits() const;

	void subtractBankCredits(int credits, bool notifyClient = true);

	void subtractCashCredits(int credits, bool notifyClient = true);

	bool subtractCredits(int credits, bool notifyClient = true, bool bankFirst = false);

	void transferCredits(int cash, int bank, bool notifyClient = true);

	void clearBankCredits(bool notifyClient = true);

	void clearCashCredits(bool notifyClient = true);

	void addBankCredits(int credits, bool notifyClient = true);

	void addCashCredits(int credits, bool notifyClient = true);

	bool verifyCredits(int credits);

	bool verifyCashCredits(int credits);

	bool verifyBankCredits(int credits);

	WeakReference<CreatureObject* > getOwner();

	unsigned long long getOwnerObjectID() const;

	void setOwner(CreatureObject* obj);

	LoggerHelperStream error() const;

	LoggerHelperStream info(int forced = false) const;

	LoggerHelperStream debug() const;

	String toStringData() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CreditObject(DummyConstructorParameter* param);

	virtual ~CreditObject();

	friend class CreditObjectHelper;
};

} // namespace credits
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::credits;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace credits {

class CreditObjectImplementation : public ManagedObjectImplementation {
public:
	static const int CREDITCAP = 2000000000;

protected:
	int bankCredits;

	int cashCredits;

	unsigned long long ownerObjectID;

	WeakReference<CreatureObject* > owner;

public:
	CreditObjectImplementation();

	CreditObjectImplementation(DummyConstructorParameter* param);

	void notifyLoadFromDatabase();

	void setBankCredits(int credits, bool notifyClient = true);

	void setCashCredits(int credits, bool notifyClient = true);

	int getBankCredits() const;

	int getCashCredits() const;

	void subtractBankCredits(int credits, bool notifyClient = true);

	void subtractCashCredits(int credits, bool notifyClient = true);

	bool subtractCredits(int credits, bool notifyClient = true, bool bankFirst = false);

	void transferCredits(int cash, int bank, bool notifyClient = true);

	void clearBankCredits(bool notifyClient = true);

	void clearCashCredits(bool notifyClient = true);

	void addBankCredits(int credits, bool notifyClient = true);

	void addCashCredits(int credits, bool notifyClient = true);

	bool verifyCredits(int credits);

	bool verifyCashCredits(int credits);

	bool verifyBankCredits(int credits);

	WeakReference<CreatureObject* > getOwner();

	virtual unsigned long long getOwnerObjectID() const;

	void setOwner(CreatureObject* obj);

	LoggerHelperStream error() const;

	LoggerHelperStream info(int forced = false) const;

	LoggerHelperStream debug() const;

	String toStringData() const;

	WeakReference<CreditObject*> _this;

	operator const CreditObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~CreditObjectImplementation();

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

	friend class CreditObject;
};

class CreditObjectAdapter : public ManagedObjectAdapter {
public:
	CreditObjectAdapter(CreditObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyLoadFromDatabase();

	void setBankCredits(int credits, bool notifyClient);

	void setCashCredits(int credits, bool notifyClient);

	int getBankCredits() const;

	int getCashCredits() const;

	void subtractBankCredits(int credits, bool notifyClient);

	void subtractCashCredits(int credits, bool notifyClient);

	bool subtractCredits(int credits, bool notifyClient, bool bankFirst);

	void transferCredits(int cash, int bank, bool notifyClient);

	void clearBankCredits(bool notifyClient);

	void clearCashCredits(bool notifyClient);

	void addBankCredits(int credits, bool notifyClient);

	void addCashCredits(int credits, bool notifyClient);

	bool verifyCredits(int credits);

	bool verifyCashCredits(int credits);

	bool verifyBankCredits(int credits);

	void setOwner(CreatureObject* obj);

};

class CreditObjectHelper : public DistributedObjectClassHelper, public Singleton<CreditObjectHelper> {
	static CreditObjectHelper* staticInitializer;

public:
	CreditObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreditObjectHelper>;
};

} // namespace credits
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::credits;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace credits {

class CreditObjectPOD : public ManagedObjectPOD {
public:
	Optional<int> bankCredits;

	Optional<int> cashCredits;

	Optional<unsigned long long> ownerObjectID;

	String _className;
	CreditObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~CreditObjectPOD();

};

} // namespace credits
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::credits;

#endif /*CREDITOBJECTPOD_H_*/