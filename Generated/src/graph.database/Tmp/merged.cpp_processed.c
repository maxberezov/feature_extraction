# 1 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4

# 1 "/usr/include/stdc-predef.h" 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
# 52 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 8.0.0.  Version 8.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2014, plus Amendment 1 (published
   2015-05-15).  */


/* We do not support C11 <threads.h>.  */
# 1 "<command-line>" 2
# 1 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */





# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.

   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */
# 122 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */







/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */
# 156 "/usr/include/features.h" 3 4
/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
# 180 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
# 191 "/usr/include/features.h" 3 4
/* This is to enable the ISO C11 extension.  */





/* This is to enable the ISO C99 extension.  */





/* This is to enable the ISO C90 Amendment 1:1995 extension.  */





/* This is to enable compatibility for ISO C++11.

   So far g++ does not provide a macro.  Check the temporary macro for
   now, too.  */





/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
# 343 "/usr/include/features.h" 3 4
/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
# 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 346 "/usr/include/features.h" 2 3 4

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* This is here only because every header file already includes this one.  */


# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* We are almost always included from features.h. */




/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */




/* Some user header file might have defined this before.  */
# 80 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */




/* C++ needs to know that types and declarations are C, not C++.  */
# 106 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* The standard library needs the functions from the ISO C90 standard
   in the std namespace.  At the same time we want to be safe for
   future changes and we include the ISO C99 code in the non-standard
   namespace __c99.  The C++ wrapper header take case of adding the
   definitions to the global namespace.  */
# 119 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* For compatibility we do not add the declarations into any
   namespace.  They will end up in the global namespace which is what
   old code expects.  */
# 131 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Fortify support.  */
# 147 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Support for flexible arrays.  */
# 165 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
# 200 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */




/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */







/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* This declaration tells the compiler that the value is constant.  */






/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
# 252 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* gcc allows marking deprecated functions.  */






/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */






/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */







/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */






/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
# 305 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */






/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */






/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.

   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked fot by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
# 346 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */





/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */




/* __restrict is known in EGCS 1.2 and above. */




/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */







/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */






# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 242 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;





/* quad_t is also 64 bits.  */

typedef long int __quad_t;
typedef unsigned long int __u_quad_t;






/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
# 116 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
/* No need to mark the typedef with __extension__.   */




# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
# 77 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */


/* Same for ino_t and ino64_t.  */



/* Number of descriptors that can fit in an `fd_set'.  */
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t; /* Type of device numbers.  */
typedef unsigned int __uid_t; /* Type of user identifications.  */
typedef unsigned int __gid_t; /* Type of group identifications.  */
typedef unsigned long int __ino_t; /* Type of file serial numbers.  */
typedef unsigned long int __ino64_t; /* Type of file serial numbers (LFS).*/
typedef unsigned int __mode_t; /* Type of file attribute bitmasks.  */
typedef unsigned long int __nlink_t; /* Type of file link counts.  */
typedef long int __off_t; /* Type of file sizes and offsets.  */
typedef long int __off64_t; /* Type of file sizes and offsets (LFS).  */
typedef int __pid_t; /* Type of process identifications.  */
typedef struct { int __val[2]; } __fsid_t; /* Type of file system IDs.  */
typedef long int __clock_t; /* Type of CPU usage counts.  */
typedef unsigned long int __rlim_t; /* Type for resource measurement.  */
typedef unsigned long int __rlim64_t; /* Type for resource measurement (LFS).  */
typedef unsigned int __id_t; /* General type for IDs.  */
typedef long int __time_t; /* Seconds since the Epoch.  */
typedef unsigned int __useconds_t; /* Count of microseconds.  */
typedef long int __suseconds_t; /* Signed count of microseconds.  */

typedef int __daddr_t; /* The type of a disk address.  */
typedef int __key_t; /* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
typedef int __clockid_t;

/* Timer ID returned by `timer_create'.  */
typedef void * __timer_t;

/* Type to represent block size.  */
typedef long int __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

/* Type to count file system blocks.  */
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

/* Type to count file system nodes.  */
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */
typedef long int __fsword_t;

typedef long int __ssize_t; /* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */
typedef unsigned long int __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t; /* Type of file sizes and offsets (LFS).  */
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef long int __intptr_t;

/* Duplicate info from sys/socket.h.  */
typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4







/* Define outside of namespace so the C++ is happy.  */
struct _IO_FILE;


/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;





# 63 "/usr/include/stdio.h" 3 4
/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Per Bothner <bothner@cygnus.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.

   As a special exception, if you link the code in this file with
   files compiled with a GNU compiler to produce an executable,
   that does not cause the resulting executable to be covered by
   the GNU Lesser General Public License.  This exception does not
   however invalidate any other reasons why the executable file
   might be covered by the GNU Lesser General Public License.
   This exception applies to code released by its copyright holders
   in files containing the exception.  */




# 1 "/usr/include/_G_config.h" 1 3 4
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */




/* Define types for libio in terms of the standard internal type names.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 10 "/usr/include/_G_config.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
/* Copyright (C) 1995-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *      ISO C99 Standard: 7.24
 *	Extended multibyte and wide character utilities	<wchar.h>
 */
# 81 "/usr/include/wchar.h" 3 4
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value; /* Value so far.  */
} __mbstate_t;




/* The rest of the file is only used if used if __need_mbstate_t is not
   defined.  */
# 900 "/usr/include/wchar.h" 3 4
/* Undefine all __need_* constants in case we are included to get those
   constants but the whole file was already read.  */
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 45 "/usr/include/_G_config.h" 3 4
/* These library features are always available in the GNU C library.  */







/* This is defined by <bits/stat.h> if `st_blksize' exists.  */
# 32 "/usr/include/libio.h" 2 3 4
/* ALL of these should be defined in _G_config.h */
# 47 "/usr/include/libio.h" 3 4
/* This define avoids name pollution if we're using GNU stdarg.h */

# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 50 "/usr/include/libio.h" 2 3 4
# 86 "/usr/include/libio.h" 3 4
/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */
# 124 "/usr/include/libio.h" 3 4
/* These are "formatting flags" matching the iostream fmtflags enum values. */
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;

/* Handle lock.  */



typedef void _IO_lock_t;



/* A streammarker remembers a position in a buffer. */

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;
# 173 "/usr/include/libio.h" 3 4
};

/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags; /* High-order word is _IO_MAGIC; rest is flags. */


  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr; /* Current read pointer */
  char* _IO_read_end; /* End of get area. */
  char* _IO_read_base; /* Start of putback+get area. */
  char* _IO_write_base; /* Start of put area. */
  char* _IO_write_ptr; /* Current put pointer. */
  char* _IO_write_end; /* End of put area. */
  char* _IO_buf_base; /* Start of reserve area. */
  char* _IO_buf_end; /* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base; /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset; /* This used to be _offset but it's too small.  */


  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  /*  char* _save_gptr;  char* _save_egptr; */

  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 329 "/usr/include/libio.h" 3 4
/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);

