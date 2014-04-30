/*
___  ___                 ______          _           _
|  \/  |                 | ___ \        (_)         | |
| .  . |_ __  _ __ ______| |_/ / __ ___  _  ___  ___| |_
| |\/| | '_ \| '_ \______|  __/ '__/ _ \| |/ _ \/ __| __|
| |  | | |_) | |_) |     | |  | | | (_) | |  __/ (__| |_
\_|  |_/ .__/| .__/      \_|  |_|  \___/| |\___|\___|\__|
       | |   | |                       _/ |
       |_|   |_|                      |__/

[+]MPP is a C-based programming language that allows you to code more easily in Darija.
[+]Author : Naper & XDarker
[+]Web site : www.naper.eu
[+]Web site : mpp-project.org

*/

#ifndef __MPP_H__
#define __MPP_H__
#define MAX 1025
#include "stdio.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#ifdef WIN32

#include <windows.h>

#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif
#define WALOU 0
#define khata2 -1
#define sa7i7 1
#define nihaya (-1)
// WAR9A in MPP
#define OPEN_MAX  20    /* max #files open at once */
#define PERMS 0666
typedef struct _iobuf {
       int  cnt;       /* characters left */
       char *ptr;      /* next character position */
       char *base;     /* location of buffer */
       int  flag;      /* mode of file access */
       int  fd;        /* file descriptor */
}WAR9AA;
extern FILE _iob[OPEN_MAX];

enum _flags {
       _READ   = 01,   /* file open for reading */
       _WRITE  = 02,   /* file open for writing */
       _UNBUF  = 04,   /* file is unbuffered */
       _EOF    = 010,  /* EOF has occurred on this file */
       _ERR    = 020   /* error occurred on this file */
};

int _fillbuf(FILE *);
int _flushbuf(int, FILE *);

typedef struct r3o9adi{
	_3achari r7a9i9i;
	_3achari rtakhayouli;
}r3o9adi;

khawi bdakolchi(joumla smit_lprojet);
khawi ktab(joumla message,...);
khawi rlstar(joumla message ,...);
_ra9me zaid(ra9m a, ra9m b);
_ra9me na9is(ra9m a, ra9m b);
ra9m _rja3(ra9m a);
khawi rja3_lkhawi();
khawi stn3as(ra9m value);
khawi wari_ra9me(_ra9me a);
khawi wari_3o9adi(r3o9adi a);
khawi ila_ra9m(ra9m a , ra9m b, _7arf message[MAX]);
khawi lanci(_7arf cmd [MAX]);
khawi wari(_7arf message[], ra9m a);
khawi _9ra(joumla message,...);
khawi _w9ra(war9a w,joumla fichier,ra9m kifach);
khawi r9ra(ra9m a);
war9a wsayeb(joumla fichier,joumla message);
khawi ktabhda(_7arf str[300],_7arf message[100],_7arf type[100]);
war9a w7al(joumla name, ra9m mode);



#ifdef __cplusplus
}
#endif

#endif
