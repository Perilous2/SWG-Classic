/*
 *	autogen/server/zone/QuadTreeEntry.h generated by engine3 IDL compiler 0.70
 */

#ifndef QUADTREEENTRY_H_
#define QUADTREEENTRY_H_

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

class QuadTreeNode;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "system/lang/ref/Reference.h"

#include "system/lang/Math.h"

#include "system/util/SortedVector.h"

#include "server/zone/CloseObjectsVector.h"

#include "engine/util/u3d/Coordinate.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observable.h"

#include "engine/util/u3d/Vector3.h"

namespace server {
namespace zone {

class QuadTreeEntry : public Observable {
public:
	QuadTreeEntry(QuadTreeNode* n = NULL);

	void addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate = true);

	void removeInRangeObject(QuadTreeEntry* obj, bool notifyDisappear = true);

	void removeInRangeObject(int index);

	void removeInRangeObjects();

	bool isInRange(QuadTreeEntry* obj, float range);

	float getOutOfRangeDistance() const;

	bool isInRange(float x, float y, float range);

	float getDistanceTo(QuadTreeEntry* obj) const;

	CloseObjectsVector* getCloseObjects();

	ManagedWeakReference<QuadTreeEntry* > getParent();

	QuadTreeEntry* getParentUnsafe();

	QuadTreeEntry* getRootParentUnsafe();

	bool containsPoint(float x, float y) const;

	QuadTreeEntry* getRootParent();

	bool isInSWArea(QuadTreeNode* node) const;

	bool isInSEArea(QuadTreeNode* node) const;

	bool isInNWArea(QuadTreeNode* node) const;

	bool isInArea(QuadTreeNode* node) const;

	void notifyInsert(QuadTreeEntry* obj);

