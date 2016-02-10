#include "config.h"

#include <lua.h>

int luaopen_hello(lua_State *L) {
	lua_pushliteral(L, "hello");
	return 1;
}
