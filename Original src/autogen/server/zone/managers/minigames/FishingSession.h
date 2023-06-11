/*
 *	autogen/server/zone/managers/minigames/FishingSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef FISHINGSESSION_H_
#define FISHINGSESSION_H_

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
namespace objects {
namespace scene {

class SceneObject;

class SceneObjectPOD;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace managers {
namespace minigames {
namespace events {

class FishingEvent;

} // namespace events
} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames::events;

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingSession : public Facade {
public:
	FishingSession(FishingEvent* event, SceneObject* marker, int nextAction, int fish, unsigned int boxID, int fishingState, const String& mood);

	void setEvent(FishingEvent* ev);

	void setMood(const String& m);

	FishingEvent* getEvent();

	void setNextAction(int action);

	int getNextAction();

	void setFishBoxID(unsigned int box);

	unsigned int getFishBoxID();

	SceneObject* getMarker();

	void setMarker(SceneObject* mar);

	int getFish();

	void setFish(int fi);

	int getFishingState();

	void setFishingState(int state);

	void update(int nextAction, SceneObject* marker, int fish, unsigned int boxID, int fishingState);

	String getMoodString();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FishingSession(DummyConstructorParameter* param);

	virtual ~FishingSession();

	friend class FishingSessionHelper;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingSessionImplementation : public FacadeImplementation {
protected:
	Reference<FishingEvent* > event;

	ManagedReference<SceneObject* > marker;

	int nextAction;

	int fish;

	unsigned int boxID;

	int fishingState;

	String mood;

public:
	FishingSessionImplementation(FishingEvent* event, SceneObject* marker, int nextAction, int fish, unsigned int boxID, int fishingState, const String& mood);

	FishingSessionImplementation(DummyConstructorParameter* param);

	void setEvent(FishingEvent* ev);

	void setMood(const String& m);

	FishingEvent* getEvent();

	void setNextAction(int action);

	int getNextAction();

	void setFishBoxID(unsigned int box);

	unsigned int getFishBoxID();

	SceneObject* getMarker();

	void setMarker(SceneObject* mar);

	int getFish();

	void setFish(int fi);

	int getFishingState();

	void setFishingState(int state);

	void update(int nextAction, SceneObject* marker, int fish, unsigned int boxID, int fishingState);

	String getMoodString();

	WeakReference<FishingSession*> _this;

	operator const FishingSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~FishingSessionImplementation();

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

	friend class FishingSession;
};

class FishingSessionAdapter : public FacadeAdapter {
public:
	FishingSessionAdapter(FishingSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setMood(const String& m);

	void setNextAction(int action);

	int getNextAction();

	void setFishBoxID(unsigned int box);

	unsigned int getFishBoxID();

	SceneObject* getMarker();

	void setMarker(SceneObject* mar);

	int getFish();

	void setFish(int fi);

	int getFishingState();

	void setFishingState(int state);

	void update(int nextAction, SceneObject* marker, int fish, unsigned int boxID, int fishingState);

	String getMoodString();

};

class FishingSessionHelper : public DistributedObjectClassHelper, public Singleton<FishingSessionHelper> {
	static FishingSessionHelper* staticInitializer;

public:
	FishingSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishingSessionHelper>;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingSessionPOD : public FacadePOD {
public:
	Optional<ManagedReference<SceneObjectPOD* >> marker;

	Optional<int> nextAction;

	Optional<int> fish;

	Optional<unsigned int> boxID;

	Optional<int> fishingState;

	Optional<String> mood;

	String _className;
	FishingSessionPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~FishingSessionPOD();

};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

#endif /*FISHINGSESSIONPOD_H_*/
