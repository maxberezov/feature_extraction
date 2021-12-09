# 1 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
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
# 1 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"


# 2 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/*
* file for tsvc.c
*/
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
/* wchar_t uses Unicode 8.0.0.  Version 8.0 of the Unicode Standard is
synchronized with ISO/IEC 10646:2014, plus Amendment 1 (published
2015-05-15).  */


/* We do not support C11 <threads.h>.  */


/*
* This is an executable test containing a number of loops to measure
* the performance of a compiler. Arrays' length is LEN_1D by default
* and if you want a different array length, you should replace every
* LEN_1D by your desired number which must be a multiple of 40. If you
* want to increase the number of loop calls to have a longer run time
* you have to manipulate the constant value iterations. There is a dummy
* function called in each loop to make all computations appear required.
* The time to execute this function is included in the time measurement
* for the output but it is neglectable.
*
*  The output includes three columns:
*    Loop:        The name of the loop
*    Time(Sec):     The time in seconds to run the loop
*    Checksum:    The checksum calculated when the test has run
*
* In this version of the codelets arrays are static type.
*
* All functions/loops are taken from "TEST SUITE FOR VECTORIZING COMPILERS"
* by David Callahan, Jack Dongarra and David Levine except those whose
* functions' name have 4 digits.
*/


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
/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
define _DEFAULT_SOURCE.  */
/* This is to enable the ISO C11 extension.  */





/* This is to enable the ISO C99 extension.  */





/* This is to enable the ISO C90 Amendment 1:1995 extension.  */





/* This is to enable compatibility for ISO C++11.

So far g++ does not provide a macro.  Check the temporary macro for
now, too.  */





/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
is defined, use POSIX.1-2008 (or another version depending on
_XOPEN_SOURCE).  */
/* Get definitions of __STDC_* predefined macros, if the compiler has
not preincluded this header automatically.  */
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

/* This macro indicates that the installed library is the GNU C Library.
For historic reasons the value now is 6 and this will stay from now
on.  The use of this variable is deprecated.  Use __GLIBC__ and
__GLIBC_MINOR__ now (see below) when you want to test for a specific
GNU C library version and use the values in <gnu/lib-names.h> to get
the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
these macros to test for features in specific releases.  */






/* This is here only because every header file already includes this one.  */


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
/* These two macros are not used in glibc anymore.  They are kept here
only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */




/* C++ needs to know that types and declarations are C, not C++.  */
/* The standard library needs the functions from the ISO C90 standard
in the std namespace.  At the same time we want to be safe for
future changes and we include the ISO C99 code in the non-standard
namespace __c99.  The C++ wrapper header take case of adding the
definitions to the global namespace.  */
/* For compatibility we do not add the declarations into any
namespace.  They will end up in the global namespace which is what
old code expects.  */
/* Fortify support.  */
/* Support for flexible arrays.  */
/* __asm__ ("xyz") is used throughout the headers to rename functions
at the assembly language level.  This is wrapped by the __REDIRECT
macro, in order to support compilers that can do this some other
way.  When compilers don't support asm-names at all, we have to do
preprocessor tricks instead (which don't have exactly the right
semantics, but it's the best we can do).

Example:
int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
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
/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */


/* If we don't have __REDIRECT, prototypes will be missing if
__USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */







/* This is here only because every header file already includes this one.
Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
<gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
that will always return failure (and set errno to ENOSYS).  */
/* This file is automatically generated.
This file selects the right generated file of `__stub_FUNCTION' macros
based on the architecture being compiled for.  */






/* This file is automatically generated.
It defines a symbol `__stub_FUNCTION' for each function
in the C library which is a stub, meaning it will fail
every time called, usually setting errno to ENOSYS.  */






/* Get size_t and NULL from <stddef.h>.  */


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
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
defined if the corresponding type is *not* defined.
FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
_TYPE_size_t which will typedef size_t.  fixincludes patched the
vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
not defined, and so that defining this macro defines _GCC_SIZE_T.
If we find that the macros are still defined at this point, we must
invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
__WCHAR_TYPE__ have reasonable values.  This can happen if the
parts of GCC is compiled by an older compiler, that actually
include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
typedef unsigned long int size_t;
/* Wide character type.
Locale-writers should change this as necessary to
be big enough to hold unique values not between 0 and 127,
and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */

/* This defines CLOCKS_PER_SEC, which is the number of processor clock
ticks per second.  */
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
/* ISO/IEC 9899:1999 7.23.1: Components of time
The macro `CLOCKS_PER_SEC' is an expression with type `clock_t' that is
the number per second of the value returned by the `clock' function.  */
/* CAE XSH, Issue 4, Version 2: <time.h>
The value of CLOCKS_PER_SEC is required to be 1 million on all
XSI-conformant systems. */

/* This is the obsolete POSIX.1-1988 name for the same constant.  */
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
/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short __int16_t;
typedef unsigned short __uint16_t;
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
/* No need to mark the typedef with __extension__.   */




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
/* See <bits/types.h> for the meaning of these macros.  This file exists so
that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
/* Tell the libc code that off_t and off64_t are actually the same type
for all ABI purposes, even if possibly expressed as different base types
for C type-checking purposes.  */


/* Same for ino_t and ino64_t.  */



/* Number of descriptors that can fit in an `fd_set'.  */


typedef unsigned long int __dev_t;
/* Type of device numbers.  */
typedef unsigned int __uid_t;
/* Type of user identifications.  */
typedef unsigned int __gid_t;
/* Type of group identifications.  */
typedef unsigned long int __ino_t;
/* Type of file serial numbers.  */
typedef unsigned long int __ino64_t;
/* Type of file serial numbers (LFS).*/
typedef unsigned int __mode_t;
/* Type of file attribute bitmasks.  */
typedef unsigned long int __nlink_t;
/* Type of file link counts.  */
typedef long int __off_t;
/* Type of file sizes and offsets.  */
typedef long int __off64_t;
/* Type of file sizes and offsets (LFS).  */
typedef int __pid_t;
/* Type of process identifications.  */
typedef struct {
int __val[2];
} __fsid_t;
/* Type of file system IDs.  */
typedef long int __clock_t;
/* Type of CPU usage counts.  */
typedef unsigned long int __rlim_t;
/* Type for resource measurement.  */
typedef unsigned long int __rlim64_t;
/* Type for resource measurement (LFS).  */
typedef unsigned int __id_t;
/* General type for IDs.  */
typedef long int __time_t;
/* Seconds since the Epoch.  */
typedef unsigned int __useconds_t;
/* Count of microseconds.  */
typedef long int __suseconds_t;
/* Signed count of microseconds.  */

typedef int __daddr_t;
/* The type of a disk address.  */
typedef int __key_t;
/* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
typedef int __clockid_t;

/* Timer ID returned by `timer_create'.  */
typedef void *__timer_t;

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

typedef long int __ssize_t;
/* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */
typedef unsigned long int __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
to one of the other defined types.  */
typedef __off64_t __loff_t;
/* Type of file sizes and offsets (LFS).  */
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef long int __intptr_t;

/* Duplicate info from sys/socket.h.  */
typedef unsigned int __socklen_t;


/* Returned by `clock'.  */
typedef __clock_t clock_t;

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


/* Returned by `time'.  */
typedef __time_t time_t;


/* Used by other time functions.  */
/* Seconds.	[0-60] (1 leap second) */
/* Minutes.	[0-59] */
/* Hours.	[0-23] */
/* Day.		[1-31] */
/* Month.	[0-11] */
/* Year	- 1900.  */
/* Day of week.	[0-6] */
/* Days in year.[0-365]	*/
/* DST.		[-1/0/1]*/
/* Seconds east of UTC.  */
/* Timezone abbreviation.  */
struct tm {
int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;
long int __tm_gmtoff;
const char *__tm_zone;
};


/* Time used by the program so far (user time + system time).
The result / CLOCKS_PER_SECOND is program time in seconds.  */
extern clock_t clock(void);

/* Return the current time and put it in *TIMER if TIMER is not NULL.  */
extern time_t time(time_t *__timer);

/* Return the difference between TIME1 and TIME0.  */
extern double difftime(time_t __time1, time_t __time0);

/* Return the `time_t' representation of TP and normalize TP.  */
extern time_t mktime(struct tm *__tp);


/* Format TP into S according to FORMAT.
Write no more than MAXSIZE characters and return the number
of characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t strftime(char *__s, size_t __maxsize, const char *__format, const struct tm *__tp);


/* Return the `struct tm' representation of *TIMER
in Universal Coordinated Time (aka Greenwich Mean Time).  */
extern struct tm *gmtime(const time_t *__timer);

/* Return the `struct tm' representation
of *TIMER in the local timezone.  */
extern struct tm *localtime(const time_t *__timer);


/* Return a string of the form "Day Mon dd hh:mm:ss yyyy\n"
that is the representation of TP in this format.  */
extern char *asctime(const struct tm *__tp);

/* Equivalent to `asctime (localtime (timer))'.  */
extern char *ctime(const time_t *__timer);

/* Defined in localtime.c.  */
extern char *__tzname[2];
/* Current timezone names.  */
extern int __daylight;
/* If daylight-saving time is ever in use.  */
extern long int __timezone;
/* Seconds west of UTC.  */
/* Nonzero if YEAR is a leap year (every 4 years,
except every 100th isn't, and every 400th is).  */

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
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
defined if the corresponding type is *not* defined.
FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
_TYPE_size_t which will typedef size_t.  fixincludes patched the
vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
not defined, and so that defining this macro defines _GCC_SIZE_T.
If we find that the macros are still defined at this point, we must
invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
__WCHAR_TYPE__ have reasonable values.  This can happen if the
parts of GCC is compiled by an older compiler, that actually
include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Wide character type.
Locale-writers should change this as necessary to
be big enough to hold unique values not between 0 and 127,
and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */

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







/* Define outside of namespace so the C++ is happy.  */
struct _IO_FILE;


/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;





/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE __FILE;
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




