/* /////////////////////////////////////////////////////////////////////////
 * File:    fastparse/fastparse.h
 *
 * Purpose: Definition of the FastParse.core API.
 *
 * Created: 7th October 2026
 * Updated: 7th October 2026
 *
 * Home:    http://synesis.com.au/software/
 *
 * Copyright (c) 2026, Matthew Wilson and Synesis Information Systems
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the names of Matthew Wilson and Synesis Information Systems nor
 *   the names of any contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file fastparse/fastparse.h Definition of the FastParse.core API
 */

#ifndef FASTPARSE_INCL_FASTPARSE_H_FASTPARSE
#define FASTPARSE_INCL_FASTPARSE_H_FASTPARSE


/* /////////////////////////////////////////////////////////////////////////
 * version
 */

#ifndef FASTPARSE_DOCUMENTATION_SKIP_SECTION
# define FASTPARSE_VER_FASTPARSE_H_FASTPARSE_MAJOR      1
# define FASTPARSE_VER_FASTPARSE_H_FASTPARSE_MINOR      0
# define FASTPARSE_VER_FASTPARSE_H_FASTPARSE_REVISION   1
# define FASTPARSE_VER_FASTPARSE_H_FASTPARSE_EDIT       1
#endif /* !FASTPARSE_DOCUMENTATION_SKIP_SECTION */


/** \def FASTPARSE_VER_MAJOR
 * The major version number of FastParse
 */

/** \def FASTPARSE_VER_MINOR
 * The minor version number of FastParse
 */

/** \def FASTPARSE_VER_PATCH
 * The patch version number of FastParse
 */

/** \def FASTPARSE_VER_ALPHABETA
 * The prerelease discriminator of FastParse. 0xFF is a release; 0x41 is
 * alpha 1
 */

/** \def FASTPARSE_VER
 * The current composite version number of FastParse
 */

/** \def FASTPARSE_VER_STRING
 * The current version of FastParse as a NUL-terminated string
 */

#define FASTPARSE_VER_MAJOR                                 0
#define FASTPARSE_VER_MINOR                                 1
#define FASTPARSE_VER_PATCH                                 0
#define FASTPARSE_VER_ALPHABETA                             0x41

#define FASTPARSE_VER \
    (0\
        |   (   FASTPARSE_VER_MAJOR       << 24   ) \
        |   (   FASTPARSE_VER_MINOR       << 16   ) \
        |   (   FASTPARSE_VER_PATCH       <<  8   ) \
        |   (   FASTPARSE_VER_ALPHABETA   <<  0   ) \
    )

#define FASTPARSE_VER_STRING                                "0.1.0-alpha1"

#ifndef FASTPARSE_DOCUMENTATION_SKIP_SECTION
# define FASTPARSE_VER_REVISION                             FASTPARSE_VER_PATCH
#endif /* !FASTPARSE_DOCUMENTATION_SKIP_SECTION */


/* /////////////////////////////////////////////////////////////////////////
 * storage class
 */

#ifdef __cplusplus

# define FASTPARSE_EXTERN_C                                extern "C"
#else /* ? __cplusplus */

# define FASTPARSE_EXTERN_C                                extern
#endif /* ? __cplusplus */


/* /////////////////////////////////////////////////////////////////////////
 * API
 */

/** \defgroup group__fastparse_api FastParse API
 * \brief The FastParse public API
 *
 * The types, constants, and functions that constitute the FastParse API.
 * The parsing surface is not yet defined; this release publishes the
 * version contract only.
 */


/** \brief Obtains the library version string
 * \ingroup group__fastparse_api
 *
 * \return Non-NULL pointer to a static NUL-terminated version string
 */
FASTPARSE_EXTERN_C char const*
fastparse_getVersionString(void);


/* ////////////////////////////////////////////////////////////////////// */

#endif /* !FASTPARSE_INCL_FASTPARSE_H_FASTPARSE */


/* ///////////////////////////// end of file //////////////////////////// */