/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
   unless there is an error.  Return number of bytes written.  If
   there is an error, return 0 and do not write anything.  If the file
   has been opened for append (__mode.__append set), then set the file
   pointer to the end of the file and then do the write; if not, just
   write at the current file pointer.  */
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);

/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);

/* This one is for Emacs. */



extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * , const char * ,
   __gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;
# 75 "/usr/include/stdio.h" 2 3 4
# 107 "/usr/include/stdio.h" 3 4
/* The type of the second argument to `fgetpos' and `fsetpos'.  */


typedef _G_fpos_t fpos_t;








/* The possibilities for the third argument to `setvbuf'.  */





/* Default buffer size.  */





/* End of file character.
   Some things throughout the library rely on this being -1.  */





/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
# 155 "/usr/include/stdio.h" 3 4
/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
/* Copyright (C) 1994-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 165 "/usr/include/stdio.h" 2 3 4


/* Standard streams.  */
extern struct _IO_FILE *stdin; /* Standard input stream.  */
extern struct _IO_FILE *stdout; /* Standard output stream.  */
extern struct _IO_FILE *stderr; /* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */





/* Remove file FILENAME.  */
extern int remove (const char *__filename) ;
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) ;









/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern FILE *tmpfile (void) ;
# 208 "/usr/include/stdio.h" 3 4
/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) ;

# 232 "/usr/include/stdio.h" 3 4

/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);

# 266 "/usr/include/stdio.h" 3 4


/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char * __filename,
      const char * __modes) ;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char * __filename,
        const char * __modes,
        FILE * __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 329 "/usr/include/stdio.h" 3 4

/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE * __stream, char * __buf) ;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE * __stream, char * __buf,
      int __modes, size_t __n) ;

# 351 "/usr/include/stdio.h" 3 4

/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE * __stream,
      const char * __format, ...);
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char * __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char * __s,
      const char * __format, ...) ;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE * __s, const char * __format,
       __gnuc_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char * __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char * __s, const char * __format,
       __gnuc_va_list __arg) ;




/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char * __s, size_t __maxlen,
       const char * __format, ...)
     ;

extern int vsnprintf (char * __s, size_t __maxlen,
        const char * __format, __gnuc_va_list __arg)
     ;

# 420 "/usr/include/stdio.h" 3 4

/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE * __stream,
     const char * __format, ...) ;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char * __format, ...) ;
/* Read formatted input from S.  */
extern int sscanf (const char * __s,
     const char * __format, ...) ;
# 452 "/usr/include/stdio.h" 3 4
extern int __isoc99_fscanf (FILE * __stream,
       const char * __format, ...) ;
extern int __isoc99_scanf (const char * __format, ...) ;
extern int __isoc99_sscanf (const char * __s,
       const char * __format, ...) ;










/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE * __s, const char * __format,
      __gnuc_va_list __arg)
     ;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char * __format, __gnuc_va_list __arg)
     ;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char * __s,
      const char * __format, __gnuc_va_list __arg)
     ;
# 508 "/usr/include/stdio.h" 3 4
extern int __isoc99_vfscanf (FILE * __s,
        const char * __format,
        __gnuc_va_list __arg) ;
extern int __isoc99_vscanf (const char * __format,
       __gnuc_va_list __arg) ;
extern int __isoc99_vsscanf (const char * __s,
        const char * __format,
        __gnuc_va_list __arg) ;











/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);


/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */
# 565 "/usr/include/stdio.h" 3 4

/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);


/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */
# 617 "/usr/include/stdio.h" 3 4

/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char * __s, int __n, FILE * __stream)
     ;



/* Get a newline-terminated string from stdin, removing the newline.
   DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.

   The function has been officially removed in ISO C11.  This opportunity
   is used to also remove it from the GNU feature list.  It is now only
   available when explicitly using an old ISO C, Unix, or POSIX standard.
   GCC defines _GNU_SOURCE when building C++ code and the function is still
   in C++11, so it is also available for C++.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) ;


# 684 "/usr/include/stdio.h" 3 4

/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char * __s, FILE * __stream);

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void * __ptr, size_t __size,
       size_t __n, FILE * __stream) ;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void * __ptr, size_t __size,
        size_t __n, FILE * __s);

# 744 "/usr/include/stdio.h" 3 4

/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) ;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);


/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */
# 792 "/usr/include/stdio.h" 3 4


/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE * __stream, fpos_t * __pos);
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4

/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) ;
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) ;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) ;

# 841 "/usr/include/stdio.h" 3 4

/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s);


/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
/* Declare sys_errlist and sys_nerr, or don't.  Compatibility (do) version.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */





/* sys_errlist and sys_nerr are deprecated.  Use strerror instead.  */
# 854 "/usr/include/stdio.h" 2 3 4
# 930 "/usr/include/stdio.h" 3 4
/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
# 942 "/usr/include/stdio.h" 3 4

# 2 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */



# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 25 "/usr/include/stdlib.h" 2 3 4

/* Get size_t, wchar_t and NULL from <stddef.h>.  */





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 283 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 310 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t;
# 362 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 33 "/usr/include/stdlib.h" 2 3 4


# 95 "/usr/include/stdlib.h" 3 4

/* Returned by `div'.  */
typedef struct
  {
    int quot; /* Quotient.  */
    int rem; /* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */

typedef struct
  {
    long int quot; /* Quotient.  */
    long int rem; /* Remainder.  */
  } ldiv_t;






/* Returned by `lldiv'.  */
 typedef struct
  {
    long long int quot; /* Quotient.  */
    long long int rem; /* Remainder.  */
  } lldiv_t;





/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */




/* Maximum length of a multibyte character in the current locale.  */

extern size_t __ctype_get_mb_cur_max (void) ;



/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
     ;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
     ;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
     ;




/* Convert a string to a long long integer.  */
 extern long long int atoll (const char *__nptr)
     ;




/* Convert a string to a floating-point number.  */
extern double strtod (const char * __nptr,
        char ** __endptr)
     ;




/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char * __nptr,
       char ** __endptr) ;

extern long double strtold (const char * __nptr,
       char ** __endptr)
     ;




/* Convert a string to a long integer.  */
extern long int strtol (const char * __nptr,
   char ** __endptr, int __base)
     ;
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char * __nptr,
      char ** __endptr, int __base)
     ;

# 206 "/usr/include/stdlib.h" 3 4

/* Convert a string to a quadword integer.  */

extern long long int strtoll (const char * __nptr,
         char ** __endptr, int __base)
     ;
/* Convert a string to an unsigned quadword integer.  */

extern unsigned long long int strtoull (const char * __nptr,
     char ** __endptr, int __base)
     ;

# 372 "/usr/include/stdlib.h" 3 4

/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) ;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) ;

# 464 "/usr/include/stdlib.h" 3 4

/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size) ;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     ;





/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     ;
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) ;

# 513 "/usr/include/stdlib.h" 3 4

/* Abort execution and generate a core-dump.  */
extern void abort (void) ;


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) ;
# 530 "/usr/include/stdlib.h" 3 4

# 539 "/usr/include/stdlib.h" 3 4

/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) ;











/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) ;





/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) ;

# 711 "/usr/include/stdlib.h" 3 4

