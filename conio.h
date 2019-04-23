//conio.h

#ifndef	CONIO_H
#define	CONIO_H

#include <mingw.h>

#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif

_CRTIMP char* __cdecl	_cgets (char*);
_CRTIMP int __cdecl	_cprintf (const char*, ...);
_CRTIMP int __cdecl	_cputs (const char*);
_CRTIMP int __cdecl	_cscanf (char*, ...);

_CRTIMP int __cdecl	_getch (void);
_CRTIMP int __cdecl	_getche (void);
_CRTIMP int __cdecl	_kbhit (void);
_CRTIMP int __cdecl	_putch (int);
_CRTIMP int __cdecl	_ungetch (int);

#ifndef	_NO_OLDNAMES

_CRTIMP int __cdecl	getch (void);
_CRTIMP int __cdecl	getche (void);
_CRTIMP int __cdecl	kbhit (void);
_CRTIMP int __cdecl	putch (int);
_CRTIMP int __cdecl	ungetch (int);

#endif	/* Not _NO_OLDNAMES */

#ifdef	__cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _CONIO_H_ */