/* This file is needed by libio to define various configuration parameters.
These are always the same in the GNU C library.  */




/* Define types for libio in terms of the standard internal type names.  */

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
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
defined if the corresponding type is *not* defined.
FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
_TYPE_size_t which will typedef size_t.  fixincludes patched the
vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
not defined, and so that defining this macro defines _GCC_SIZE_T.
If we find that the macros are still defined at this point, we must
invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
__WCHAR_TYPE__ have reasonable values.  This can happen if the
parts of GCC is compiled by an older compiler, that actually
include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Wide character type.
Locale-writers should change this as necessary to
be big enough to hold unique values not between 0 and 127,
and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */




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
/* Conversion state information.  */
/* Value so far.  */
typedef struct {
int __count;
union {unsigned int __wch; char __wchb[4];} __value;
} __mbstate_t;




/* The rest of the file is only used if used if __need_mbstate_t is not
defined.  */
/* Undefine all __need_* constants in case we are included to get those
constants but the whole file was already read.  */
typedef struct {
__off_t __pos;
__mbstate_t __state;
} _G_fpos_t;
typedef struct {
__off64_t __pos;
__mbstate_t __state;
} _G_fpos64_t;
/* These library features are always available in the GNU C library.  */







/* This is defined by <bits/stat.h> if `st_blksize' exists.  */
/* ALL of these should be defined in _G_config.h */
/* This define avoids name pollution if we're using GNU stdarg.h */

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
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
if this invocation was from the user program.  */
/* Magic numbers and bits for the _flags field.
The magic numbers use the high-order bits of _flags;
the remaining bits are available for variable flags.
Note: The magic numbers must all be negative if stdio
emulation is desired. */
/* These are "formatting flags" matching the iostream fmtflags enum values. */
struct _IO_jump_t;
struct _IO_FILE;

/* Handle lock.  */



typedef void _IO_lock_t;



/* A streammarker remembers a position in a buffer. */

/* If _pos >= 0
it points to _buf->Gbase()+_pos. FIXME comment */
/* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
struct _IO_FILE {
int _flags;
char *_IO_read_ptr;
char *_IO_read_end;
char *_IO_read_base;
char *_IO_write_base;
char *_IO_write_ptr;
char *_IO_write_end;
char *_IO_buf_base;
char *_IO_buf_end;
char *_IO_save_base;
char *_IO_backup_base;
char *_IO_save_end;
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos;} *_markers;
struct _IO_FILE *_chain;
int _fileno;
int _flags2;
__off_t _old_offset;
unsigned short _cur_column;
signed char _vtable_offset;
char _shortbuf[1];
_IO_lock_t *_lock;
__off64_t _offset;
void *__pad1;
void *__pad2;
void *__pad3;
void *__pad4;
size_t __pad5;
int _mode;
char _unused2[15*sizeof(int)-4*sizeof(void *)-sizeof(size_t)];
};

/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result {__codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv};
/* High-order word is _IO_MAGIC; rest is flags. */
/* The following pointers correspond to the C++ streambuf protocol. */
/* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
/* Current read pointer */
/* End of get area. */
/* Start of putback+get area. */
/* Start of put area. */
/* Current put pointer. */
/* End of put area. */
/* Start of reserve area. */
/* End of reserve area. */
/* The following fields are used to support backing up and undo. */
/* Pointer to start of non-current get area. */
/* Pointer to first valid character of backup area */
/* Pointer to end of non-current get area. */
/* This used to be _offset but it's too small.  */
/* 1+column number of pbase(); 0 is unknown. */
/*  char* _save_gptr;  char* _save_egptr; */
/* Make sure we don't get into trouble again.  */
struct _IO_FILE;


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
Return number of bytes read.  */
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);

/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
unless there is an error.  Return number of bytes written.  If
there is an error, return 0 and do not write anything.  If the file
has been opened for append (__mode.__append set), then set the file
pointer to the end of the file and then do the write; if not, just
write at the current file pointer.  */
typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, size_t __n);

/* Move COOKIE's file position to *POS bytes from the
beginning of the file (if W is SEEK_SET),
the current position (if W is SEEK_CUR),
or the end of the file (if W is SEEK_END).
Set *POS to the new file position.
Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE *__fp);
extern int _IO_putc(int __c, _IO_FILE *__fp);
extern int _IO_feof(_IO_FILE *__fp);
extern int _IO_ferror(_IO_FILE *__fp);

extern int _IO_peekc_locked(_IO_FILE *__fp);

/* This one is for Emacs. */



extern void _IO_flockfile(_IO_FILE *);
extern void _IO_funlockfile(_IO_FILE *);
extern int _IO_ftrylockfile(_IO_FILE *);
extern int _IO_vfscanf(_IO_FILE *, const char *, __gnuc_va_list, int *);
extern int _IO_vfprintf(_IO_FILE *, const char *, __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area(_IO_FILE *);
/* The type of the second argument to `fgetpos' and `fsetpos'.  */


typedef _G_fpos_t fpos_t;
# 1570 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/* The possibilities for the third argument to `setvbuf'.  */





/* Default buffer size.  */





/* End of file character.
Some things throughout the library rely on this being -1.  */





/* The possibilities for the third argument to `fseek'.
These values should not be changed.  */
/* Get the values:
L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
TMP_MAX	The minimum number of unique filenames generated by tmpnam
(and tempnam when it uses tmpnam's name space),
or tempnam (the two are separate).
L_ctermid	How long an array to pass to `ctermid'.
L_cuserid	How long an array to pass to `cuserid'.
FOPEN_MAX	Minimum number of files that can be open at once.
FILENAME_MAX	Maximum length of a filename.  */
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


/* Standard streams.  */
extern struct _IO_FILE *stdin;
/* Standard input stream.  */
extern struct _IO_FILE *stdout;
/* Standard output stream.  */
extern struct _IO_FILE *stderr;
/* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */





/* Remove file FILENAME.  */
extern int remove(const char *__filename);
/* Rename file OLD to NEW.  */
extern int rename(const char *__old, const char *__new);
# 1644 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/* Create a temporary file and open it read/write.

This function is a possible cancellation point and therefore not
marked with __THROW.  */

extern FILE *tmpfile(void);
/* Generate a temporary filename.  */
extern char *tmpnam(char *__s);


/* Close STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fclose(FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fflush(FILE *__stream);



/* Open a file and create a new stream for it.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern FILE *fopen(const char *__filename, const char *__modes);
/* Open a file, replacing an existing stream with it.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern FILE *freopen(const char *__filename, const char *__modes, FILE *__stream);


/* If BUF is NULL, make STREAM unbuffered.
Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf(FILE *__stream, char *__buf);
/* Make STREAM use buffering mode MODE.
If BUF is not NULL, use N bytes of it for buffering;
else allocate an internal buffer N bytes long.  */
extern int setvbuf(FILE *__stream, char *__buf, int __modes, size_t __n);


/* Write formatted output to STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fprintf(FILE *__stream, const char *__format, ...);
/* Write formatted output to stdout.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int printf(const char *__format, ...);
/* Write formatted output to S.  */
extern int sprintf(char *__s, const char *__format, ...);

/* Write formatted output to S from argument list ARG.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int vfprintf(FILE *__s, const char *__format, __gnuc_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int vprintf(const char *__format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf(char *__s, const char *__format, __gnuc_va_list __arg);




/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf(char *__s, size_t __maxlen, const char *__format, ...);

extern int vsnprintf(char *__s, size_t __maxlen, const char *__format, __gnuc_va_list __arg);


/* Read formatted input from STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fscanf(FILE *__stream, const char *__format, ...);
/* Read formatted input from stdin.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int scanf(const char *__format, ...);
/* Read formatted input from S.  */
extern int sscanf(const char *__s, const char *__format, ...);
extern int __isoc99_fscanf(FILE *__stream, const char *__format, ...);
extern int __isoc99_scanf(const char *__format, ...);
extern int __isoc99_sscanf(const char *__s, const char *__format, ...);
# 1748 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/* Read formatted input from S into argument list ARG.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int vfscanf(FILE *__s, const char *__format, __gnuc_va_list __arg);

/* Read formatted input from stdin into argument list ARG.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int vscanf(const char *__format, __gnuc_va_list __arg);

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf(const char *__s, const char *__format, __gnuc_va_list __arg);
extern int __isoc99_vfscanf(FILE *__s, const char *__format, __gnuc_va_list __arg);
extern int __isoc99_vscanf(const char *__format, __gnuc_va_list __arg);
extern int __isoc99_vsscanf(const char *__s, const char *__format, __gnuc_va_list __arg);
# 1776 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/* Read a character from STREAM.

These functions are possible cancellation points and therefore not
marked with __THROW.  */
extern int fgetc(FILE *__stream);
extern int getc(FILE *__stream);

/* Read a character from stdin.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int getchar(void);


/* The C standard explicitly says this is a macro, so we always do the
optimization for it.  */

/* Write a character to STREAM.

These functions are possible cancellation points and therefore not
marked with __THROW.

These functions is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fputc(int __c, FILE *__stream);
extern int putc(int __c, FILE *__stream);

/* Write a character to stdout.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int putchar(int __c);


/* The C standard explicitly says this can be a macro,
so we always do the optimization for it.  */

/* Get a newline-terminated string of finite length from STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern char *fgets(char *__s, int __n, FILE *__stream);



/* Get a newline-terminated string from stdin, removing the newline.
DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.

The function has been officially removed in ISO C11.  This opportunity
is used to also remove it from the GNU feature list.  It is now only
available when explicitly using an old ISO C, Unix, or POSIX standard.
GCC defines _GNU_SOURCE when building C++ code and the function is still
in C++11, so it is also available for C++.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern char *gets(char *__s);



/* Write a string to STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fputs(const char *__s, FILE *__stream);

/* Write a string, followed by a newline, to stdout.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int puts(const char *__s);


/* Push a character back onto the input buffer of STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int ungetc(int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern size_t fread(void *__ptr, size_t __size, size_t __n, FILE *__stream);
/* Write chunks of generic data to STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern size_t fwrite(const void *__ptr, size_t __size, size_t __n, FILE *__s);


/* Seek to a certain position on STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fseek(FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern long int ftell(FILE *__stream);
/* Rewind to the beginning of STREAM.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern void rewind(FILE *__stream);


/* The Single Unix Specification, Version 2, specifies an alternative,
more adequate interface for the two functions above which deal with
file offset.  `long int' is not the right type.  These definitions
are originally defined in the Large File Support API.  */


/* Get STREAM's position.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fgetpos(FILE *__stream, fpos_t *__pos);
/* Set STREAM's position.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern int fsetpos(FILE *__stream, const fpos_t *__pos);


/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr(FILE *__stream);
/* Return the EOF indicator for STREAM.  */
extern int feof(FILE *__stream);
/* Return the error indicator for STREAM.  */
extern int ferror(FILE *__stream);


/* Print a message describing the meaning of the value of errno.

This function is a possible cancellation point and therefore not
marked with __THROW.  */
extern void perror(const char *__s);


/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
are available on this system.  Even if available, these variables
should not be used directly.  The `strerror' function provides
all the necessary functionality.  */
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
/* If we are compiling with optimizing read this file.  It contains
several optimizing inline functions and macros.  */

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

/* Get size_t, wchar_t and NULL from <stddef.h>.  */





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
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
defined if the corresponding type is *not* defined.
FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
_TYPE_size_t which will typedef size_t.  fixincludes patched the
vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
not defined, and so that defining this macro defines _GCC_SIZE_T.
If we find that the macros are still defined at this point, we must
invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
__WCHAR_TYPE__ have reasonable values.  This can happen if the
parts of GCC is compiled by an older compiler, that actually
include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
/* Wide character type.
Locale-writers should change this as necessary to
be big enough to hold unique values not between 0 and 127,
and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
or if we want this type in particular.  */
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
/* FreeBSD 5 can't be handled well using "traditional" logic above
since it no longer defines _BSD_RUNE_T_ yet still desires to export
rune_t in some cases... */
typedef int wchar_t;
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */



/* Returned by `div'.  */
/* Quotient.  */
/* Remainder.  */
typedef struct {
int quot;
int rem;
} div_t;

/* Returned by `ldiv'.  */

/* Quotient.  */
/* Remainder.  */
typedef struct {
long int quot;
long int rem;
} ldiv_t;






/* Returned by `lldiv'.  */
/* Quotient.  */
/* Remainder.  */
typedef struct {
long long int quot;
long long int rem;
} lldiv_t;





/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
Changes from this to the outside world should be done in `_exit'.  */




/* Maximum length of a multibyte character in the current locale.  */

extern size_t __ctype_get_mb_cur_max(void);



/* Convert a string to a floating-point number.  */
extern double atof(const char *__nptr);
/* Convert a string to an integer.  */
extern int atoi(const char *__nptr);
/* Convert a string to a long integer.  */
extern long int atol(const char *__nptr);




/* Convert a string to a long long integer.  */
extern long long int atoll(const char *__nptr);




/* Convert a string to a floating-point number.  */
extern double strtod(const char *__nptr, char **__endptr);




/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof(const char *__nptr, char **__endptr);

extern long double strtold(const char *__nptr, char **__endptr);




/* Convert a string to a long integer.  */
extern long int strtol(const char *__nptr, char **__endptr, int __base);
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul(const char *__nptr, char **__endptr, int __base);


/* Convert a string to a quadword integer.  */

extern long long int strtoll(const char *__nptr, char **__endptr, int __base);
/* Convert a string to an unsigned quadword integer.  */

extern unsigned long long int strtoull(const char *__nptr, char **__endptr, int __base);


/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand(void);
/* Seed the random number generator with the given number.  */
extern void srand(unsigned int __seed);


/* Allocate SIZE bytes of memory.  */
extern void *malloc(size_t __size);
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc(size_t __nmemb, size_t __size);





/* Re-allocate the previously allocated block
in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
the same pointer that was passed to it, aliasing needs to be allowed
between objects pointed by the old and new pointers.  */
extern void *realloc(void *__ptr, size_t __size);
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free(void *__ptr);


/* Abort execution and generate a core-dump.  */
extern void abort(void);


/* Register a function to be called when `exit' is called.  */
extern int atexit(void (*__func)(void));


/* Call all functions registered with `atexit' and `on_exit',
in the reverse of the order in which they were registered,
perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit(int __status);
# 2243 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/* Terminate the program with STATUS without calling any of the
functions registered with `atexit' or `on_exit'.  */
extern void _Exit(int __status);





/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv(const char *__name);


/* Execute the given line as a shell command.

This function is a cancellation point and therefore not marked with
__THROW.  */
extern int system(const char *__command);

/* Shorthand for type of comparison functions.  */


typedef int (*__compar_fn_t)(void *, void *);

/* Do a binary search for KEY in BASE, which consists of NMEMB elements
of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar);





/* Sort NMEMB elements of BASE, of SIZE bytes each,
using COMPAR to perform the comparisons.  */
extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar);







