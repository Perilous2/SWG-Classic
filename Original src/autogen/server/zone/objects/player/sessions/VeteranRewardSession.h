/*
 *	autogen/server/zone/objects/player/sessions/VeteranRewardSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef VETERANREWARDSESSION_H_
#define VETERANREWARDSESSION_H_

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

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class VeteranRewardSession : public Facade {
public:
	VeteranRewardSession(unsigned int days);

	unsigned int getMilestone();

	int getSelectedRewardIndex();

	void setSelectedRewardIndex(int idx);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	VeteranRewardSession(DummyConstructorParameter* param);

	virtual ~VeteranRewardSession();

	friend class VeteranRewardSessionHelper;
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

class VeteranRewardSessionImplementation : public FacadeImplementation {
protected:
	unsigned int milestone;

	int selectedRewardIndex;

public:
	VeteranRewardSessionImplementation(unsigned int days);

	VeteranRewardSessionImplementation(DummyConstructorParameter* param);

	unsigned int getMilestone();

	int getSelectedRewardIndex();

	void setSelectedRewardIndex(int idx);

	WeakReference<VeteranRewardSession*> _this;

	operator const VeteranRewardSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~VeteranRewardSessionImplementation();

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

	friend class VeteranRewardSession;
};

class VeteranRewardSessionAdapter : public FacadeAdapter {
public:
	VeteranRewardSessionAdapter(VeteranRewardSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned int getMilestone();

	int getSelectedRewardIndex();

	void setSelectedRewardIndex(int idx);

};

class VeteranRewardSessionHelper : public DistributedObjectClassHelper, public Singleton<VeteranRewardSessionHelper> {
	static VeteranRewardSessionHelper* staticInitializer;

public:
	VeteranRewardSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<VeteranRewardSessionHelper>;
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

class VeteranRewardSessionPOD : public FacadePOD {
public:
	Optional<unsigned int> milestone;

	Optional<int> selectedRewardIndex;

	String _className;
	VeteranRewardSessionPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~VeteranRewardSessionPOD();

};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*VETERANREWARDSESSIONPOD_H_*/