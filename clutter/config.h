/* clutter/config.h.  Generated from config.h.in by configure.  */
/* clutter/config.h.in.  Generated from configure.ac by autoheader.  */

/* List of Cogl drivers */
#define CLUTTER_DRIVERS "gles2"

/* Use CEX100 EGL backend */
/* #undef CLUTTER_EGL_BACKEND_CEX100 */

/* Use Generic EGL backend */
#define CLUTTER_EGL_BACKEND_GENERIC 1

/* Can use Cogl 2.0 API internally */
#define COGL_ENABLE_EXPERIMENTAL_2_0_API 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* The prefix for our gettext translation domains. */
#define GETTEXT_PACKAGE "clutter-1.0"

/* Define to 1 if you have the <CE4100/libgdl.h> header file. */
/* #undef HAVE_CE4100_LIBGDL_H */

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Have evdev support for input handling */
#define HAVE_EVDEV 1

/* Whether you have gcov */
/* #undef HAVE_GCOV */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libgdl.h> header file. */
/* #undef HAVE_LIBGDL_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Supports PangoFt2 */
#define HAVE_PANGO_FT2 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Have tslib for touchscreen handling */
/* #undef HAVE_TSLIB */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <X11/extensions/XInput2.h> header file. */
#define HAVE_X11_EXTENSIONS_XINPUT2_H 1

/* Define to 1 if we have the XCOMPOSITE X extension */
#define HAVE_XCOMPOSITE 1

/* Define to 1 if we have the XDAMAGE X extension */
#define HAVE_XDAMAGE 1

/* Define to 1 if we have the XEXT X extension */
#define HAVE_XEXT 1

/* Define to 1 if X Generic Extensions is available */
#define HAVE_XGE 1

/* Define to 1 if XI2 is available */
#define HAVE_XINPUT_2 1

/* Define to 1 if XInput 2.2 is available */
#define HAVE_XINPUT_2_2 1

/* Define to use XKB extension */
#define HAVE_XKB 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if building for Linux */
#define OS_LINUX 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=clutter"

/* Define to the full name of this package. */
#define PACKAGE_NAME "clutter"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "clutter 1.26.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "clutter"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.clutter-project.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.26.1"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* defines how to decorate public symbols while building */
#define _CLUTTER_EXTERN __attribute__((visibility("default"))) extern