/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) ;

# 738 "/usr/include/stdlib.h" 3 4
/* Shorthand for type of comparison functions.  */


typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4

/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;





/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;







/* Return the absolute value of X.  */
extern int abs (int __x) ;
extern long int labs (long int __x) ;



 extern long long int llabs (long long int __x)
     ;




/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;




 extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;

# 859 "/usr/include/stdlib.h" 3 4

/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) ;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t * __pwc,
     const char * __s, size_t __n) ;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) ;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t * __pwcs,
   const char * __s, size_t __n) ;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char * __s,
   const wchar_t * __pwcs, size_t __n)
     ;

# 911 "/usr/include/stdlib.h" 3 4
/* X/Open pseudo terminal handling.  */
# 954 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 955 "/usr/include/stdlib.h" 2 3 4

/* Define some macros helping to catch buffer overflows.  */
# 967 "/usr/include/stdlib.h" 3 4

# 3 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c" 2
# 1 "/usr/include/time.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */






# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 28 "/usr/include/time.h" 2 3 4






/* Get size_t and NULL from <stddef.h>.  */


# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
/* A null pointer constant.  */
# 38 "/usr/include/time.h" 2 3 4

/* This defines CLOCKS_PER_SEC, which is the number of processor clock
   ticks per second.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
/* System-dependent timing definitions.  Linux version.
   Copyright (C) 1996-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <time.h> instead.
 */
# 42 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
/* ISO/IEC 9899:1999 7.23.1: Components of time
   The macro `CLOCKS_PER_SEC' is an expression with type `clock_t' that is
   the number per second of the value returned by the `clock' function.  */
/* CAE XSH, Issue 4, Version 2: <time.h>
   The value of CLOCKS_PER_SEC is required to be 1 million on all
   XSI-conformant systems. */
# 42 "/usr/include/time.h" 2 3 4

/* This is the obsolete POSIX.1-1988 name for the same constant.  */
# 55 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 56 "/usr/include/time.h" 2 3 4


/* Returned by `clock'.  */
typedef __clock_t clock_t;

# 71 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 72 "/usr/include/time.h" 2 3 4


/* Returned by `time'.  */
typedef __time_t time_t;

# 131 "/usr/include/time.h" 3 4

/* Used by other time functions.  */
struct tm
{
  int tm_sec; /* Seconds.	[0-60] (1 leap second) */
  int tm_min; /* Minutes.	[0-59] */
  int tm_hour; /* Hours.	[0-23] */
  int tm_mday; /* Day.		[1-31] */
  int tm_mon; /* Month.	[0-11] */
  int tm_year; /* Year	- 1900.  */
  int tm_wday; /* Day of week.	[0-6] */
  int tm_yday; /* Days in year.[0-365]	*/
  int tm_isdst; /* DST.		[-1/0/1]*/





  long int __tm_gmtoff; /* Seconds east of UTC.  */
  const char *__tm_zone; /* Timezone abbreviation.  */

};

# 186 "/usr/include/time.h" 3 4

/* Time used by the program so far (user time + system time).
   The result / CLOCKS_PER_SECOND is program time in seconds.  */
extern clock_t clock (void) ;

/* Return the current time and put it in *TIMER if TIMER is not NULL.  */
extern time_t time (time_t *__timer) ;

/* Return the difference between TIME1 and TIME0.  */
extern double difftime (time_t __time1, time_t __time0)
     ;

/* Return the `time_t' representation of TP and normalize TP.  */
extern time_t mktime (struct tm *__tp) ;


/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE characters and return the number
   of characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t strftime (char * __s, size_t __maxsize,
   const char * __format,
   const struct tm * __tp) ;

# 236 "/usr/include/time.h" 3 4

/* Return the `struct tm' representation of *TIMER
   in Universal Coordinated Time (aka Greenwich Mean Time).  */
extern struct tm *gmtime (const time_t *__timer) ;

/* Return the `struct tm' representation
   of *TIMER in the local timezone.  */
extern struct tm *localtime (const time_t *__timer) ;

# 258 "/usr/include/time.h" 3 4

/* Return a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */
extern char *asctime (const struct tm *__tp) ;

/* Equivalent to `asctime (localtime (timer))'.  */
extern char *ctime (const time_t *__timer) ;

# 281 "/usr/include/time.h" 3 4
/* Defined in localtime.c.  */
extern char *__tzname[2]; /* Current timezone names.  */
extern int __daylight; /* If daylight-saving time is ever in use.  */
extern long int __timezone; /* Seconds west of UTC.  */
# 308 "/usr/include/time.h" 3 4
/* Nonzero if YEAR is a leap year (every 4 years,
   except every 100th isn't, and every 400th is).  */
# 430 "/usr/include/time.h" 3 4

# 4 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c" 2