/* Return the absolute value of X.  */
extern int abs(int __x);
extern long int labs(long int __x);



extern long long int llabs(long long int __x);




/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div(int __numer, int __denom);
extern ldiv_t ldiv(long int __numer, long int __denom);




extern lldiv_t lldiv(long long int __numer, long long int __denom);


/* Return the length of the multibyte character
in S, which is no longer than N.  */
extern int mblen(const char *__s, size_t __n);
/* Return the length of the given multibyte character,
putting its `wchar_t' representation in *PWC.  */
extern int mbtowc(wchar_t *__pwc, const char *__s, size_t __n);
/* Put the multibyte character represented
by WCHAR in S, returning its length.  */
extern int wctomb(char *__s, wchar_t __wchar);


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs(wchar_t *__pwcs, const char *__s, size_t __n);
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs(char *__s, const wchar_t *__pwcs, size_t __n);

/* X/Open pseudo terminal handling.  */
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

/* Define some macros helping to catch buffer overflows.  */

/* Declarations for math functions.
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
*	ISO C99 Standard: 7.12 Mathematics	<math.h>
*/




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



/* Get machine-dependent vector math functions declarations.  */
/* Platform-specific SIMD declarations of math functions.
Copyright (C) 2014-2016 Free Software Foundation, Inc.
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






/* Get default empty definitions for simd declarations.  */
/* Empty definitions required for __MATHCALL_VEC unfolding in mathcalls.h.
Copyright (C) 2014-2016 Free Software Foundation, Inc.
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






/* Needed definitions could be generated with:
for func in $(grep __MATHCALL_VEC math/bits/mathcalls.h |		 sed -r "s|__MATHCALL_VEC.?\(||; s|,.*||"); do
o
echo "#define __DECL_SIMD_${func}";
echo "#define __DECL_SIMD_${func}f";
echo "#define __DECL_SIMD_${func}l";
done
*/

/* Get machine-dependent HUGE_VAL value (returned on overflow).
On all IEEE754 machines, this is +Infinity.  */
/* `HUGE_VAL' constant for IEEE 754 machines (where it is infinity).
Used by <stdlib.h> and <math.h> functions for overflow.
Copyright (C) 1992-2016 Free Software Foundation, Inc.
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





/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
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

/* Definitions for byte order, according to significance of bytes,
from low addresses to high addresses.  The value is what you get by
putting '4' in the most significant byte, '3' in the second most
significant byte, '2' in the second least significant byte, and '1'
in the least significant byte, and then writing down one digit for
each byte, starting with the byte at the lowest address at the left,
and proceeding to the byte with the highest address at the right.  */





/* This file defines `__BYTE_ORDER' for the particular machine.  */
/* i386/x86_64 are little-endian.  */

/* Some machines may need to use a different endianness for floating point
values.  */

typedef union {
unsigned char __c[8];
double __d;
} __huge_val_t;
static __huge_val_t __huge_val = {{0, 0, 0, 0, 0, 0, 0xf0, 0x7f}};

/* `HUGE_VALF' constant for IEEE 754 machines (where it is infinity).
Used by <stdlib.h> and <math.h> functions for overflow.
Copyright (C) 1992-2016 Free Software Foundation, Inc.
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





/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
typedef union {
unsigned char __c[4];
float __f;
} __huge_valf_t;
static __huge_valf_t __huge_valf = {{0, 0, 0x80, 0x7f}};
/* `HUGE_VALL' constant for ix86 (where it is infinity).
Used by <stdlib.h> and <math.h> functions for overflow.
Copyright (C) 1992-2016 Free Software Foundation, Inc.
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
static union {
unsigned char __c[12];
long double __ld;
} __huge_vall = {{0, 0, 0, 0, 0, 0, 0, 0x80, 0xff, 0x7f, 0, 0}};

/* Get machine-dependent INFINITY value.  */
/* `INFINITY' constant for IEEE 754 machines.
Copyright (C) 2004-2016 Free Software Foundation, Inc.
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





/* IEEE positive infinity.  */

/* Get machine-dependent NAN value (returned for some domain errors).  */
/* `NAN' constant for IEEE 754 machines.
Copyright (C) 1992-2016 Free Software Foundation, Inc.
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






/* IEEE Not A Number.  */
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
static union {
unsigned char __c[4];
float __d;
} __qnan_union = {{0, 0, 0xc0, 0x7f}};


/* Get general and ISO C99 specific information.  */
/* Copyright (C) 2001-2016 Free Software Foundation, Inc.
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
/* The x86-64 architecture computes values with the precission of the
used type.  Similarly for -m32 -mfpmath=sse.  */
typedef float float_t;
/* `float' expressions are evaluated as `float'.  */
typedef double double_t;
/* `double' expressions are evaluated
as `double'.  */
/* The values returned by `ilogb' for 0 and NaN respectively.  */



/* The GCC 4.6 compiler will define __FP_FAST_FMA{,F,L} if the fma{,f,l}
builtins are supported.  */

