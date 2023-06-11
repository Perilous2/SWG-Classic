/*
 *	autogen/server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.h generated by engine3 IDL compiler 0.70
 */

#ifndef CHARACTERBUILDERTERMINAL_H_
#define CHARACTERBUILDERTERMINAL_H_

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

#include "templates/SharedObjectTemplate.h"

#include "templates/tangible/CharacterBuilderMenuNode.h"

#include "server/zone/objects/tangible/terminal/Terminal.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace characterbuilder {

class CharacterBuilderTerminal : public Terminal {
public:
	CharacterBuilderTerminal();

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void sendInitialChoices(CreatureObject* player);

	/**
	 * Player gets all languages available
	 * @pre { player is locked }
	 * @post { player is locked }
	 */
	void giveLanguages(CreatureObject* player);

	/**
	 * Enhances the target character with doc/ent buffs
	 * @pre { player is locked }
	 * @post { player is locked }
	 */
	void enhanceCharacter(CreatureObject* player);

	/**
	 * Grants badges to the player to make them glowy in the village jedi progression system
	 * @pre { player is locked }
	 * @post { player is locked }
	 */
	void grantGlowyBadges(CreatureObject* player);

	void grantJediInitiate(CreatureObject* player);

	void giveDnaTestingSet(CreatureObject* player, const String& testName);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CharacterBuilderTerminal(DummyConstructorParameter* param);

	virtual ~CharacterBuilderTerminal();

	friend class CharacterBuilderTerminalHelper;
};

} // namespace characterbuilder
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::characterbuilder;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace characterbuilder {

class CharacterBuilderTerminalImplementation : public TerminalImplementation {
protected:
	Reference<const CharacterBuilderMenuNode* > rootNode;

public:
	CharacterBuilderTerminalImplementation();

	CharacterBuilderTerminalImplementation(DummyConstructorParameter* param);

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void sendInitialChoices(CreatureObject* player);

	/**
	 * Player gets all languages available
	 * @pre { player is locked }
	 * @post { player is locked }
	 */
	void giveLanguages(CreatureObject* player);

	/**
	 * Enhances the target character with doc/ent buffs
	 * @pre { player is locked }
	 * @post { player is locked }
	 */
	void enhanceCharacter(CreatureObject* player);

	/**
	 * Grants badges to the player to make them glowy in the village jedi progression system
	 * @pre { player is locked }
	 * @post { player is locked }
	 */
	void grantGlowyBadges(CreatureObject* player);

	void grantJediInitiate(CreatureObject* player);

	void giveDnaTestingSet(CreatureObject* player, const String& testName);

	WeakReference<CharacterBuilderTerminal*> _this;

	operator const CharacterBuilderTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~CharacterBuilderTerminalImplementation();

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

	friend class CharacterBuilderTerminal;
};

class CharacterBuilderTerminalAdapter : public TerminalAdapter {
public:
	CharacterBuilderTerminalAdapter(CharacterBuilderTerminal* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void sendInitialChoices(CreatureObject* player);

	void giveLanguages(CreatureObject* player);

	void enhanceCharacter(CreatureObject* player);

	void grantGlowyBadges(CreatureObject* player);

	void grantJediInitiate(CreatureObject* player);

	void giveDnaTestingSet(CreatureObject* player, const String& testName);

};

class CharacterBuilderTerminalHelper : public DistributedObjectClassHelper, public Singleton<CharacterBuilderTerminalHelper> {
	static CharacterBuilderTerminalHelper* staticInitializer;

public:
	CharacterBuilderTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CharacterBuilderTerminalHelper>;
};

} // namespace characterbuilder
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::characterbuilder;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace characterbuilder {

class CharacterBuilderTerminalPOD : public TerminalPOD {
public:
	String _className;
	CharacterBuilderTerminalPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~CharacterBuilderTerminalPOD();

};

} // namespace characterbuilder
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::characterbuilder;

#endif /*CHARACTERBUILDERTERMINALPOD_H_*/