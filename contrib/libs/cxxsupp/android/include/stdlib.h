/*
 * Copyright (C) 2013 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#ifndef NDK_ANDROID_SUPPORT_STDLIB_H
#define NDK_ANDROID_SUPPORT_STDLIB_H

// __LP64__

#include_next <stdlib.h>

#if !defined(__LP64__)

#include <xlocale.h>

#ifdef __cplusplus
extern "C" {
#endif

long long   strtoll(const char*, char**, int);
long double strtold(const char*, char**);
void _Exit(int);
int                  mbtowc(wchar_t *pwc, const char *pmb, size_t max);
long                 strtol_l(const char *nptr, char **endptr, int base, locale_t loc);
unsigned long        strtoul_l(const char *nptr, char **endptr, int base, locale_t loc);
long long            strtoll_l(const char *nptr, char **endptr, int base, locale_t loc);
unsigned long long   strtoull_l(const char *nptr, char **endptr, int base, locale_t loc);
long double          strtold_l(const char *nptr, char **endptr, locale_t loc);

#if __ANDROID_API__ < 26
double               strtod_l(const char* __s, char** __end_ptr, locale_t __l);
float                strtof_l(const char* __s, char** __end_ptr, locale_t __l);
long                 strtol_l(const char* __s, char** __end_ptr, int, locale_t __l);
#endif

#ifdef __cplusplus
}  // extern "C"
#endif

#endif // !__LP64__

#endif  // NDK_ANDROID_SUPPORT_STDLIB_H