/* The file <bits/mathcalls.h> contains the prototypes for all the
actual math functions.  These macros are used for those prototypes,
so we can easily declare each function as both `name' and `__name',
and can declare the float versions `namef' and `__namef'.  */
/* Prototype declarations for math functions; helper file for <math.h>.
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

/* NOTE: Because of the special way this file is used by <math.h>, this
file must NOT be protected from multiple inclusion as header files
usually are.

This file provides prototype declarations for the math functions.
Most functions are declared using the macro:

__MATHCALL (NAME,[_r], (ARGS...));

This means there is a function `NAME' returning `double' and a function
`NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
prototype, that is actually `double' in the prototype for `NAME' and
`float' in the prototype for `NAMEf'.  Reentrant variant functions are
called `NAME_r' and `NAMEf_r'.

Functions returning other types like `int' are declared using the macro:

__MATHDECL (TYPE, NAME,[_r], (ARGS...));

This is just like __MATHCALL but for a function returning `TYPE'
instead of `_Mdouble_'.  In all of these cases, there is still
both a `NAME' and a `NAMEf' that takes `float' arguments.

Note that there must be no whitespace before the argument passed for
NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern double acos(double __x);
extern double __acos(double __x);
/* Arc sine of X.  */
extern double asin(double __x);
extern double __asin(double __x);
/* Arc tangent of X.  */
extern double atan(double __x);
extern double __atan(double __x);
/* Arc tangent of Y/X.  */
extern double atan2(double __y, double __x);
extern double __atan2(double __y, double __x);

/* Cosine of X.  */
extern double cos(double __x);
extern double __cos(double __x);
/* Sine of X.  */
extern double sin(double __x);
extern double __sin(double __x);
/* Tangent of X.  */
extern double tan(double __x);
extern double __tan(double __x);

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern double cosh(double __x);
extern double __cosh(double __x);
/* Hyperbolic sine of X.  */
extern double sinh(double __x);
extern double __sinh(double __x);
/* Hyperbolic tangent of X.  */
extern double tanh(double __x);
extern double __tanh(double __x);


/* Hyperbolic arc cosine of X.  */
extern double acosh(double __x);
extern double __acosh(double __x);
/* Hyperbolic arc sine of X.  */
extern double asinh(double __x);
extern double __asinh(double __x);
/* Hyperbolic arc tangent of X.  */
extern double atanh(double __x);
extern double __atanh(double __x);



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern double exp(double __x);
extern double __exp(double __x);

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern double frexp(double __x, int *__exponent);
extern double __frexp(double __x, int *__exponent);

/* X times (two to the EXP power).  */
extern double ldexp(double __x, int __exponent);
extern double __ldexp(double __x, int __exponent);

/* Natural logarithm of X.  */
extern double log(double __x);
extern double __log(double __x);

/* Base-ten logarithm of X.  */
extern double log10(double __x);
extern double __log10(double __x);

/* Break VALUE into integral and fractional parts.  */
extern double modf(double __x, double *__iptr);
extern double __modf(double __x, double *__iptr);


/* Return exp(X) - 1.  */
extern double expm1(double __x);
extern double __expm1(double __x);

/* Return log(1 + X).  */
extern double log1p(double __x);
extern double __log1p(double __x);

/* Return the base 2 signed integral exponent of X.  */
extern double logb(double __x);
extern double __logb(double __x);





/* Compute base-2 exponential of X.  */
extern double exp2(double __x);
extern double __exp2(double __x);

/* Compute base-2 logarithm of X.  */
extern double log2(double __x);
extern double __log2(double __x);




/* Power functions.  */


/* Return X to the Y power.  */
extern double pow(double __x, double __y);
extern double __pow(double __x, double __y);

/* Return the square root of X.  */
extern double sqrt(double __x);
extern double __sqrt(double __x);




/* Return `sqrt(X*X + Y*Y)'.  */
extern double hypot(double __x, double __y);
extern double __hypot(double __x, double __y);





/* Return the cube root of X.  */
extern double cbrt(double __x);
extern double __cbrt(double __x);




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern double ceil(double __x);
extern double __ceil(double __x);

/* Absolute value of X.  */
extern double fabs(double __x);
extern double __fabs(double __x);

/* Largest integer not greater than X.  */
extern double floor(double __x);
extern double __floor(double __x);

/* Floating-point modulo remainder of X/Y.  */
extern double fmod(double __x, double __y);
extern double __fmod(double __x, double __y);


/* Return 0 if VALUE is finite or NaN, +1 if it
is +Infinity, -1 if it is -Infinity.  */
extern int __isinf(double __value);

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finite(double __value);


/* Return X with its signed changed to Y's.  */
extern double copysign(double __x, double __y);
extern double __copysign(double __x, double __y);





/* Return representation of qNaN for double type.  */
extern double nan(const char *__tagb);
extern double __nan(const char *__tagb);




/* Return nonzero if VALUE is not a number.  */
extern int isnan(double __value);

/* Error and gamma functions.  */
extern double erf(double);
extern double __erf(double);
extern double erfc(double);
extern double __erfc(double);
extern double lgamma(double);
extern double __lgamma(double);





/* True gamma function.  */
extern double tgamma(double);
extern double __tgamma(double);


/* Return the integer nearest X in the direction of the
prevailing rounding mode.  */
extern double rint(double __x);
extern double __rint(double __x);

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern double nextafter(double __x, double __y);
extern double __nextafter(double __x, double __y);

extern double nexttoward(double __x, long double __y);
extern double __nexttoward(double __x, long double __y);


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern double remainder(double __x, double __y);
extern double __remainder(double __x, double __y);


/* Return X times (2 to the Nth power).  */
extern double scalbn(double __x, int __n);
extern double __scalbn(double __x, int __n);


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogb(double __x);
extern int __ilogb(double __x);



/* Return X times (2 to the Nth power).  */
extern double scalbln(double __x, long int __n);
extern double __scalbln(double __x, long int __n);

/* Round X to integral value in floating-point format using current
rounding direction, but do not raise inexact exception.  */
extern double nearbyint(double __x);
extern double __nearbyint(double __x);

/* Round X to nearest integral value, rounding halfway cases away from
zero.  */
extern double round(double __x);
extern double __round(double __x);

/* Round X to the integral value in floating-point format nearest but
not larger in magnitude.  */
extern double trunc(double __x);
extern double __trunc(double __x);

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
and magnitude congruent `mod 2^n' to the magnitude of the integral
quotient x/y, with n >= 3.  */
extern double remquo(double __x, double __y, int *__quo);
extern double __remquo(double __x, double __y, int *__quo);


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
direction.  */
extern long int lrint(double __x);
extern long int __lrint(double __x);

extern long long int llrint(double __x);
extern long long int __llrint(double __x);

/* Round X to nearest integral value, rounding halfway cases away from
zero.  */
extern long int lround(double __x);
extern long int __lround(double __x);

extern long long int llround(double __x);
extern long long int __llround(double __x);


/* Return positive difference between X and Y.  */
extern double fdim(double __x, double __y);
extern double __fdim(double __x, double __y);

/* Return maximum numeric value from X and Y.  */
extern double fmax(double __x, double __y);
extern double __fmax(double __x, double __y);

/* Return minimum numeric value from X and Y.  */
extern double fmin(double __x, double __y);
extern double __fmin(double __x, double __y);


/* Classify given number.  */
extern int __fpclassify(double __value);

/* Test for negative number.  */
extern int __signbit(double __value);


/* Multiply-add function computed as a ternary operation.  */
extern double fma(double __x, double __y, double __z);
extern double __fma(double __x, double __y, double __z);




/* Include the file of declarations again, this time using `float'
instead of `double' and appending f to each function name.  */
/* Prototype declarations for math functions; helper file for <math.h>.
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

/* NOTE: Because of the special way this file is used by <math.h>, this
file must NOT be protected from multiple inclusion as header files
usually are.

This file provides prototype declarations for the math functions.
Most functions are declared using the macro:

__MATHCALL (NAME,[_r], (ARGS...));

This means there is a function `NAME' returning `double' and a function
`NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
prototype, that is actually `double' in the prototype for `NAME' and
`float' in the prototype for `NAMEf'.  Reentrant variant functions are
called `NAME_r' and `NAMEf_r'.

Functions returning other types like `int' are declared using the macro:

__MATHDECL (TYPE, NAME,[_r], (ARGS...));

This is just like __MATHCALL but for a function returning `TYPE'
instead of `_Mdouble_'.  In all of these cases, there is still
both a `NAME' and a `NAMEf' that takes `float' arguments.

Note that there must be no whitespace before the argument passed for
NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern float acosf(float __x);
extern float __acosf(float __x);
/* Arc sine of X.  */
extern float asinf(float __x);
extern float __asinf(float __x);
/* Arc tangent of X.  */
extern float atanf(float __x);
extern float __atanf(float __x);
/* Arc tangent of Y/X.  */
extern float atan2f(float __y, float __x);
extern float __atan2f(float __y, float __x);

/* Cosine of X.  */
extern float cosf(float __x);
extern float __cosf(float __x);
/* Sine of X.  */
extern float sinf(float __x);
extern float __sinf(float __x);
/* Tangent of X.  */
extern float tanf(float __x);
extern float __tanf(float __x);

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern float coshf(float __x);
extern float __coshf(float __x);
/* Hyperbolic sine of X.  */
extern float sinhf(float __x);
extern float __sinhf(float __x);
/* Hyperbolic tangent of X.  */
extern float tanhf(float __x);
extern float __tanhf(float __x);


/* Hyperbolic arc cosine of X.  */
extern float acoshf(float __x);
extern float __acoshf(float __x);
/* Hyperbolic arc sine of X.  */
extern float asinhf(float __x);
extern float __asinhf(float __x);
/* Hyperbolic arc tangent of X.  */
extern float atanhf(float __x);
extern float __atanhf(float __x);



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern float expf(float __x);
extern float __expf(float __x);

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern float frexpf(float __x, int *__exponent);
extern float __frexpf(float __x, int *__exponent);

/* X times (two to the EXP power).  */
extern float ldexpf(float __x, int __exponent);
extern float __ldexpf(float __x, int __exponent);

/* Natural logarithm of X.  */
extern float logf(float __x);
extern float __logf(float __x);

/* Base-ten logarithm of X.  */
extern float log10f(float __x);
extern float __log10f(float __x);

/* Break VALUE into integral and fractional parts.  */
extern float modff(float __x, float *__iptr);
extern float __modff(float __x, float *__iptr);


/* Return exp(X) - 1.  */
extern float expm1f(float __x);
extern float __expm1f(float __x);

/* Return log(1 + X).  */
extern float log1pf(float __x);
extern float __log1pf(float __x);

/* Return the base 2 signed integral exponent of X.  */
extern float logbf(float __x);
extern float __logbf(float __x);





/* Compute base-2 exponential of X.  */
extern float exp2f(float __x);
extern float __exp2f(float __x);

/* Compute base-2 logarithm of X.  */
extern float log2f(float __x);
extern float __log2f(float __x);




/* Power functions.  */


/* Return X to the Y power.  */
extern float powf(float __x, float __y);
extern float __powf(float __x, float __y);

/* Return the square root of X.  */
extern float sqrtf(float __x);
extern float __sqrtf(float __x);




/* Return `sqrt(X*X + Y*Y)'.  */
extern float hypotf(float __x, float __y);
extern float __hypotf(float __x, float __y);





