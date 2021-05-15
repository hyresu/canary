/**
 * Canary - A free and open-source MMORPG server emulator
 * Copyright (C) 2021 OpenTibiaBR <opentibiabr@outlook.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef SRC_LUA_FUNCTIONS_EVENTS_CREATURE_EVENT_FUNCTIONS_HPP_
#define SRC_LUA_FUNCTIONS_EVENTS_CREATURE_EVENT_FUNCTIONS_HPP_

#include "lua/scripts/luascript.h"

class CreatureEventFunctions final : LuaScriptInterface {
public:
	static void init(lua_State* L) {
		registerClass(L, "CreatureEvent", "", luaCreateCreatureEvent);
		registerMethod(L, "CreatureEvent", "type", luaCreatureEventType);
		registerMethod(L, "CreatureEvent", "register", luaCreatureEventRegister);
		registerMethod(L, "CreatureEvent", "onLogin", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onLogout", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onThink", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onPrepareDeath", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onDeath", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onKill", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onAdvance", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onModalWindow", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onTextEdit", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onHealthChange", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onManaChange", luaCreatureEventOnCallback);
		registerMethod(L, "CreatureEvent", "onExtendedOpcode", luaCreatureEventOnCallback);
	}

private:
	static int luaCreateCreatureEvent(lua_State* L);
	static int luaCreatureEventType(lua_State* L);
	static int luaCreatureEventRegister(lua_State* L);
	static int luaCreatureEventOnCallback(lua_State* L);
};

#endif  // SRC_LUA_FUNCTIONS_EVENTS_CREATURE_EVENT_FUNCTIONS_HPP_