# 6 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749010176488()
{



int A[1000];

int b;

for(b = 1; b <= 131071; b += 1) {
int a;
kern_1587749010176488: for(a = 1; a <= 131071; a += 1) {
int var_a = A[a]-9;
int var_b = A[a-1]-17;
}
}




return 0;
}
int kern_1587749011813622()
{



int A[1000][1000];
int B[1000][1000];
int C[1000][1000];

int d;

for(d = 3; d <= 124; d += 1) {
int c;
for(c = 5; c <= 250; c += 1) {
int b;
for(b = 5; b <= 250; b += 1) {
int a;
kern_1587749011813622: for(a = 5; a <= 250; a += 1) {
C[a][b] = C[a-5][b-3]*30;

C[a][b] = 0;

B[a][b] = 6;
B[a+5][b+3] = A[a][b];
}
}
}
}






return 0;
}
int kern_1587749006554335()
{



int C[1000][1000][1000];
int B[1000][1000];
int A[1000][1000][1000];

int d;

for(d = 4; d <= 15; d += 1) {
int c;
for(c = 5; c <= 15; c += 1) {
int b;
for(b = 5; b <= 15; b += 1) {
int a;
kern_1587749006554335: for(a = 5; a <= 15; a += 1) {
A[a][b][c] = A[a][b][c-1]+26;

B[a][b] = B[a+5][b]+C[a][b][c];

C[a][b][c] = 24;
C[a-4][b-5][c-3] = 23;

C[a][b][c] = 36;

C[a][b][c] = A[a][b][c]-B[a][b]*C[a][b][c];
A[a][b][c] = A[a-1][b-4][c-1]-C[a][b][c]+B[a][b];
}
}
}
}






return 0;
}
int kern_1587749003904691()
{



int C[1000][1000];
int E[1000][1000][1000];
int A[1000];
int D[1000];
int B[1000][1000][1000];

int c;

for(c = 3; c <= 31; c += 1) {
int b;
for(b = 1; b <= 61; b += 1) {
int a;
kern_1587749003904691: for(a = 2; a <= 61; a += 1) {
E[a][b][c] = E[a-2][b-1][c-3]+32;

int var_a = B[a][b][c]-5;
int var_b = B[a+2][b+2][c]+10;
}
}
}
# 138 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
int kern_1587749002369943()
{



int B[1000][1000];
int A[1000][1000];

int c;

for(c = 5; c <= 506; c += 1) {
int b;
for(b = 5; b <= 123; b += 1) {
int a;
kern_1587749002369943: for(a = 5; a <= 123; a += 1) {
A[a][b] = A[a+1][b+2]-27;

A[a][b] = 7;
}
}
}





return 0;
}
int kern_1587748999542687()
{



int A[1000][1000];
int B[1000][1000];

int a;

kern_1587748999542687: for(a = 4; a <= 124; a += 1) {
B[a][a] = 35;
B[a+3][a+2] = A[a][a];

B[a][a] = A[a][a];
}





return 0;
}
int kern_1587749009106069()
{



int A[1000][1000][1000];
int B[1000][1000][1000];

int b;

for(b = 2; b <= 63; b += 1) {
int a;
kern_1587749009106069: for(a = 5; a <= 27; a += 1) {
B[a][b][a] = B[a-4][b-1][a-3]-12;

A[a][b][a] = A[a+4][b][a+4]+B[a][b][a];

B[a][b][a] = 50;
}
}





return 0;
}
int kern_1587748998516653()
{



int C[1000];
int D[1000][1000];
int A[1000][1000][1000];
int B[1000][1000][1000];
int E[1000][1000];

int a;

kern_1587748998516653: for(a = 0; a <= 10; a += 1) {
D[a][a] = 42;
D[a+4][a+4] = 38;

int var_a = A[a][a][a]*43;
int var_b = A[a+4][a+5][a]+22;
}
# 246 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
int kern_1587749005689018()
{



int A[1000];
int B[1000][1000];

int b;

for(b = 5; b <= 124; b += 1) {
int a;
kern_1587749005689018: for(a = 3; a <= 250; a += 1) {
A[a] = A[a+3]+47;

A[a] = B[a][b]*A[a];
B[a][b] = A[a];

B[a][b] = B[a+5][b+3]-48;
}
}





return 0;
}
int kern_1587749005468089()
{



int D[1000];
int B[1000][1000];
int C[1000][1000][1000];
int A[1000][1000][1000];

int c;

for(c = 0; c <= 13; c += 1) {
int b;
for(b = 1; b <= 15; b += 1) {
int a;
kern_1587749005468089: for(a = 0; a <= 15; a += 1) {
C[a][b][c] = C[a][b-1][c]+50;

B[a][b] = B[a+3][b+3]-C[a][b][c]*A[a][b][c];

D[a] = B[a][b]+C[a][b][c];
D[a] = B[a][b];

A[a][b][c] = 2;
A[a+5][b+4][c+2] = 13;

B[a][b] = D[a]-D[a];

C[a][b][c] = B[a][b]*D[a]-C[a][b][c];
B[a][b] = B[a][b-1]+C[a][b][c];
}
}
}







return 0;
}
int kern_1587749013210712()
{



int A[1000];

int b;

for(b = 1; b <= 262143; b += 1) {
int a;
kern_1587749013210712: for(a = 1; a <= 262143; a += 1)
A[a] = A[a-1]-37;
}




return 0;
}
int kern_1587749011116815()
{



int A[1000][1000];
int C[1000][1000][1000];
int B[1000][1000];

int b;

for(b = 3; b <= 15; b += 1) {
int a;
kern_1587749011116815: for(a = 5; a <= 31; a += 1) {
A[a][b] = A[a][b+4]+B[a][b];

C[a][b][a] = A[a][b];
C[a-4][b-2][a-5] = B[a][b];

A[a][b] = 44;
}
}






return 0;
}
int kern_1587749006722991()
{



int B[1000][1000];
int A[1000][1000];
int C[1000];

int c;

for(c = 0; c <= 127; c += 1) {
int b;
for(b = 5; b <= 511; b += 1) {
int a;
kern_1587749006722991: for(a = 5; a <= 511; a += 1) {
C[a] = B[a][b]-A[a][b];
A[a][b] = B[a-5][b]+C[a]*28;
}
}
}






return 0;
}
int kern_1587749008067154()
{



int A[1000][1000];

int d;

for(d = 3; d <= 510; d += 1) {
int c;
for(c = 5; c <= 508; c += 1) {
int b;
for(b = 5; b <= 508; b += 1) {
int a;
kern_1587749008067154: for(a = 5; a <= 508; a += 1) {
A[a][b] = A[a+3][b+1]*4;

A[a][b] = 20;
}
}
}
}




return 0;
}
int kern_1587749011292936()
{



int A[1000];
int B[1000][1000][1000];
int D[1000];
int C[1000][1000][1000];

int b;

for(b = 0; b <= 27; b += 1) {
int a;
kern_1587749011292936: for(a = 0; a <= 58; a += 1) {
A[a] = A[a+1]+D[a]-C[a][b][a]*B[a][b][a];

B[a][b][a] = B[a+1][b+4][a]-33;

int var_a = A[a]-0;
int var_b = A[a]*17;

C[a][b][a] = C[a][b][a]-A[a]*A[a];
B[a][b][a] = C[a+3][b+1][a+5]+B[a][b][a]-A[a];
}
}







return 0;
}
int kern_1587749007396552()
{



int C[1000];
int A[1000];
int B[1000];

int b;

for(b = 2; b <= 65535; b += 1) {
int a;
kern_1587749007396552: for(a = 2; a <= 65535; a += 1) {
B[a] = B[a+3]-C[a];

B[a] = 37;

C[a] = A[a]-B[a];
B[a] = A[a-2]*B[a]-C[a];
}
}






return 0;
}
int kern_1587749010388676()
{



int A[1000][1000];
int B[1000][1000];
int C[1000][1000][1000];

int b;

for(b = 4; b <= 15; b += 1) {
int a;
kern_1587749010388676: for(a = 5; a <= 63; a += 1) {
A[a][b] = A[a+2][b+5]+27;

B[a][b] = C[a][b][a]-A[a][b];
B[a+2][b+5] = A[a][b];

int var_a = A[a][b]+8;
int var_b = A[a][b+3]-6;

A[a][b] = C[a][b][a]-29;
B[a][b] = C[a-5][b-4][a-4]*4;
}
}






return 0;
}
int kern_1587748998692201()
{



int A[1000];
int B[1000][1000];

int a;

kern_1587748998692201: for(a = 0; a <= 122; a += 1) {
B[a][a] = 13;
B[a][a+5] = 44;
}





return 0;
}
int kern_1587749014283363()
{



int C[1000];
int A[1000][1000][1000];
int B[1000][1000];

int d;

for(d = 0; d <= 59; d += 1) {
int c;
for(c = 0; c <= 30; c += 1) {
int b;
for(b = 1; b <= 27; b += 1) {
int a;
kern_1587749014283363: for(a = 1; a <= 27; a += 1) {
C[a] = C[a-1]-B[a][b];

A[a][b][c] = A[a+4][b+1][c+4]-C[a]*23;

int var_a = B[a][b]-49;
int var_b = B[a+3][b]+43;
}
}
}
}






return 0;
}
int kern_1587749002794248()
{



int B[1000][1000][1000];
int A[1000][1000][1000];

int a;

kern_1587749002794248: for(a = 0; a <= 26; a += 1) {
B[a][a][a] = B[a+5][a+3][a+2]-A[a][a][a];

B[a][a][a] = 26;
}





return 0;
}
int kern_1587749004483961()
{



int B[1000];
int A[1000][1000][1000];

int b;

for(b = 2; b <= 59; b += 1) {
int a;
kern_1587749004483961: for(a = 5; a <= 58; a += 1) {
B[a] = B[a-5]-34;

A[a][b][a] = A[a+5][b+4][a+1]-14;

A[a][b][a] = A[a+3][b+1][a+2]-8;

B[a] = 10;

int var_a = A[a][b][a]+44;
int var_b = A[a-5][b-2][a-1]-41;
}
}





return 0;
}
int kern_1587749009653588()
{



int B[1000][1000];
int A[1000][1000][1000];
int C[1000][1000];

int a;

kern_1587749009653588: for(a = 5; a <= 11; a += 1) {
C[a][a] = C[a-3][a-5]+45;

C[a][a] = C[a+2][a+5]-19+B[a][a];

A[a][a][a] = A[a+2][a+1][a+2]-45;

A[a][a][a] = C[a][a]-B[a][a];

int var_a = C[a][a]+25;
int var_b = C[a][a-3]+14;

A[a][a][a] = A[a][a][a]*C[a][a]+9;
B[a][a] = A[a-5][a-1][a-5]+B[a][a]*C[a][a];
}






return 0;
}
int kern_1587749010939646()
{



int B[1000][1000][1000];
int A[1000][1000][1000];

int c;

for(c = 4; c <= 31; c += 1) {
int b;
for(b = 1; b <= 15; b += 1) {
int a;
kern_1587749010939646: for(a = 3; a <= 26; a += 1) {
A[a][b][c] = A[a-3][b-1][c-4]+25;

B[a][b][c] = B[a+5][b+1][c+1]-21;
}
}
}





return 0;
}
int kern_1587749009828687()
{



int B[1000];
int A[1000];

int c;

for(c = 4; c <= 524287; c += 1) {
int b;
for(b = 4; b <= 524287; b += 1) {
int a;
kern_1587749009828687: for(a = 4; a <= 524287; a += 1) {
A[a] = A[a-4]*26;

A[a] = 49;
}
}
}





return 0;
}
int kern_1587749004858126()
{



int A[1000][1000];
int B[1000][1000][1000];

int d;

for(d = 4; d <= 10; d += 1) {
int c;
for(c = 3; c <= 27; c += 1) {
int b;
for(b = 4; b <= 13; b += 1) {
int a;
kern_1587749004858126: for(a = 4; a <= 13; a += 1) {
B[a][b][c] = B[a-4][b-3][c-4]*42;

A[a][b] = 50;
A[a+1][b+1] = 5;

A[a][b] = A[a][b]+B[a][b][c];
B[a][b][c] = A[a+4][b+1]-B[a][b][c];

int var_a = B[a][b][c]-6;
int var_b = B[a+2][b+4][c+5]-30;
}
}
}
}





return 0;
}
int kern_1587749013585037()
{



int B[1000];
int A[1000][1000][1000];

int c;

for(c = 3; c <= 10; c += 1) {
int b;
for(b = 0; b <= 60; b += 1) {
int a;
kern_1587749013585037: for(a = 2; a <= 60; a += 1) {
B[a] = B[a+3]-A[a][b][c];

B[a] = B[a+4]*A[a][b][c];

A[a][b][c] = A[a+3][b+3][c+5]-B[a];

A[a][b][c] = 49;
}
}
}





return 0;
}
int kern_15877490144631()
{



int C[1000][1000];
int B[1000][1000];
int A[1000][1000];

int d;

for(d = 5; d <= 253; d += 1) {
int c;
for(c = 4; c <= 253; c += 1) {
int b;
for(b = 4; b <= 253; b += 1) {
int a;
kern_15877490144631: for(a = 4; a <= 253; a += 1) {
B[a][b] = B[a-3][b]*42;

C[a][b] = C[a-2][b-3]-18;

C[a][b] = C[a+2][b+2]+B[a][b]*A[a][b];

B[a][b] = 24;

A[a][b] = C[a][b]+9*B[a][b];
B[a][b] = C[a-4][b-3]-A[a][b]*B[a][b];
}
}
}
}






return 0;
}
int kern_1587749010766286()
{



int B[1000][1000][1000];
int A[1000][1000];

int a;

kern_1587749010766286: for(a = 0; a <= 507; a += 1) {
A[a][a] = 36;
A[a+4][a+2] = 30;
}





return 0;
}
int kern_1587749001236222()
{



int A[1000][1000];
int B[1000][1000][1000];

int d;

for(d = 0; d <= 13; d += 1) {
int c;
for(c = 5; c <= 26; c += 1) {
int b;
for(b = 2; b <= 28; b += 1) {
int a;
kern_1587749001236222: for(a = 2; a <= 28; a += 1) {
A[a][b] = A[a][b-4]-34;

A[a][b] = A[a-2][b-5]*9;

B[a][b][c] = B[a+3][b+5][c+2]*33;

A[a][b] = A[a+5][b+1]*B[a][b][c];

A[a][b] = B[a][b][c]+A[a][b];
B[a][b][c] = B[a][b+2][c+1]+A[a][b];
}
}
}
}





return 0;
}
int kern_1587749006386581()
{



int A[1000][1000][1000];
int B[1000];

int b;

for(b = 3; b <= 65535; b += 1) {
int a;
kern_1587749006386581: for(a = 3; a <= 65535; a += 1) {
B[a] = B[a-3]+16;

B[a] = 1;
}
}





return 0;
}
int kern_158774899977151()
{



int B[1000][1000][1000];
int A[1000];

int b;

for(b = 4; b <= 63; b += 1) {
int a;
kern_158774899977151: for(a = 5; a <= 15; a += 1) {
A[a] = A[a-5]*B[a][b][a];

B[a][b][a] = B[a-5][b-4][a-1]*20;

A[a] = A[a-1]+35;

int var_a = B[a][b][a]*38;
int var_b = B[a-1][b-2][a-3]*49;

int var_c = B[a][b][a]*29;
int var_d = B[a-1][b-2][a]-7;
}
}





return 0;
}
int kern_1587749008235272()
{



int B[1000][1000][1000];
int A[1000][1000];
int C[1000][1000];

int c;

for(c = 1; c <= 15; c += 1) {
int b;
for(b = 2; b <= 15; b += 1) {
int a;
kern_1587749008235272: for(a = 3; a <= 63; a += 1) {
B[a][b][c] = 8+C[a][b];
B[a-3][b-2][c-1] = A[a][b]*C[a][b];

A[a][b] = 24;
A[a+4][b+2] = 28;

A[a][b] = C[a][b]*6-B[a][b][c];
C[a][b] = C[a][b-2]+B[a][b][c];
}
}
}






return 0;
}
int kern_1587749015835003()
{



int B[1000][1000];
int E[1000];
int D[1000][1000];
int C[1000][1000][1000];
int A[1000];

int c;

for(c = 0; c <= 13; c += 1) {
int b;
for(b = 3; b <= 61; b += 1) {
int a;
kern_1587749015835003: for(a = 3; a <= 10; a += 1) {
E[a] = E[a-3]*C[a][b][c]-B[a][b]+D[a][b];

B[a][b] = B[a-1][b-3]+42;

C[a][b][c] = C[a+5][b+2][c+2]*28;

E[a] = A[a]+B[a][b]-27-A[a];

E[a] = E[a]*D[a][b];
C[a][b][c] = E[a+5]+A[a]*B[a][b]-8;
}
}
}
# 1028 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
int kern_1587749007059508()
{



int B[1000][1000];
int C[1000];
int A[1000][1000];

int d;

for(d = 3; d <= 255; d += 1) {
int c;
for(c = 2; c <= 255; c += 1) {
int b;
for(b = 2; b <= 255; b += 1) {
int a;
kern_1587749007059508: for(a = 2; a <= 255; a += 1) {
B[a][b] = B[a-1][b-3]+10;

C[a] = C[a-1]-27;

A[a][b] = A[a-2][b-1]+28;

C[a] = C[a+1]+B[a][b];
}
}
}
}






return 0;
}
int kern_1587749001918364()
{



int B[1000][1000];
int A[1000][1000][1000];

int d;

for(d = 4; d <= 58; d += 1) {
int c;
for(c = 2; c <= 11; c += 1) {
int b;
for(b = 3; b <= 58; b += 1) {
int a;
kern_1587749001918364: for(a = 3; a <= 58; a += 1) {
A[a][b][c] = A[a-3][b-2][c-4]-B[a][b];

A[a][b][c] = 13;

int var_a = A[a][b][c]*6;
int var_b = A[a+5][b+3][c+3]-5;
}
}
}
}





return 0;
}
int kern_1587749014982876()
{



int B[1000];
int C[1000][1000];
int A[1000];

int a;

kern_1587749014982876: for(a = 5; a <= 127; a += 1) {
A[a] = A[a-3]*45;

A[a] = A[a-4]-9;

B[a] = B[a-2]-34;

C[a][a] = C[a-2][a-5]*16;

B[a] = B[a+3]-45;
}






return 0;
}
int kern_1587749003472841()
{



int A[1000][1000];

int c;

for(c = 5; c <= 251; c += 1) {
int b;
for(b = 4; b <= 511; b += 1) {
int a;
kern_1587749003472841: for(a = 4; a <= 511; a += 1) {
A[a][b] = A[a][b+4]*19;

int var_a = A[a][b]*30;
int var_b = A[a-4][b-5]+18;

int var_c = A[a][b]*48;
int var_d = A[a][b-3]*35;
}
}
}




return 0;
}
int kern_1587749012340606()
{



int C[1000][1000][1000];
int B[1000][1000][1000];
int A[1000];

int a;

kern_1587749012340606: for(a = 4; a <= 27; a += 1) {
B[a][a][a] = B[a][a][a-4]+39;

A[a] = A[a+4]+B[a][a][a]-C[a][a][a];

C[a][a][a] = C[a+4][a+1][a+4]-30;
}






return 0;
}
int kern_1587749005241701()
{



int A[1000];
int B[1000][1000][1000];

int a;

kern_1587749005241701: for(a = 0; a <= 26; a += 1) {
B[a][a][a] = B[a+4][a+5][a+4]+17;

int var_a = A[a]-10;
int var_b = A[a]+6;
}





return 0;
}
int kern_1587749003692633()
{



int A[1000];
int B[1000][1000][1000];

int b;

for(b = 2; b <= 131071; b += 1) {
int a;
kern_1587749003692633: for(a = 2; a <= 131071; a += 1) {
A[a] = 12;
A[a-2] = 9;
}
}





return 0;
}
int kern_1587749013392258()
{



int A[1000][1000][1000];
int B[1000][1000];

int a;

kern_1587749013392258: for(a = 3; a <= 58; a += 1) {
A[a][a][a] = A[a][a-1][a-3]+B[a][a];

B[a][a] = A[a][a][a];
A[a][a][a] = B[a][a]+7;

A[a][a][a] = A[a+1][a+3][a+5]*16;
}





return 0;
}
int kern_1587749003202385()
{



int B[1000];
int A[1000][1000][1000];

int b;

for(b = 5; b <= 27; b += 1) {
int a;
kern_1587749003202385: for(a = 4; a <= 11; a += 1) {
A[a][b][a] = A[a-4][b-5][a-4]+42;

A[a][b][a] = A[a+2][b+2][a+2]+B[a];

A[a][b][a] = A[a][b][a]*48;
B[a] = A[a][b+4][a+4]*49;
}
}





return 0;
}
int kern_1587748999028884()
{



int B[1000][1000];
int A[1000][1000][1000];

int a;

kern_1587748999028884: for(a = 5; a <= 10; a += 1) {
A[a][a][a] = A[a-5][a-1][a]*30;

A[a][a][a] = A[a+3][a+5][a+1]-32;
}





return 0;
}
int kern_1587749015492525()
{



int B[1000];
int A[1000];

int d;

for(d = 0; d <= 65530; d += 1) {
int c;
for(c = 0; c <= 65530; c += 1) {
int b;
for(b = 0; b <= 65530; b += 1) {
int a;
kern_1587749015492525: for(a = 0; a <= 65530; a += 1) {
A[a] = A[a]-20;
A[a] = B[a];

B[a] = B[a+5]-1;
}
}
}
}





return 0;
}
int kern_1587749007563882()
{



int B[1000];
int A[1000][1000];
int C[1000][1000];

int d;

for(d = 4; d <= 127; d += 1) {
int c;
for(c = 2; c <= 511; c += 1) {
int b;
for(b = 2; b <= 511; b += 1) {
int a;
kern_1587749007563882: for(a = 2; a <= 511; a += 1) {
int var_a = C[a][b]*38;
int var_b = C[a-2][b-4]+22;
}
}
}
}






return 0;
}
int kern_1587749007729511()
{



int A[1000][1000];
int B[1000];

int a;

kern_1587749007729511: for(a = 4; a <= 252; a += 1) {
B[a] = B[a-4]+44;

A[a][a] = 17;
A[a][a+3] = 38;

B[a] = B[a]+A[a][a];
A[a][a] = B[a+5]*A[a][a];
}





return 0;
}
int kern_1587749009308153()
{



int A[1000];
int B[1000][1000];
int C[1000];

int b;

for(b = 0; b <= 125; b += 1) {
int a;
kern_1587749009308153: for(a = 0; a <= 508; a += 1) {
B[a][b] = B[a+3][b+2]-42;

int var_a = C[a]-29;
C[a] = 31;
}
}






return 0;
}
int kern_1587749001052281()
{



int A[1000];
int B[1000][1000][1000];

int c;

for(c = 5; c <= 63; c += 1) {
int b;
for(b = 2; b <= 15; b += 1) {
int a;
kern_1587749001052281: for(a = 5; a <= 15; a += 1) {
A[a] = A[a-2]+30;

A[a] = A[a+1]*B[a][b][c];

int var_a = B[a][b][c]-33;
int var_b = B[a][b-2][c-5]-31;
}
}
}





return 0;
}
int kern_1587749000884613()
{



int A[1000][1000];
int B[1000];
int C[1000][1000];

int a;

kern_1587749000884613: for(a = 0; a <= 251; a += 1) {
A[a][a] = B[a];
A[a+4][a+1] = C[a][a]*B[a];
}






return 0;
}
int kern_1587749004114872()
{



int C[1000][1000][1000];
int B[1000];
int D[1000][1000][1000];
int A[1000][1000][1000];
int E[1000][1000];

int b;

for(b = 2; b <= 15; b += 1) {
int a;
kern_1587749004114872: for(a = 1; a <= 31; a += 1)
A[a][b][a] = A[a][b-2][a-1]+13*B[a]-C[a][b][a]+E[a][b];
}
# 1507 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
int kern_158774900432248()
{



int A[1000][1000][1000];
int B[1000][1000];

int d;

for(d = 0; d <= 250; d += 1) {
int c;
for(c = 0; c <= 509; c += 1) {
int b;
for(b = 0; b <= 509; b += 1) {
int a;
kern_158774900432248: for(a = 0; a <= 509; a += 1) {
B[a][b] = B[a+2][b+2]*29;

B[a][b] = 9;

A[a][b][c] = B[a][b]*5;
B[a][b] = B[a][b+5]*A[a][b][c];
}
}
}
}





return 0;
}
int kern_1587749001752524()
{



int A[1000][1000];
int B[1000];

int d;

for(d = 0; d <= 253; d += 1) {
int c;
for(c = 4; c <= 252; c += 1) {
int b;
for(b = 4; b <= 252; b += 1) {
int a;
kern_1587749001752524: for(a = 4; a <= 252; a += 1) {
B[a] = B[a+2]-A[a][b];

int var_a = A[a][b]*29;
A[a][b] = 24;

int var_b = B[a]*3;
int var_c = B[a-4]*7;

int var_d = A[a][b]*30;
int var_e = A[a+3][b+2]-4;
}
}
}
}





return 0;
}
int kern_1587749000710404()
{



int A[1000];
int B[1000][1000];

int a;

kern_1587749000710404: for(a = 2; a <= 65532; a += 1) {
A[a] = A[a+3]-B[a][a];

int var_a = A[a]*15;
int var_b = A[a-2]+27;
}





return 0;
}
int kern_1587749015151781()
{



int A[1000][1000][1000];
int B[1000][1000];

int c;

for(c = 2; c <= 58; c += 1) {
int b;
for(b = 3; b <= 61; b += 1) {
int a;
kern_1587749015151781: for(a = 5; a <= 61; a += 1) {
B[a][b] = B[a-4][b-3]*2;

A[a][b][c] = B[a][b];
A[a-5][b-2][c-2] = B[a][b];

A[a][b][c] = B[a][b];

A[a][b][c] = B[a][b]*A[a][b][c];
B[a][b] = B[a-3][b-1]+1;
}
}
}





return 0;
}
int kern_1587749009481953()
{



int C[1000][1000][1000];
int B[1000];
int A[1000][1000][1000];

int d;

for(d = 4; d <= 61; d += 1) {
int c;
for(c = 2; c <= 15; c += 1) {
int b;
for(b = 5; b <= 12; b += 1) {
int a;
kern_1587749009481953: for(a = 5; a <= 12; a += 1) {
B[a] = B[a-5]+A[a][b][c];

B[a] = B[a-4]-50*A[a][b][c];

C[a][b][c] = C[a][b+5][c]*15;

C[a][b][c] = B[a];

A[a][b][c] = A[a][b][c]-24;
B[a] = A[a-3][b-2][c]-C[a][b][c];

int var_a = C[a][b][c]-8;
int var_b = C[a-5][b-1][c-4]+4;
}
}
}
}






return 0;
}
int kern_1587749006892638()
{



int A[1000][1000];

int a;

kern_1587749006892638: for(a = 1; a <= 250; a += 1) {
A[a][a] = A[a+5][a+5]-25;

int var_a = A[a][a]-34;
int var_b = A[a-1][a-1]+29;
}




return 0;
}
int kern_1587749015322232()
{



int B[1000][1000][1000];
int C[1000];
int A[1000][1000];

int d;

for(d = 0; d <= 13; d += 1) {
int c;
for(c = 4; c <= 60; c += 1) {
int b;
for(b = 2; b <= 15; b += 1) {
int a;
kern_1587749015322232: for(a = 2; a <= 15; a += 1) {
B[a][b][c] = B[a][b-3][c]*C[a]-A[a][b];

A[a][b] = A[a-2][b-4]*40;

C[a] = C[a+4]-10;

B[a][b][c] = B[a][b+3][c+2]+A[a][b]*C[a];
}
}
}
}






return 0;
}
int kern_1587749014640864()
{



int A[1000][1000];
int B[1000][1000];

int c;

for(c = 0; c <= 123; c += 1) {
int b;
for(b = 2; b <= 123; b += 1) {
int a;
kern_1587749014640864: for(a = 2; a <= 123; a += 1) {
B[a][b] = B[a-2][b]-45;

A[a][b] = A[a+4][b+4]-B[a][b];
}
}
}





return 0;
}
int kern_1587749010590095()
{



int C[1000][1000];
int B[1000];
int A[1000][1000];

int d;

for(d = 5; d <= 255; d += 1) {
int c;
for(c = 5; c <= 255; c += 1) {
int b;
for(b = 5; b <= 255; b += 1) {
int a;
kern_1587749010590095: for(a = 5; a <= 255; a += 1) {
B[a] = B[a-3]+18;

B[a] = B[a+5]*C[a][b]-3;

C[a][b] = B[a];
C[a-4][b-3] = 8;

C[a][b] = C[a][b]*A[a][b];
B[a] = C[a-5][b-5]*B[a]+A[a][b];
}
}
}
}






return 0;
}
int kern_1587748998345859()
{



int C[1000][1000];
int B[1000][1000][1000];
int A[1000][1000];

int b;

for(b = 4; b <= 31; b += 1) {
int a;
kern_1587748998345859: for(a = 5; a <= 31; a += 1) {
A[a][b] = A[a+4][b+2]*36;

C[a][b] = C[a+2][b+1]+35;

B[a][b][a] = 41;
B[a][b][a] = 27;

A[a][b] = 30;

int var_a = A[a][b]*24;
int var_b = A[a-2][b-3]-49;
}
}






return 0;
}
int kern_1587748998006003()
{



int B[1000][1000][1000];
int A[1000];

int c;

for(c = 3; c <= 13; c += 1) {
int b;
for(b = 3; b <= 10; b += 1) {
int a;
kern_1587748998006003: for(a = 3; a <= 12; a += 1) {
A[a] = A[a+2]*B[a][b][c];

B[a][b][c] = 1;
B[a-3][b-3][c-3] = A[a];

B[a][b][c] = 12;
}
}
}





return 0;
}
int kern_1587748998860388()
{



int B[1000];
int C[1000][1000][1000];
int A[1000][1000][1000];

int a;

kern_1587748998860388: for(a = 5; a <= 58; a += 1) {
int var_a = A[a][a][a]-21;
int var_b = A[a+5][a+1][a+5]*38;

int var_c = A[a][a][a]+21;
int var_d = A[a][a+5][a+2]+27;

B[a] = B[a]*C[a][a][a];
C[a][a][a] = B[a-5]-A[a][a][a]+C[a][a][a];

A[a][a][a] = B[a]*C[a][a][a];
A[a][a][a] = B[a+3]+A[a][a][a]-C[a][a][a];
}






return 0;
}
int kern_1587749013927294()
{



int A[1000][1000][1000];
int B[1000];

int c;

for(c = 0; c <= 27; c += 1) {
int b;
for(b = 0; b <= 29; b += 1) {
int a;
kern_1587749013927294: for(a = 3; a <= 29; a += 1) {
B[a] = B[a-3]*18;

B[a] = B[a+3]*A[a][b][c];

A[a][b][c] = A[a+2][b+2][c+4]-30;

B[a] = B[a]-A[a][b][c];
A[a][b][c] = B[a-2]-11;
}
}
}





return 0;
}
int kern_1587749000172829()
{



int B[1000];
int A[1000];

int d;

for(d = 2; d <= 65530; d += 1) {
int c;
for(c = 2; c <= 65530; c += 1) {
int b;
for(b = 2; b <= 65530; b += 1) {
int a;
kern_1587749000172829: for(a = 2; a <= 65530; a += 1) {
B[a] = B[a-2]-7;

B[a] = B[a+4]+32;
}
}
}
}





return 0;
}
int kern_1587749007896029()
{



int C[1000];
int E[1000][1000];
int B[1000][1000];
int D[1000][1000][1000];
int A[1000][1000];

int d;

for(d = 0; d <= 122; d += 1) {
int c;
for(c = 0; c <= 507; c += 1) {
int b;
for(b = 0; b <= 507; b += 1) {
int a;
kern_1587749007896029: for(a = 0; a <= 507; a += 1) {
C[a] = C[a+2]+46;

E[a][b] = E[a+4][b+5]+C[a]-A[a][b]*D[a][b][c];

D[a][b][c] = C[a]+E[a][b]*B[a][b]-E[a][b]-A[a][b];
B[a][b] = C[a+3]-E[a][b]*D[a][b][c];
}
}
}
}
# 2006 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
int kern_1587749011642694()
{



int C[1000][1000][1000];
int A[1000][1000][1000];
int B[1000];

int a;

kern_1587749011642694: for(a = 0; a <= 12; a += 1) {
C[a][a][a] = 19;
C[a+1][a][a+3] = 7;
}






return 0;
}
int kern_1587749006214207()
{



int B[1000][1000][1000];
int C[1000][1000][1000];
int A[1000][1000];
int D[1000][1000][1000];
int E[1000];

int b;

for(b = 0; b <= 506; b += 1) {
int a;
kern_1587749006214207: for(a = 0; a <= 507; a += 1) {
A[a][b] = C[a][b][a]*E[a];
A[a+4][b+5] = B[a][b][a]*D[a][b][a]+D[a][b][a];
}
}
# 2059 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
int kern_1587749000536372()
{



int B[1000][1000][1000];
int A[1000];
int C[1000];

int c;

for(c = 2; c <= 63; c += 1) {
int b;
for(b = 4; b <= 31; b += 1) {
int a;
kern_1587749000536372: for(a = 5; a <= 63; a += 1) {
B[a][b][c] = B[a-5][b-2][c]*41;

C[a] = C[a+5]+16;

C[a] = 27;

B[a][b][c] = 31;

int var_a = A[a]+8;
int var_b = A[a-5]-9;
}
}
}






return 0;
}
int kern_1587749008762926()
{



int A[1000];
int B[1000];

int c;

for(c = 2; c <= 524282; c += 1) {
int b;
for(b = 2; b <= 524282; b += 1) {
int a;
kern_1587749008762926: for(a = 2; a <= 524282; a += 1) {
A[a] = 4;
A[a] = A[a]-B[a];

A[a] = A[a-2]*B[a];

A[a] = A[a+3]*B[a];

B[a] = B[a+5]*34;

B[a] = B[a+1]*30;
}
}
}





return 0;
}
int kern_1587748998175907()
{



int A[1000][1000];

int a;

kern_1587748998175907: for(a = 5; a <= 511; a += 1) {
A[a][a] = A[a-5][a-5]*4;

int var_a = A[a][a]-16;
int var_b = A[a][a-5]-23;
}




return 0;
}
int main()
{
int call_var = 0;
call_var = kern_1587749010176488();
call_var = kern_1587749011813622();
call_var = kern_1587749006554335();
call_var = kern_1587749003904691();
call_var = kern_1587749002369943();
call_var = kern_1587748999542687();
call_var = kern_1587749009106069();
call_var = kern_1587748998516653();
call_var = kern_1587749005689018();
call_var = kern_1587749005468089();
call_var = kern_1587749013210712();
call_var = kern_1587749011116815();
call_var = kern_1587749006722991();
call_var = kern_1587749008067154();
call_var = kern_1587749011292936();
call_var = kern_1587749007396552();
call_var = kern_1587749010388676();
call_var = kern_1587748998692201();
call_var = kern_1587749014283363();
call_var = kern_1587749002794248();
call_var = kern_1587749004483961();
call_var = kern_1587749009653588();
call_var = kern_1587749010939646();
call_var = kern_1587749009828687();
call_var = kern_1587749004858126();
call_var = kern_1587749013585037();
call_var = kern_15877490144631();
call_var = kern_1587749010766286();
call_var = kern_1587749001236222();
call_var = kern_1587749006386581();
call_var = kern_158774899977151();
call_var = kern_1587749008235272();
call_var = kern_1587749015835003();
call_var = kern_1587749007059508();
call_var = kern_1587749001918364();
call_var = kern_1587749014982876();
call_var = kern_1587749003472841();
call_var = kern_1587749012340606();
call_var = kern_1587749005241701();
call_var = kern_1587749003692633();
call_var = kern_1587749013392258();
call_var = kern_1587749003202385();
call_var = kern_1587748999028884();
call_var = kern_1587749015492525();
call_var = kern_1587749007563882();
call_var = kern_1587749007729511();
call_var = kern_1587749009308153();
call_var = kern_1587749001052281();
call_var = kern_1587749000884613();
call_var = kern_1587749004114872();
call_var = kern_158774900432248();
call_var = kern_1587749001752524();
call_var = kern_1587749000710404();
call_var = kern_1587749015151781();
call_var = kern_1587749009481953();
call_var = kern_1587749006892638();
call_var = kern_1587749015322232();
call_var = kern_1587749014640864();
call_var = kern_1587749010590095();
call_var = kern_1587748998345859();
call_var = kern_1587748998006003();
call_var = kern_1587748998860388();
call_var = kern_1587749013927294();
call_var = kern_1587749000172829();
call_var = kern_1587749007896029();
call_var = kern_1587749011642694();
call_var = kern_1587749006214207();
call_var = kern_1587749000536372();
call_var = kern_1587749008762926();
call_var = kern_1587748998175907();
return 0;
}