/* Return the cube root of X.  */
extern float cbrtf(float __x);
extern float __cbrtf(float __x);




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern float ceilf(float __x);
extern float __ceilf(float __x);

/* Absolute value of X.  */
extern float fabsf(float __x);
extern float __fabsf(float __x);

/* Largest integer not greater than X.  */
extern float floorf(float __x);
extern float __floorf(float __x);

/* Floating-point modulo remainder of X/Y.  */
extern float fmodf(float __x, float __y);
extern float __fmodf(float __x, float __y);


/* Return 0 if VALUE is finite or NaN, +1 if it
is +Infinity, -1 if it is -Infinity.  */
extern int __isinff(float __value);

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitef(float __value);


/* Return X with its signed changed to Y's.  */
extern float copysignf(float __x, float __y);
extern float __copysignf(float __x, float __y);





/* Return representation of qNaN for double type.  */
extern float nanf(const char *__tagb);
extern float __nanf(const char *__tagb);




/* Return nonzero if VALUE is not a number.  */
extern int isnanf(float __value);

/* Error and gamma functions.  */
extern float erff(float);
extern float __erff(float);
extern float erfcf(float);
extern float __erfcf(float);
extern float lgammaf(float);
extern float __lgammaf(float);





/* True gamma function.  */
extern float tgammaf(float);
extern float __tgammaf(float);


/* Return the integer nearest X in the direction of the
prevailing rounding mode.  */
extern float rintf(float __x);
extern float __rintf(float __x);

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern float nextafterf(float __x, float __y);
extern float __nextafterf(float __x, float __y);

extern float nexttowardf(float __x, long double __y);
extern float __nexttowardf(float __x, long double __y);


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern float remainderf(float __x, float __y);
extern float __remainderf(float __x, float __y);


/* Return X times (2 to the Nth power).  */
extern float scalbnf(float __x, int __n);
extern float __scalbnf(float __x, int __n);


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf(float __x);
extern int __ilogbf(float __x);



/* Return X times (2 to the Nth power).  */
extern float scalblnf(float __x, long int __n);
extern float __scalblnf(float __x, long int __n);

/* Round X to integral value in floating-point format using current
rounding direction, but do not raise inexact exception.  */
extern float nearbyintf(float __x);
extern float __nearbyintf(float __x);

/* Round X to nearest integral value, rounding halfway cases away from
zero.  */
extern float roundf(float __x);
extern float __roundf(float __x);

/* Round X to the integral value in floating-point format nearest but
not larger in magnitude.  */
extern float truncf(float __x);
extern float __truncf(float __x);

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
and magnitude congruent `mod 2^n' to the magnitude of the integral
quotient x/y, with n >= 3.  */
extern float remquof(float __x, float __y, int *__quo);
extern float __remquof(float __x, float __y, int *__quo);


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
direction.  */
extern long int lrintf(float __x);
extern long int __lrintf(float __x);

extern long long int llrintf(float __x);
extern long long int __llrintf(float __x);

/* Round X to nearest integral value, rounding halfway cases away from
zero.  */
extern long int lroundf(float __x);
extern long int __lroundf(float __x);

extern long long int llroundf(float __x);
extern long long int __llroundf(float __x);


/* Return positive difference between X and Y.  */
extern float fdimf(float __x, float __y);
extern float __fdimf(float __x, float __y);

/* Return maximum numeric value from X and Y.  */
extern float fmaxf(float __x, float __y);
extern float __fmaxf(float __x, float __y);

/* Return minimum numeric value from X and Y.  */
extern float fminf(float __x, float __y);
extern float __fminf(float __x, float __y);


/* Classify given number.  */
extern int __fpclassifyf(float __value);

/* Test for negative number.  */
extern int __signbitf(float __value);


/* Multiply-add function computed as a ternary operation.  */
extern float fmaf(float __x, float __y, float __z);
extern float __fmaf(float __x, float __y, float __z);




/* Include the file of declarations again, this time using `long double'
instead of `double' and appending l to each function name.  */
/* Prototype declarations for math functions; helper file for <math.h>.
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

/* NOTE: Because of the special way this file is used by <math.h>, this
file must NOT be protected from multiple inclusion as header files
usually are.

This file provides prototype declarations for the math functions.
Most functions are declared using the macro:

__MATHCALL (NAME,[_r], (ARGS...));

This means there is a function `NAME' returning `double' and a function
`NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
prototype, that is actually `double' in the prototype for `NAME' and
`float' in the prototype for `NAMEf'.  Reentrant variant functions are
called `NAME_r' and `NAMEf_r'.

Functions returning other types like `int' are declared using the macro:

__MATHDECL (TYPE, NAME,[_r], (ARGS...));

This is just like __MATHCALL but for a function returning `TYPE'
instead of `_Mdouble_'.  In all of these cases, there is still
both a `NAME' and a `NAMEf' that takes `float' arguments.

Note that there must be no whitespace before the argument passed for
NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern long double acosl(long double __x);
extern long double __acosl(long double __y);
/* Arc sine of X.  */
extern long double asinl(long double __x);
extern long double __asinl(long double __y);
/* Arc tangent of X.  */
extern long double atanl(long double __x);
extern long double __atanl(long double __y);
/* Arc tangent of Y/X.  */
extern long double atan2l(long double __y, long double __x);
extern long double __atan2l(long double __y, long double __x);

/* Cosine of X.  */
extern long double cosl(long double __x);
extern long double __cosl(long double __y);
/* Sine of X.  */
extern long double sinl(long double __x);
extern long double __sinl(long double __y);
/* Tangent of X.  */
extern long double tanl(long double __x);
extern long double __tanl(long double __y);

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern long double coshl(long double __x);
extern long double __coshl(long double __y);
/* Hyperbolic sine of X.  */
extern long double sinhl(long double __x);
extern long double __sinhl(long double __y);
/* Hyperbolic tangent of X.  */
extern long double tanhl(long double __x);
extern long double __tanhl(long double __y);


/* Hyperbolic arc cosine of X.  */
extern long double acoshl(long double __x);
extern long double __acoshl(long double __y);
/* Hyperbolic arc sine of X.  */
extern long double asinhl(long double __x);
extern long double __asinhl(long double __y);
/* Hyperbolic arc tangent of X.  */
extern long double atanhl(long double __x);
extern long double __atanhl(long double __y);



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern long double expl(long double __x);
extern long double __expl(long double __y);

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern long double frexpl(long double __x, int *__exponent);
extern long double __frexpl(long double __x, int *__exponent);

/* X times (two to the EXP power).  */
extern long double ldexpl(long double __x, int __exponent);
extern long double __ldexpl(long double __x, int __exponent);

/* Natural logarithm of X.  */
extern long double logl(long double __x);
extern long double __logl(long double __y);

/* Base-ten logarithm of X.  */
extern long double log10l(long double __x);
extern long double __log10l(long double __y);

/* Break VALUE into integral and fractional parts.  */
extern long double modfl(long double __x, long double *__iptr);
extern long double __modfl(long double __x, long double *__iptr);


/* Return exp(X) - 1.  */
extern long double expm1l(long double __x);
extern long double __expm1l(long double __y);

/* Return log(1 + X).  */
extern long double log1pl(long double __x);
extern long double __log1pl(long double __y);

/* Return the base 2 signed integral exponent of X.  */
extern long double logbl(long double __x);
extern long double __logbl(long double __y);





/* Compute base-2 exponential of X.  */
extern long double exp2l(long double __x);
extern long double __exp2l(long double __y);

/* Compute base-2 logarithm of X.  */
extern long double log2l(long double __x);
extern long double __log2l(long double __y);




/* Power functions.  */


/* Return X to the Y power.  */
extern long double powl(long double __x, long double __y);
extern long double __powl(long double __x, long double __y);

/* Return the square root of X.  */
extern long double sqrtl(long double __x);
extern long double __sqrtl(long double __y);




/* Return `sqrt(X*X + Y*Y)'.  */
extern long double hypotl(long double __x, long double __y);
extern long double __hypotl(long double __x, long double __y);





/* Return the cube root of X.  */
extern long double cbrtl(long double __x);
extern long double __cbrtl(long double __y);




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern long double ceill(long double __x);
extern long double __ceill(long double __y);

/* Absolute value of X.  */
extern long double fabsl(long double __x);
extern long double __fabsl(long double __y);

/* Largest integer not greater than X.  */
extern long double floorl(long double __x);
extern long double __floorl(long double __y);

/* Floating-point modulo remainder of X/Y.  */
extern long double fmodl(long double __x, long double __y);
extern long double __fmodl(long double __x, long double __y);


