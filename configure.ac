# Initialize autoconf.
AC_INIT([lua-autoconf-example], [0.1], [http://github.com/daurnimator/lua-autoconf-example/issues],, [http://github.com/daurnimator/lua-autoconf-example])

AC_PREREQ([2.68]) # Force autoconf to be at least this version number
AC_CONFIG_AUX_DIR([build-aux]) # Put autotools junk in 'build-aux' subdir
AC_CONFIG_MACRO_DIR([m4]) # Automatically load scripts from 'm4' subdir

AC_CONFIG_SRCDIR([src/hello.c]) # Safety check - list a source file that wouldn't be in other directories
AC_CONFIG_HEADERS([src/config.h]) # Put configuration results here, (should be `#include`d)

# Enable "automake"
AM_INIT_AUTOMAKE([subdir-objects foreign -Wall])
AC_CONFIG_FILES([Makefile])

# Enable libtool
m4_ifdef([AM_PROG_AR], [AM_PROG_AR]) # see https://lists.gnu.org/archive/html/automake/2012-05/msg00014.html
AC_DISABLE_STATIC # change static libraries to not build by default
LT_INIT

# Check for programs
AC_PROG_CC
AX_PROG_LUA([5.1], [5.4])

# Check for libraries

# Check for header files
AX_LUA_HEADERS

# Check for typedefs, structures, and compiler characteristics

# Check for library functions

AC_OUTPUT # Do final output
