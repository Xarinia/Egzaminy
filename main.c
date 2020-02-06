#include <stdio.h>
#include "headers.h"
#include "basic_headers.h"

int main()
{
        int choice;

        //srand( ( unsigned int ) time ( ) );

        do
        {
            fprintf(stdout, "System szyfrowania danych RSA\
                             \n--------------------------------\
                             \nMENU\n===========================\
                             \n[ 0 ] - Koniec pracy programu\
                             \n[ 1 ] - Generowanie kluczy RSA\
                             \n[ 2 ] - Kodowanie RSA\n\n");
            fscanf(stdin, "%d", &choice);
            fprintf(stdout, "\n\n\n");

            switch( choice )
            {
                case 1: kRSA( ); break;
                case 2: cRSA( ); break;
            }




        } while( choice != ZERO);




        return 0;
}
