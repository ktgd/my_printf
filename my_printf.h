/*// Copyright 2021 Karl V. P. Bertin
////
//// Redistribution and use in source and binary forms, with or without modifi-
//// cation, are permitted provided that the following conditions are met:
////
////   1.  Redistributions of source code must retain the above copyright noti-
////       ce, this list of conditions and the following disclaimer.
////
////   2.  Redistributions in binary form must reproduce the above copyright
////       notice, this list of conditions and the following disclaimer in the
////       documentation and/or other materials provided with the distribution.
////
////   3.  Neither the name of the copyright holder nor the names of its con-
////       tributors may be used to endorse or promote products derived from
////       this software without specific prior written permission.
////
//// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
//// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRI-
//// BUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLA-
//// RY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
//// OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSI-
//// NESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
//// IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHER-
//// WISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
*/// OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef MY_PRINTF_H
# define MY_PRINTF_H

# include <stdarg.h> // va_start, va_arg, va_copy, va_end
# include <stddef.h> // size_t
# include <string.h> // strlen, memcpy, strcat //	unused code
# include <limits.h> // CHAR_BIT, INT_MIN, INT_MAX //	unused code
# include <math.h> // pow
# include <stdlib.h> // malloc
# include <unistd.h> // write
# include <stdio.h> // putc, putchar, puts, printf //	unused, debug code
//# include <unistd.h> // write
//# include <stdlib.h> // malloc, free
//# include <stdarg.h> // va_start, va_arg, va_copy, va_end
//# include <stdio.h> // va_start, va_arg, va_copy, va_end
//# include "libc.h"

//signed int cnvrtd(int i);
//unsigned int cnvrto(int i);
//unsigned int cnvrtu(int i);
//unsigned int cnvrtx(int i);
//unsigned char cnvrtc(int i);
//char* cnvrts(char* s);
//char* cnvrtp(void* p);
//int printf(const char* restrict f, ...);
int	my_printf(char * format, ...);

#endif

/*//	my_printf.h
////
////	Karl Bertin `bertin_k`
////	bertin_k@qwasar.io
*///	https://upskill.us.qwasar.io/users/bertin_k