
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef OBJDICT_H
#define OBJDICT_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 ObjDict_valueRangeTest (UNS8 typeValue, void * value);
const indextable * ObjDict_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data ObjDict_Data;
extern REAL32 DHT22_Temperature;		/* Mapped at index 0x2000, subindex 0x00*/
extern REAL32 DHT22_Humidity;		/* Mapped at index 0x2001, subindex 0x00*/
extern REAL32 BMP_Pressure;		/* Mapped at index 0x2002, subindex 0x00*/
extern REAL32 BMP_Temperature;		/* Mapped at index 0x2003, subindex 0x00*/
extern INTEGER32 Counter;		/* Mapped at index 0x2004, subindex 0x00*/
extern UNS8 Test_String[10];		/* Mapped at index 0x2005, subindex 0x00*/
extern UNS8 Lock;		/* Mapped at index 0x2006, subindex 0x00*/
extern UNS8 Switch1;		/* Mapped at index 0x2007, subindex 0x00*/
extern INTEGER32 Switch1_TimeOut;		/* Mapped at index 0x2008, subindex 0x00*/
extern REAL32 Main_Voltage;		/* Mapped at index 0x2009, subindex 0x00*/

#endif // OBJDICT_H