/* Return 0 if VALUE is finite or NaN, +1 if it
is +Infinity, -1 if it is -Infinity.  */
extern int __isinfl(long double __value);

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitel(long double __value);


/* Return X with its signed changed to Y's.  */
extern long double copysignl(long double __x, long double __y);
extern long double __copysignl(long double __x, long double __y);





/* Return representation of qNaN for double type.  */
extern long double nanl(const char *__tagb);
extern long double __nanl(const char *__tagb);




/* Return nonzero if VALUE is not a number.  */
extern int isnanl(long double __value);

/* Error and gamma functions.  */
extern long double erfl(long double);
extern long double __erfl(long double);
extern long double erfcl(long double);
extern long double __erfcl(long double);
extern long double lgammal(long double);
extern long double __lgammal(long double);





/* True gamma function.  */
extern long double tgammal(long double);
extern long double __tgammal(long double);


/* Return the integer nearest X in the direction of the
prevailing rounding mode.  */
extern long double rintl(long double __x);
extern long double __rintl(long double __y);

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern long double nextafterl(long double __x, long double __y);
extern long double __nextafterl(long double __x, long double __y);

extern long double nexttowardl(long double __x, long double __y);
extern long double __nexttowardl(long double __x, long double __y);


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern long double remainderl(long double __x, long double __y);
extern long double __remainderl(long double __x, long double __y);


/* Return X times (2 to the Nth power).  */
extern long double scalbnl(long double __x, int __n);
extern long double __scalbnl(long double __x, int __n);


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbl(long double __x);
extern int __ilogbl(long double __y);



/* Return X times (2 to the Nth power).  */
extern long double scalblnl(long double __x, long int __n);
extern long double __scalblnl(long double __x, long int __n);

/* Round X to integral value in floating-point format using current
rounding direction, but do not raise inexact exception.  */
extern long double nearbyintl(long double __x);
extern long double __nearbyintl(long double __y);

/* Round X to nearest integral value, rounding halfway cases away from
zero.  */
extern long double roundl(long double __x);
extern long double __roundl(long double __y);

/* Round X to the integral value in floating-point format nearest but
not larger in magnitude.  */
extern long double truncl(long double __x);
extern long double __truncl(long double __y);

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
and magnitude congruent `mod 2^n' to the magnitude of the integral
quotient x/y, with n >= 3.  */
extern long double remquol(long double __x, long double __y, int *__quo);
extern long double __remquol(long double __x, long double __y, int *__quo);


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
direction.  */
extern long int lrintl(long double __x);
extern long int __lrintl(long double __y);

extern long long int llrintl(long double __x);
extern long long int __llrintl(long double __y);

/* Round X to nearest integral value, rounding halfway cases away from
zero.  */
extern long int lroundl(long double __x);
extern long int __lroundl(long double __y);

extern long long int llroundl(long double __x);
extern long long int __llroundl(long double __y);


/* Return positive difference between X and Y.  */
extern long double fdiml(long double __x, long double __y);
extern long double __fdiml(long double __x, long double __y);

/* Return maximum numeric value from X and Y.  */
extern long double fmaxl(long double __x, long double __y);
extern long double __fmaxl(long double __x, long double __y);

/* Return minimum numeric value from X and Y.  */
extern long double fminl(long double __x, long double __y);
extern long double __fminl(long double __x, long double __y);


/* Classify given number.  */
extern int __fpclassifyl(long double __value);

/* Test for negative number.  */
extern int __signbitl(long double __value);


/* Multiply-add function computed as a ternary operation.  */
extern long double fmal(long double __x, long double __y, long double __z);
extern long double __fmal(long double __x, long double __y, long double __z);




/* ISO C99 defines some generic macros which work on any data type.  */


/* Get the architecture specific values describing the floating-point
evaluation.  The following symbols will get defined:

float_t	floating-point type at least as wide as `float' used
to evaluate `float' expressions
double_t	floating-point type at least as wide as `double' used
to evaluate `double' expressions

FLT_EVAL_METHOD
Defined to
0	if `float_t' is `float' and `double_t' is `double'
1	if `float_t' and `double_t' are `double'
2	if `float_t' and `double_t' are `long double'
else	`float_t' and `double_t' are unspecified

INFINITY	representation of the infinity value of type `float'

FP_FAST_FMA
FP_FAST_FMAF
FP_FAST_FMAL
If defined it indicates that the `fma' function
generally executes about as fast as a multiply and an add.
This macro is defined only iff the `fma' function is
implemented directly with a hardware multiply-add instructions.

FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.

DECIMAL_DIG	Number of decimal digits supported by conversion between
decimal and all internal floating-point formats.

*/

/* All floating-point numbers can be put in one of these categories.  */
enum {FP_NAN, FP_INFINITE, FP_ZERO, FP_SUBNORMAL, FP_NORMAL};

/* GCC bug 66462 means we cannot use the math builtins with -fsignaling-nan,
so disable builtins if this is enabled.  When fixed in a newer GCC,
the __SUPPORT_SNAN__ check may be skipped for those versions.  */

/* Return number of classification appropriate for X.  */
/* Return nonzero value if sign of X is negative.  */
/* Return nonzero value if X is not +-Inf or NaN.  */
/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */






/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
we already have this functions `__isnan' and it is faster.  */
/* Return nonzero value if X is positive or negative infinity.  */
/* Bitmasks for the math_errhandling macro.  */



/* By default all functions support both errno and exception handling.
In gcc's fast math mode and if inline functions are defined this
might not be true.  */
/* Some useful constants.  */
/* The above constants are not adequate for computation using `long double's.
Therefore we provide as an extension constants with similar names as a
GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
/* When compiling in strict ISO C compatible mode we must not use the
inline functions since they, among other things, do not set the
`errno' variable correctly.  */
/* Get machine-dependent inline versions (if there are any).  */




/* Define special entry points to use when the compiler got told to
only expect finite results.  */





/* If we've still got undefined comparison macros, provide defaults.  */

/* Return nonzero value if X is greater than Y.  */







/* Return nonzero value if X is greater than or equal to Y.  */







/* Return nonzero value if X is less than Y.  */







/* Return nonzero value if X is less than or equal to Y.  */







/* Return nonzero value if either X is less than Y or Y is less than X.  */







/* Return nonzero value if arguments are unordered.  */

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

/* A time value that is accurate to the nearest
microsecond but also has a range of years.  */
/* Seconds.  */
/* Microseconds.  */
struct timeval {
__time_t tv_sec;
__suseconds_t tv_usec;
};

/* `fd_set' type and related macros, and `select'/`pselect' declarations.
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

/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */




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

/* Get definition of needed basic types.  */
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

/* Get __FD_* definitions.  */
/* Copyright (C) 1997-2016 Free Software Foundation, Inc.
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





/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */
/* We don't use `memset' because this would require a prototype and
the array isn't too big.  */

/* Get __sigset_t.  */
/* __sig_atomic_t, __sigset_t, and related definitions.  Linux version.
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




typedef int __sig_atomic_t;

/* A `sigset_t' has a bit for each signal.  */


typedef struct {
unsigned long int __val[1024/(8*sizeof(unsigned long int))];
} __sigset_t;




/* We only want to define these functions if <signal.h> was actually
included; otherwise we were included just to define the types.  Since we
are namespace-clean, it wouldn't hurt to define extra macros.  But
trouble can be caused by functions being defined (e.g., any global
register vars declared later will cause compilation errors).  */



typedef __sigset_t sigset_t;


/* Get definition of timer specification structures.  */


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


typedef __suseconds_t suseconds_t;




/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;

/* Some versions of <linux/posix_types.h> define this macros.  */

/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */




/* fd_set for select and pselect.  */
/* XPG4.2 requires this member name.  Otherwise avoid the name
from the global namespace.  */
typedef struct {
__fd_mask __fds_bits[1024/(8*(int) sizeof(__fd_mask))];
} fd_set;

