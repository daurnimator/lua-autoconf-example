# Boilerplate
ACLOCAL_AMFLAGS = -I m4 --install

# General settings
AM_LDFLAGS = -export-symbols-regex '^luaopen_' -module -avoid-version

# Shared objects to create
luaexec_LTLIBRARIES = hello.la

# per-shared object settings
hello_la_SOURCES = src/hello.c
hello_la_CFLAGS = @LUA_INCLUDE@
