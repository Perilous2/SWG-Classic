/*
 *	autogen/server/zone/objects/area/areashapes/RingAreaShape.h generated by engine3 IDL compiler 0.70
 */

#ifndef RINGAREASHAPE_H_
#define RINGAREASHAPE_H_

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
namespace area {
namespace areashapes {

class CircularAreaShape;

class CircularAreaShapePOD;

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

#include "engine/util/u3d/Vector3.h"

#include "server/zone/objects/area/areashapes/AreaShape.h"

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class RingAreaShape : public AreaShape {
public:
	/** Constructor */
	RingAreaShape();

	/**
	 * Set the inner radius of the ring.
	 * @param r the new inner radius of the ring.
	 */
	void setInnerRadius(float r);

	/**
	 * Set the outer radius of the ring.
	 * @param r the new outer radius of the ring.
	 */
	void setOuterRadius(float r);

	/**
	 * Get the inner radius of the ring.
	 * @return inner radius of the ring
	 */
	float getInnerRadius() const;

	/**
	 * Get the inner squared radius of the ring.
	 * @return inner squared radius of the ring
	 */
	float getInnerRadius2() const;

	/**
	 * Get the outer radius of the ring.
	 * @return outer radius of the ring
	 */
	float getOuterRadius() const;

	/**
	 * Get the outer squared radius of the ring.
	 * @return outer squared radius of the ring
	 */
	float getOuterRadius2() const;

	/**
	 * Get the minimum radius of a circle bounding the area shape.
	 * @return the minimum bonding radius.
	 */
	float getRadius() const;

	/**
	 * Check if the coordinate is within the area shape.
	 * @param x the x coordinate.
	 * @param y the y coordinate.
	 * @return true if the coordinate is within the area shape.
	 */
	bool containsPoint(float x, float y) const;

	/**
	 * Check if the coordinate is within the area shape.
	 * @param point the point to check if it is within the area shape.
	 * @return true if the coordinate is within the area shape.
	 */
	bool containsPoint(const Vector3& point) const;

	/**
	 * Generate a random position within the area.
	 * @return a random position within the area.
	 */
	Vector3 getRandomPosition() const;

	/**
	 * Generate a random position within the area with the supplied origin and radius as limits.
	 * @param origin the origin coordinate to generate the random position from.
	 * @param minDistance the minimum distance from the origin.
	 * @param maxDistance the maximum distance from the origin.
	 * @return a random position within the area.
	 */
	Vector3 getRandomPosition(const Vector3& origin, float minDistance, float maxDistance) const;

	/**
	 * Check if this is a ring area shape.
	 * @return true if it is a ring area shape.
	 */
	bool isRingAreaShape() const;

	/**
	 * Check if this area shape intersects with the supplied area shape.
	 * @param areaShape the area shape to check for intersections with.s
	 * @return true if the area shapes intersects each other.
	 */
	bool intersectsWith(AreaShape* areaShape) const;

	/**
	 * Get the area of the areaShape.
	 * @return the area of the area shape.
	 */
	float getArea() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RingAreaShape(DummyConstructorParameter* param);

	virtual ~RingAreaShape();

	friend class RingAreaShapeHelper;
};

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class RingAreaShapeImplementation : public AreaShapeImplementation {
protected:
	/** The radius to the inner edge of the ring. */
	float innerRadius;

	/** The radius to the outer edge of the ring. */
	float outerRadius;

	/** The squared inner radius of the ring */
	float innerRadius2;

	/** The squared outer radius of the ring */
	float outerRadius2;

public:
	RingAreaShapeImplementation();

	RingAreaShapeImplementation(DummyConstructorParameter* param);

	/**
	 * Set the inner radius of the ring.
	 * @param r the new inner radius of the ring.
	 */
	void setInnerRadius(float r);

	/**
	 * Set the outer radius of the ring.
	 * @param r the new outer radius of the ring.
	 */
	void setOuterRadius(float r);

	/**
	 * Get the inner radius of the ring.
	 * @return inner radius of the ring
	 */
	float getInnerRadius() const;

	/**
	 * Get the inner squared radius of the ring.
	 * @return inner squared radius of the ring
	 */
	float getInnerRadius2() const;

	/**
	 * Get the outer radius of the ring.
	 * @return outer radius of the ring
	 */
	float getOuterRadius() const;

	/**
	 * Get the outer squared radius of the ring.
	 * @return outer squared radius of the ring
	 */
	float getOuterRadius2() const;

	/**
	 * Get the minimum radius of a circle bounding the area shape.
	 * @return the minimum bonding radius.
	 */
	float getRadius() const;

	/**
	 * Check if the coordinate is within the area shape.
	 * @param x the x coordinate.
	 * @param y the y coordinate.
	 * @return true if the coordinate is within the area shape.
	 */
	bool containsPoint(float x, float y) const;

	/**
	 * Check if the coordinate is within the area shape.
	 * @param point the point to check if it is within the area shape.
	 * @return true if the coordinate is within the area shape.
	 */
	bool containsPoint(const Vector3& point) const;

	/**
	 * Generate a random position within the area.
	 * @return a random position within the area.
	 */
	Vector3 getRandomPosition() const;

	/**
	 * Generate a random position within the area with the supplied origin and radius as limits.
	 * @param origin the origin coordinate to generate the random position from.
	 * @param minDistance the minimum distance from the origin.
	 * @param maxDistance the maximum distance from the origin.
	 * @return a random position within the area.
	 */
	Vector3 getRandomPosition(const Vector3& origin, float minDistance, float maxDistance) const;

	/**
	 * Check if this is a ring area shape.
	 * @return true if it is a ring area shape.
	 */
	bool isRingAreaShape() const;

	/**
	 * Check if this area shape intersects with the supplied area shape.
	 * @param areaShape the area shape to check for intersections with.s
	 * @return true if the area shapes intersects each other.
	 */
	bool intersectsWith(AreaShape* areaShape) const;

private:
	/**
	 * Check if this area shape intersects with the supplied circular area shape.
	 * @param circle the circular area shape to check for intersections with.
	 * @return true if the area shapes intersects each other.
	 */
	bool intersectsWithCircle(CircularAreaShape* circle) const;

	/**
	 * Check if this area shape intersects with the supplied ring area shape.
	 * @param ring the ring area shape to check for intersections with.
	 * @return true if the rings intersect with each other.
	 */
	bool intersectsWithRing(RingAreaShape* ring) const;

public:
	/**
	 * Get the area of the areaShape.
	 * @return the area of the area shape.
	 */
	float getArea() const;

	WeakReference<RingAreaShape*> _this;

	operator const RingAreaShape*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RingAreaShapeImplementation();

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

	friend class RingAreaShape;
};

class RingAreaShapeAdapter : public AreaShapeAdapter {
public:
	RingAreaShapeAdapter(RingAreaShape* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setInnerRadius(float r);

	void setOuterRadius(float r);

	float getInnerRadius() const;

	float getInnerRadius2() const;

	float getOuterRadius() const;

	float getOuterRadius2() const;

	float getRadius() const;

	bool containsPoint(float x, float y) const;

	bool isRingAreaShape() const;

	bool intersectsWith(AreaShape* areaShape) const;

	float getArea() const;

};

class RingAreaShapeHelper : public DistributedObjectClassHelper, public Singleton<RingAreaShapeHelper> {
	static RingAreaShapeHelper* staticInitializer;

public:
	RingAreaShapeHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RingAreaShapeHelper>;
};

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class RingAreaShapePOD : public AreaShapePOD {
public:
	Optional<float> innerRadius;

	Optional<float> outerRadius;

	Optional<float> innerRadius2;

	Optional<float> outerRadius2;

	String _className;
	RingAreaShapePOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~RingAreaShapePOD();

};

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

#endif /*RINGAREASHAPEPOD_H_*/