/* Maximum number of file descriptors in `fd_set'.  */
/* Access macros for `fd_set'.  */
# 4215 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
(if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
after waiting the interval specified therein.  Returns the number of ready
descriptors, or -1 for errors.

This function is a cancellation point and therefore not marked with
__THROW.  */
extern int select(int __nfds, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);
/* Define some inlines helping to catch common problems.  */
# 4238 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
typedef void *__timezone_ptr_t;


/* Get the current time of day and timezone information,
putting it into *TV and *TZ.  If TZ is NULL, *TZ is not filled.
Returns 0 on success, -1 on errors.
NOTE: This form of timezone information is obsolete.
Use the functions and variables declared in <time.h> instead.  */
extern int gettimeofday(struct timeval *__tv, __timezone_ptr_t __tz);
/* Values for the first argument to `getitimer' and `setitimer'.  */
/* Timers run in real time.  */
/* Timers run only when the process is executing.  */
/* Timers run when the process is executing and when
the system is executing on behalf of the process.  */
enum __itimer_which {ITIMER_REAL, ITIMER_VIRTUAL, ITIMER_PROF};

/* Type of the second argument to `getitimer' and
the second and third arguments `setitimer'.  */
/* Value to put into `it_value' when the timer expires.  */
/* Time to the next timer expiration.  */
struct itimerval {
struct timeval it_interval;
struct timeval it_value;
};






typedef int __itimer_which_t;


/* Set *VALUE to the current setting of timer WHICH.
Return 0 on success, -1 on errors.  */
extern int getitimer(__itimer_which_t __which, struct itimerval *__value);

/* Set the timer WHICH to *NEW.  If OLD is not NULL,
set *OLD to the old value of timer WHICH.
Returns 0 on success, -1 on errors.  */
extern int setitimer(__itimer_which_t __which, const struct itimerval *__new, struct itimerval *__old);

/* Change the access time of FILE to TVP[0] and the modification time of
FILE to TVP[1].  If TVP is a null pointer, use the current time instead.
Returns 0 on success, -1 on errors.  */
extern int utimes(const char *__file, const struct timeval __tvp[2]);
# 4293 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
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


struct args_t {
struct timeval t1;
struct timeval t2;
void * restrict arg_info;
};





typedef float real_t;



int dummy(real_t [32000], real_t [32000], real_t [32000], real_t [32000], real_t [32000], real_t [256][256], real_t [256][256], real_t [256][256], real_t);

void init(int **ip, real_t *s1, real_t *s2);

int initialise_arrays(const char *name);
real_t calc_checksum(const char *name);



// Arrays used by TSVC and common.c



extern real_t flat_2d_array[256*256];

extern real_t x[32000];

extern real_t a[32000], b[32000], c[32000], d[32000], e[32000], aa[256][256], bb[256][256], cc[256][256], tt[256][256];

extern int indx[32000];

extern real_t * restrict xx;
extern real_t *yy;

// array definitions
real_t flat_2d_array[256*256];

real_t x[32000];

real_t a[32000], b[32000], c[32000], d[32000], e[32000], aa[256][256], bb[256][256], cc[256][256], tt[256][256];

int indx[32000];

real_t * restrict xx;
real_t *yy;

extern real_t s000(struct args_t *func_args);

// %1.1
extern real_t s111(struct args_t *func_args);

extern real_t s1111(struct args_t *func_args);

// %1.1

extern real_t s112(struct args_t *func_args);

extern real_t s1112(struct args_t *func_args);

// %1.1

extern real_t s113(struct args_t *func_args);

extern real_t s1113(struct args_t *func_args);

// %1.1

extern real_t s114(struct args_t *func_args);

// %1.1

extern real_t s115(struct args_t *func_args);

extern real_t s1115(struct args_t *func_args);

// %1.1

extern real_t s116(struct args_t *func_args);

// %1.1

extern real_t s118(struct args_t *func_args);

// %1.1

extern real_t s119(struct args_t *func_args);

extern real_t s1119(struct args_t *func_args);

// %1.2

extern real_t s121(struct args_t *func_args);

// %1.2

extern real_t s122(struct args_t *func_args);

// %1.2

extern real_t s123(struct args_t *func_args);

// %1.2

extern real_t s124(struct args_t *func_args);

// %1.2
extern real_t s125(struct args_t *func_args);

// %1.2
extern real_t s126(struct args_t *func_args);

// %1.2

extern real_t s127(struct args_t *func_args);

// %1.2

extern real_t s128(struct args_t *func_args);

// %1.3

extern real_t s131(struct args_t *func_args);

// %1.3

extern real_t s132(struct args_t *func_args);

// %1.4

extern real_t s141(struct args_t *func_args);

// %1.5

extern void s151s(real_t a[32000], real_t b[32000], int m);

extern real_t s151(struct args_t *func_args);

// %1.5

extern void s152s(real_t a[32000], real_t b[32000], real_t c[32000], int i);

extern real_t s152(struct args_t *func_args);

// %1.6

extern real_t s161(struct args_t *func_args);

extern real_t s1161(struct args_t *func_args);

// %1.6

//int s162(int k)
extern real_t s162(struct args_t *func_args);

// %1.7

//int s171(int inc)
extern real_t s171(struct args_t *func_args);

// %1.7

//int s172( int n1, int n3)
extern real_t s172(struct args_t *func_args);

// %1.7

extern real_t s173(struct args_t *func_args);

// %1.7

//int s174(int M)
extern real_t s174(struct args_t *func_args);

// %1.7

//int s175(int inc)
extern real_t s175(struct args_t *func_args);

// %1.7

extern real_t s176(struct args_t *func_args);

// **********************************************************
// *                                *
// *            VECTORIZATION                *
// *                                *
// **********************************************************

// %2.1

extern real_t s211(struct args_t *func_args);

// %2.1

extern real_t s212(struct args_t *func_args);

extern real_t s1213(struct args_t *func_args);

// %2.2

extern real_t s221(struct args_t *func_args);

extern real_t s1221(struct args_t *func_args);

// %2.2

extern real_t s222(struct args_t *func_args);

// %2.3

extern real_t s231(struct args_t *func_args);

// %2.3

extern real_t s232(struct args_t *func_args);

extern real_t s1232(struct args_t *func_args);

// %2.3

extern real_t s233(struct args_t *func_args);

extern real_t s2233(struct args_t *func_args);

// %2.3
extern real_t s235(struct args_t *func_args);

// %2.4

extern real_t s241(struct args_t *func_args);

// %2.4

//int s242(real_t s1, real_t s2)
extern real_t s242(struct args_t *func_args);

// %2.4

extern real_t s243(struct args_t *func_args);

// %2.4

extern real_t s244(struct args_t *func_args);

extern real_t s1244(struct args_t *func_args);

extern real_t s2244(struct args_t *func_args);

// %2.5

extern real_t s251(struct args_t *func_args);

extern real_t s1251(struct args_t *func_args);

extern real_t s2251(struct args_t *func_args);

extern real_t s3251(struct args_t *func_args);

// %2.5

extern real_t s252(struct args_t *func_args);

// %2.5

extern real_t s253(struct args_t *func_args);

// %2.5

extern real_t s254(struct args_t *func_args);

// %2.5

extern real_t s255(struct args_t *func_args);

// %2.5

extern real_t s256(struct args_t *func_args);

// %2.5

extern real_t s257(struct args_t *func_args);

extern real_t s258(struct args_t *func_args);

// %2.7

extern real_t s261(struct args_t *func_args);

extern real_t s271(struct args_t *func_args);

// %2.7

//int s272(real_t t)
extern real_t s272(struct args_t *func_args);

// %2.7

extern real_t s273(struct args_t *func_args);

// %2.7

extern real_t s274(struct args_t *func_args);

// %2.7

extern real_t s275(struct args_t *func_args);

extern real_t s2275(struct args_t *func_args);

// %2.7

extern real_t s276(struct args_t *func_args);

// %2.7
extern real_t s277(struct args_t *func_args);

// %2.7

extern real_t s278(struct args_t *func_args);

// %2.7

extern real_t s279(struct args_t *func_args);

extern real_t s1279(struct args_t *func_args);

// %2.7

//int s2710( real_t x)
extern real_t s2710(struct args_t *func_args);

// %2.7

extern real_t s2711(struct args_t *func_args);

// %2.7

extern real_t s2712(struct args_t *func_args);

// %2.8

extern real_t s281(struct args_t *func_args);

extern real_t s1281(struct args_t *func_args);

// %2.9

extern real_t s291(struct args_t *func_args);

// %2.9

extern real_t s292(struct args_t *func_args);

// %2.9

extern real_t s293(struct args_t *func_args);

// %2.10

extern real_t s2101(struct args_t *func_args);

// %2.12

extern real_t s2102(struct args_t *func_args);

// %2.11

extern real_t s2111(struct args_t *func_args);

// **********************************************************
//                                *
//            IDIOM RECOGNITION            *
//                                *
// **********************************************************

// %3.1

extern real_t s311(struct args_t *func_args);

extern real_t test(real_t *A);

extern real_t s31111(struct args_t *func_args);

// %3.1

extern real_t s312(struct args_t *func_args);

// %3.1
extern real_t s313(struct args_t *func_args);

// %3.1

extern real_t s314(struct args_t *func_args);

// %3.1

extern real_t s315(struct args_t *func_args);

// %3.1

extern real_t s316(struct args_t *func_args);
// %3.1

extern real_t s317(struct args_t *func_args);

// %3.1

//int s318( int inc)
extern real_t s318(struct args_t *func_args);

// %3.1

extern real_t s319(struct args_t *func_args);

// %3.1

extern real_t s3110(struct args_t *func_args);

extern real_t s13110(struct args_t *func_args);

// %3.1

extern real_t s3111(struct args_t *func_args);

// %3.1

extern real_t s3112(struct args_t *func_args);

// %3.1

extern real_t s3113(struct args_t *func_args);

// %3.2

extern real_t s321(struct args_t *func_args);

// %3.2

extern real_t s322(struct args_t *func_args);

// %3.2

extern real_t s323(struct args_t *func_args);

// %3.3

extern real_t s331(struct args_t *func_args);

// %3.3
//int s332( real_t t)
extern real_t s332(struct args_t *func_args);

// %3.4

extern real_t s341(struct args_t *func_args);

// %3.4

extern real_t s342(struct args_t *func_args);

// %3.4

extern real_t s343(struct args_t *func_args);

// %3.5

extern real_t s351(struct args_t *func_args);

extern real_t s1351(struct args_t *func_args);

// %3.5

extern real_t s352(struct args_t *func_args);

// %3.5

//int s353(int* __restrict__ ip)
extern real_t s353(struct args_t *func_args);

// **********************************************************
//                                *
//             LANGUAGE COMPLETENESS            *
//                                *
// **********************************************************

// %4.1
// %4.2

extern real_t s421(struct args_t *func_args);

extern real_t s1421(struct args_t *func_args);

// %4.2

extern real_t s422(struct args_t *func_args);

// %4.2

extern real_t s423(struct args_t *func_args);

// %4.2

extern real_t s424(struct args_t *func_args);

// %4.3

extern real_t s431(struct args_t *func_args);

// %4.4

extern real_t s441(struct args_t *func_args);

// %4.4

extern real_t s442(struct args_t *func_args);

// %4.4

extern real_t s443(struct args_t *func_args);

// %4.5

extern real_t s451(struct args_t *func_args);

// %4.5

extern real_t s452(struct args_t *func_args);

// %4.5

extern real_t s453(struct args_t *func_args);

// %4.7

extern int s471s(void);

extern real_t s471(struct args_t *func_args);

// %4.8

extern real_t s481(struct args_t *func_args);

// %4.8

// %4.8
extern real_t s482(struct args_t *func_args);

// %4.9

//int s491(int* __restrict__ ip)
extern real_t s491(struct args_t *func_args);

// %4.11

//int s4112(int* __restrict__ ip, real_t s)
extern real_t s4112(struct args_t *func_args);

// %4.11

//int s4113(int* __restrict__ ip)
extern real_t s4113(struct args_t *func_args);

// %4.11

//int s4114(int* ip, int n1)
extern real_t s4114(struct args_t *func_args);

// %4.11

//int s4115(int* __restrict__ ip)
extern real_t s4115(struct args_t *func_args);

// %4.11

//int s4116(int* __restrict__ ip, int j, int inc)
extern real_t s4116(struct args_t *func_args);

// %4.11

extern real_t s4117(struct args_t *func_args);

// %4.12

extern real_t f(real_t a, real_t b);

extern real_t s4121(struct args_t *func_args);

// %5.1

extern real_t va(struct args_t *func_args);

// %5.1

//int vag( int* __restrict__ ip)
extern real_t vag(struct args_t *func_args);

// %5.1

//int vas( int* __restrict__ ip)
extern real_t vas(struct args_t *func_args);

// %5.1

extern real_t vif(struct args_t *func_args);

// %5.1

extern real_t vpv(struct args_t *func_args);

// %5.1

extern real_t vtv(struct args_t *func_args);

// %5.1

extern real_t vpvtv(struct args_t *func_args);

// %5.1

//real_t vpvts( real_t s)
extern real_t vpvts(struct args_t *func_args);

// %5.1

extern real_t vpvpv(struct args_t *func_args);

// %5.1

extern real_t vtvtv(struct args_t *func_args);

// %5.1

extern real_t vsumr(struct args_t *func_args);

// %5.1

extern real_t vdotr(struct args_t *func_args);

// %5.1

extern real_t vbor(struct args_t *func_args);

typedef real_t (*test_function_t)(struct args_t *);

/*void time_function(test_function_t vector_func, void * arg_info)
{
struct args_t func_args = {.arg_info=arg_info};

double result = vector_func(&func_args);

double tic=func_args.t1.tv_sec+(func_args.t1.tv_usec/1000000.0);
double toc=func_args.t2.tv_sec+(func_args.t2.tv_usec/1000000.0);

double taken = toc-tic;

printf("%10.3f\t%f\n", taken, result);
} */

extern int main(int argc, char **argv);
# 4974 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s000(struct args_t *func_args);
# 4999 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s111(struct args_t *func_args);
# 5023 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1111(struct args_t *func_args);
# 5047 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s112(struct args_t *func_args);
# 5071 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1112(struct args_t *func_args);
# 5095 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s113(struct args_t *func_args);
# 5119 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1113(struct args_t *func_args);
# 5143 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s114(struct args_t *func_args);
# 5171 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s115(struct args_t *func_args);
# 5198 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1115(struct args_t *func_args);
# 5225 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s116(struct args_t *func_args);
# 5253 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s118(struct args_t *func_args);
# 5280 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s119(struct args_t *func_args);
# 5307 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1119(struct args_t *func_args);
# 5334 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s121(struct args_t *func_args);
# 5361 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s122(struct args_t *func_args);
# 5400 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s123(struct args_t *func_args);
# 5433 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s124(struct args_t *func_args);
# 5466 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s125(struct args_t *func_args);
# 5497 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s126(struct args_t *func_args);
# 5531 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s127(struct args_t *func_args);
# 5561 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s128(struct args_t *func_args);
# 5592 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s131(struct args_t *func_args);
# 5616 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s132(struct args_t *func_args);
# 5642 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s141(struct args_t *func_args);
# 5676 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern void s151s(real_t a [ 32000 ], real_t b [ 32000 ], int m);
# 5682 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s151(struct args_t *func_args);
# 5702 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern void s152s(real_t a [ 32000 ], real_t b [ 32000 ], real_t c [ 32000 ], int i);
# 5706 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s152(struct args_t *func_args);
# 5732 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s161(struct args_t *func_args);
# 5762 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1161(struct args_t *func_args);
# 5792 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s162(struct args_t *func_args);
# 5817 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s171(struct args_t *func_args);
# 5843 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s172(struct args_t *func_args);
# 5876 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s173(struct args_t *func_args);
# 5900 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s174(struct args_t *func_args);
# 5926 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s175(struct args_t *func_args);
# 5955 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s176(struct args_t *func_args);
# 5983 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s211(struct args_t *func_args);
# 6009 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s212(struct args_t *func_args);
# 6035 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1213(struct args_t *func_args);
# 6061 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s221(struct args_t *func_args);
# 6087 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1221(struct args_t *func_args);
# 6110 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s222(struct args_t *func_args);
# 6137 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s231(struct args_t *func_args);
# 6163 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s232(struct args_t *func_args);
# 6190 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1232(struct args_t *func_args);
# 6217 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s233(struct args_t *func_args);
# 6251 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2233(struct args_t *func_args);
# 6285 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s235(struct args_t *func_args);
# 6315 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s241(struct args_t *func_args);
# 6341 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s242(struct args_t *func_args);
# 6371 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s243(struct args_t *func_args);
# 6398 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s244(struct args_t *func_args);
# 6425 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1244(struct args_t *func_args);
# 6451 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2244(struct args_t *func_args);
# 6477 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s251(struct args_t *func_args);
# 6504 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1251(struct args_t *func_args);
# 6532 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2251(struct args_t *func_args);
# 6560 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s3251(struct args_t *func_args);
# 6587 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s252(struct args_t *func_args);
# 6616 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s253(struct args_t *func_args);
# 6645 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s254(struct args_t *func_args);
# 6673 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s255(struct args_t *func_args);
# 6703 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s256(struct args_t *func_args);
# 6732 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s257(struct args_t *func_args);
# 6761 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s258(struct args_t *func_args);
# 6791 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s261(struct args_t *func_args);
# 6820 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s271(struct args_t *func_args);
# 6845 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s272(struct args_t *func_args);
# 6874 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s273(struct args_t *func_args);
# 6902 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s274(struct args_t *func_args);
# 6931 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s275(struct args_t *func_args);
# 6959 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2275(struct args_t *func_args);
# 6988 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s276(struct args_t *func_args);
# 7016 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s277(struct args_t *func_args);
# 7045 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s278(struct args_t *func_args);
# 7075 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s279(struct args_t *func_args);
# 7107 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1279(struct args_t *func_args);
# 7133 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2710(struct args_t *func_args);
# 7172 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2711(struct args_t *func_args);
# 7197 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2712(struct args_t *func_args);
# 7222 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s281(struct args_t *func_args);
# 7251 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1281(struct args_t *func_args);
# 7280 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s291(struct args_t *func_args);
# 7308 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s292(struct args_t *func_args);
# 7339 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s293(struct args_t *func_args);
# 7363 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2101(struct args_t *func_args);
# 7388 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2102(struct args_t *func_args);
# 7418 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s2111(struct args_t *func_args);
# 7444 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s311(struct args_t *func_args);
# 7470 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t test(real_t *A);
# 7480 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s31111(struct args_t *func_args);
# 7509 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s312(struct args_t *func_args);
# 7535 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s313(struct args_t *func_args);
# 7561 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s314(struct args_t *func_args);
# 7588 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s315(struct args_t *func_args);
# 7626 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s316(struct args_t *func_args);
# 7653 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s317(struct args_t *func_args);
# 7681 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s318(struct args_t *func_args);
# 7719 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s319(struct args_t *func_args);
# 7749 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s3110(struct args_t *func_args);
# 7787 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s13110(struct args_t *func_args);
# 7824 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s3111(struct args_t *func_args);
# 7851 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s3112(struct args_t *func_args);
# 7879 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s3113(struct args_t *func_args);
# 7906 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s321(struct args_t *func_args);
# 7930 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s322(struct args_t *func_args);
# 7954 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s323(struct args_t *func_args);
# 7980 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s331(struct args_t *func_args);
# 8009 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s332(struct args_t *func_args);
# 8047 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s341(struct args_t *func_args);
# 8077 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s342(struct args_t *func_args);
# 8107 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s343(struct args_t *func_args);
# 8140 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s351(struct args_t *func_args);
# 8170 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1351(struct args_t *func_args);
# 8200 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s352(struct args_t *func_args);
# 8226 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s353(struct args_t *func_args);
# 8259 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s421(struct args_t *func_args);
# 8286 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s1421(struct args_t *func_args);
# 8312 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s422(struct args_t *func_args);
# 8339 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s423(struct args_t *func_args);
# 8367 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s424(struct args_t *func_args);
# 8396 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s431(struct args_t *func_args);
# 8424 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s441(struct args_t *func_args);
# 8453 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s442(struct args_t *func_args);
# 8496 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s443(struct args_t *func_args);
# 8525 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s451(struct args_t *func_args);
# 8549 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s452(struct args_t *func_args);
# 8573 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s453(struct args_t *func_args);
# 8601 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern int s471s(void);
# 8606 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s471(struct args_t *func_args);
# 8634 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s481(struct args_t *func_args);
# 8661 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s482(struct args_t *func_args);
# 8691 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s491(struct args_t *func_args);
# 8718 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4112(struct args_t *func_args);
# 8750 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4113(struct args_t *func_args);
# 8777 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4114(struct args_t *func_args);
# 8813 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4115(struct args_t *func_args);
# 8842 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4116(struct args_t *func_args);
# 8881 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4117(struct args_t *func_args);
# 8905 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t f(real_t a, real_t b);
# 8909 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t s4121(struct args_t *func_args);
# 8933 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t va(struct args_t *func_args);
# 8957 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vag(struct args_t *func_args);
# 8984 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vas(struct args_t *func_args);
# 9011 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vif(struct args_t *func_args);
# 9036 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vpv(struct args_t *func_args);
# 9060 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vtv(struct args_t *func_args);
# 9084 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vpvtv(struct args_t *func_args);
# 9108 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vpvts(struct args_t *func_args);
# 9134 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vpvpv(struct args_t *func_args);
# 9158 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vtvtv(struct args_t *func_args);
# 9182 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vsumr(struct args_t *func_args);
# 9208 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vdotr(struct args_t *func_args);
# 9234 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern real_t vbor(struct args_t *func_args);
# 9271 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
extern int main(int argc, char **argv);