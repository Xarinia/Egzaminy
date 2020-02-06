#ifndef _HEADERS_H
#define _HEADERS_H

#define ONE 1
#define ZERO 0
#define SIZE 10
#define E_START 3
#define E_NEXT 2
#define CONDITION(x) (x[ rand() % 10 ])
#define _SET_INDEX(a,b) (a * b)


int eGCD ( int First, int nSecond );
int mInverse ( int nMod, int mInversion );
void kRSA( void );
int pModulo( int number, int index, int mod);
void cRSA( void );


#endif
