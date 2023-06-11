/*
 *	autogen/server/zone/objects/area/areashapes/CircularAreaShape.h generated by engine3 IDL compiler 0.70
 */

#ifndef CIRCULARAREASHAPE_H_
#define CIRCULARAREASHAPE_H_

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

#include "engine/util/u3d/Vector3.h"

#include "server/zone/objects/area/areashapes/AreaShape.h"

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class CircularAreaShape : public AreaShape {
public:
	/** Constructor */
	CircularAreaShape();

	/**
	 * Set the radius of the cirle.
	 * @param r the new radius of the circle.
	 */
	void setRadius(float r);

	/**
	 * Get the radius of the circle.
	 * @return radius of the circle
	 */
	float getRadius() const;

	/**
	 * Get the squared radius of the circle.
	 * @return squared radius of the circle
	 */
	float getRadius2() const;

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
	 * Check if this is a circular area shape.
	 * @return true if it is a circular area shape.
	 */
	bool isCircularAreaShape() const;

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
	CircularAreaShape(DummyConstructorParameter* param);

	virtual ~CircularAreaShape();

	friend class CircularAreaShapeHelper;
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

class CircularAreaShapeImplementation : public AreaShapeImplementation {
protected:
	/** The radius of the circle. */
	float radius;

	/** The squared radius of the circle */
	float radius2;

public:
	CircularAreaShapeImplementation();

	CircularAreaShapeImplementation(DummyConstructorParameter* param);

	/**
	 * Set the radius of the cirle.
	 * @param r the new radius of the circle.
	 */
	void setRadius(float r);

	/**
	 * Get the radius of the circle.
	 * @return radius of the circle
	 */
	float getRadius() const;

	/**
	 * Get the squared radius of the circle.
	 * @return squared radius of the circle
	 */
	float getRadius2() const;

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
	 * Check if this is a circular area shape.
	 * @return true if it is a circular area shape.
	 */
	bool isCircularAreaShape() const;

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
	 * @return true if the circles intersect with each other.
	 */
	bool intersectsWithCircle(CircularAreaShape* circle) const;

public:
	/**
	 * Get the area of the areaShape.
	 * @return the area of the area shape.
	 */
	float getArea() const;

	WeakReference<CircularAreaShape*> _this;

	operator const CircularAreaShape*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CircularAreaShapeImplementation();

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

	friend class CircularAreaShape;
};

class CircularAreaShapeAdapter : public AreaShapeAdapter {
public:
	CircularAreaShapeAdapter(CircularAreaShape* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setRadius(float r);

	float getRadius() const;

	float getRadius2() const;

	bool containsPoint(float x, float y) const;

	bool isCircularAreaShape() const;

	bool intersectsWith(AreaShape* areaShape) const;

	float getArea() const;

};

class CircularAreaShapeHelper : public DistributedObjectClassHelper, public Singleton<CircularAreaShapeHelper> {
	static CircularAreaShapeHelper* staticInitializer;

public:
	CircularAreaShapeHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CircularAreaShapeHelper>;
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

class CircularAreaShapePOD : public AreaShapePOD {
public:
	Optional<float> radius;

	Optional<float> radius2;

	String _className;
	CircularAreaShapePOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~CircularAreaShapePOD();

};

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

#endif /*CIRCULARAREASHAPEPOD_H_*/
