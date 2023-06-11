/*
 *	autogen/server/zone/objects/tangible/attachment/Attachment.h generated by engine3 IDL compiler 0.70
 */

#ifndef ATTACHMENT_H_
#define ATTACHMENT_H_

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "templates/SharedObjectTemplate.h"

#include "server/zone/objects/scene/SceneObjectType.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "system/util/HashTable.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace attachement {

class Attachment : public TangibleObject {
public:
	Attachment();

	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void initializeMembers();

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isAttachment();

	bool isArmorAttachment();

	bool isClothingAttachment();

	HashTable<String, int>* getSkillMods();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Attachment(DummyConstructorParameter* param);

	virtual ~Attachment();

	friend class AttachmentHelper;
};

} // namespace attachement
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::attachement;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace attachement {

class AttachmentImplementation : public TangibleObjectImplementation {
protected:
	int attachmentType;

	HashTable<String, int> skillModMap;

	static const int CLOTHINGTYPE = 1;

	static const int ARMORTYPE = 2;

public:
	AttachmentImplementation();

	AttachmentImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void initializeMembers();

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isAttachment();

	bool isArmorAttachment();

	bool isClothingAttachment();

	HashTable<String, int>* getSkillMods();

	WeakReference<Attachment*> _this;

	operator const Attachment*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~AttachmentImplementation();

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

	friend class Attachment;
};

class AttachmentAdapter : public TangibleObjectAdapter {
public:
	AttachmentAdapter(Attachment* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void initializeMembers();

	bool isAttachment();

	bool isArmorAttachment();

	bool isClothingAttachment();

};

class AttachmentHelper : public DistributedObjectClassHelper, public Singleton<AttachmentHelper> {
	static AttachmentHelper* staticInitializer;

public:
	AttachmentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AttachmentHelper>;
};

} // namespace attachement
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::attachement;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace attachement {

class AttachmentPOD : public TangibleObjectPOD {
public:
	Optional<int> attachmentType;

	Optional<HashTable<String, int>> skillModMap;

	String _className;
	AttachmentPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~AttachmentPOD();

};

} // namespace attachement
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::attachement;

#endif /*ATTACHMENTPOD_H_*/