	void notifyPositionUpdate(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	float getPositionX() const;

	float getPositionZ() const;

	float getPositionY() const;

	float getPreviousPositionX() const;

	float getPreviousPositionZ() const;

	float getPreviousPositionY() const;

	Vector3 getPreviousPosition() const;

	Vector3 getPosition() const;

	void setPosition(float x, float z, float y);

	void initializePosition(float x, float z, float y);

	int compareTo(QuadTreeEntry* obj);

	int registerToCloseObjectsReceivers();

	int getReceiverFlags() const;

	bool isInQuadTree() const;

	Reference<QuadTreeNode* > getNode() const;

	void setCloseObjects(CloseObjectsVector* vec);

	unsigned long long getDirtyObjectID();

	virtual unsigned long long getObjectID();

	float getRadius() const;

	bool isBounding() const;

	void setNode(QuadTreeNode* n);

	void setBounding();

	void setRadius(float rad);

	void clearBounding();

	void setParent(QuadTreeEntry* par);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	QuadTreeEntry(DummyConstructorParameter* param);

	virtual ~QuadTreeEntry();

	int __compareTo(QuadTreeEntry* obj);

	unsigned long long __getDirtyObjectID();

	unsigned long long __getObjectID();

	friend class QuadTreeEntryHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class QuadTreeEntryImplementation : public ObservableImplementation {
protected:
	Coordinate coordinates;

	Reference<QuadTreeNode* > node;

	bool bounding;

	ManagedWeakReference<QuadTreeEntry* > parent;

	Reference<CloseObjectsVector* > closeobjects;

	float radius;

	int receiverFlags;

public:
	QuadTreeEntryImplementation(QuadTreeNode* n = NULL);

	QuadTreeEntryImplementation(DummyConstructorParameter* param);

	void addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate = true);

	void removeInRangeObject(QuadTreeEntry* obj, bool notifyDisappear = true);

	void removeInRangeObject(int index);

	void removeInRangeObjects();

	virtual bool isInRange(QuadTreeEntry* obj, float range);

	virtual float getOutOfRangeDistance() const;

	virtual bool isInRange(float x, float y, float range);

	float getDistanceTo(QuadTreeEntry* obj) const;

	CloseObjectsVector* getCloseObjects();

	ManagedWeakReference<QuadTreeEntry* > getParent();

	QuadTreeEntry* getParentUnsafe();

	QuadTreeEntry* getRootParentUnsafe();

	virtual bool containsPoint(float x, float y) const;

	QuadTreeEntry* getRootParent();

	bool isInSWArea(QuadTreeNode* node) const;

	bool isInSEArea(QuadTreeNode* node) const;

	bool isInNWArea(QuadTreeNode* node) const;

	bool isInArea(QuadTreeNode* node) const;

	virtual void notifyInsert(QuadTreeEntry* obj);

	virtual void notifyPositionUpdate(QuadTreeEntry* obj);

	virtual void notifyDissapear(QuadTreeEntry* obj);

	float getPositionX() const;

	float getPositionZ() const;

	float getPositionY() const;

	float getPreviousPositionX() const;

	float getPreviousPositionZ() const;

	float getPreviousPositionY() const;

	Vector3 getPreviousPosition() const;

	Vector3 getPosition() const;

	void setPosition(float x, float z, float y);

	void initializePosition(float x, float z, float y);

	virtual int compareTo(QuadTreeEntry* obj);

	virtual int registerToCloseObjectsReceivers();

	virtual int getReceiverFlags() const;

	bool isInQuadTree() const;

	Reference<QuadTreeNode* > getNode() const;

	void setCloseObjects(CloseObjectsVector* vec);

	virtual unsigned long long getDirtyObjectID();

	virtual unsigned long long getObjectID();

	virtual float getRadius() const;

	bool isBounding() const;

	void setNode(QuadTreeNode* n);

	void setBounding();

	void setRadius(float rad);

	void clearBounding();

	virtual void setParent(QuadTreeEntry* par);

	WeakReference<QuadTreeEntry*> _this;

	operator const QuadTreeEntry*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~QuadTreeEntryImplementation();

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

	friend class QuadTreeEntry;
};

class QuadTreeEntryAdapter : public ObservableAdapter {
public:
	QuadTreeEntryAdapter(QuadTreeEntry* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addInRangeObject(QuadTreeEntry* obj, bool doNotifyUpdate);

	void removeInRangeObject(QuadTreeEntry* obj, bool notifyDisappear);

	void removeInRangeObject(int index);

	void removeInRangeObjects();

	bool isInRange(QuadTreeEntry* obj, float range);

	float getOutOfRangeDistance() const;

	bool isInRange(float x, float y, float range);

	float getDistanceTo(QuadTreeEntry* obj) const;

	ManagedWeakReference<QuadTreeEntry* > getParent();

	QuadTreeEntry* getParentUnsafe();

	QuadTreeEntry* getRootParentUnsafe();

	bool containsPoint(float x, float y) const;

	QuadTreeEntry* getRootParent();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyPositionUpdate(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	float getPositionX() const;

	float getPositionZ() const;

	float getPositionY() const;

	float getPreviousPositionX() const;

	float getPreviousPositionZ() const;

	float getPreviousPositionY() const;

	void setPosition(float x, float z, float y);

	void initializePosition(float x, float z, float y);

	int compareTo(QuadTreeEntry* obj);

	int registerToCloseObjectsReceivers();

	int getReceiverFlags() const;

	bool isInQuadTree() const;

	unsigned long long getDirtyObjectID();

	unsigned long long getObjectID();

	float getRadius() const;

	bool isBounding() const;

	void setBounding();

	void setRadius(float rad);

	void clearBounding();

	void setParent(QuadTreeEntry* par);

};

class QuadTreeEntryHelper : public DistributedObjectClassHelper, public Singleton<QuadTreeEntryHelper> {
	static QuadTreeEntryHelper* staticInitializer;

public:
	QuadTreeEntryHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<QuadTreeEntryHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class QuadTreeEntryPOD : public ObservablePOD {
public:
	Optional<Coordinate> coordinates;

	Optional<bool> bounding;

	Optional<ManagedWeakReference<QuadTreeEntryPOD* >> parent;

	Optional<float> radius;

	String _className;
	QuadTreeEntryPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~QuadTreeEntryPOD();

};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*QUADTREEENTRYPOD_H_*/