#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "headers.h"
#include "basic_headers.h"

int eGCD ( int nFirst, int nSecond )
{
    while( nSecond != 0)
    {
       swapModulo(&nFirst, &nSecond);
    }

    return nFirst;
}

int mInverse ( int nMod, int mInversion )
{
        int i;

        if( nMod > mInversion )
        {
            swap(&nMod, &mInversion);
        }

        for( i = 0; i < mInversion; i++ )
        {
            if( ((nMod * i) % mInversion) == ONE)
               break;

            else
                 continue;
        }

     return i;

}

void kRSA( void )
{
    const int array[SIZE] = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43};
    int firstRandom, secondRandom, fEuler = 0, e = 0, index = 0, privateIndex = 0;

    do
    {
        firstRandom  = CONDITION(array);
        secondRandom = CONDITION(array);

    }while( firstRandom == secondRandom );

    fEuler = (firstRandom - ONE) * (secondRandom - 1);
    index  = _SET_INDEX(firstRandom, secondRandom);

    for( e = E_START; eGCD(e, fEuler) != ONE; e += E_NEXT)
        privateIndex = mInverse(e, fEuler);

    fprintf(stdout, "Klucz publiczny: \nWykladnik e = %d\nModul n = %d\n\nKlucz prywatny: \nWykladnik klucza prywatnego = %d\n\n",
             e, index, privateIndex);

 }


int pModulo( int number, int index, int mod )
{

   int power, result, q;
   power  = number;
   result = 1;

   for( q = index; q > 0; q /= 2 )
   {
         if( ((q % 2) == ONE) )
         {
             result = (result * power) % mod;
         }

         power = (power * power) % mod;
   }

   return result;

}

void cRSA( void )
{
    int e, index, code;

    fprintf(stdout, "Kodowanie danych RSA\
                     \n-----------------------\
                     \nPodaj wykladnik: ");
    fscanf(stdin,"%d", &index);
    fprintf(stdout, "\nPodaj modul: ");
    fscanf(stdin,"%d", &e);
    fprintf(stdout, "\nPodaj kod RSA: ");
    fscanf(stdin,"%d", &code);

    fprintf(stdout, "\nWynik kodowania: %d\n", pModulo(code, index, e));

}


