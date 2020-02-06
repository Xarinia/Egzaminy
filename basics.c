#include <stdio.h>
#include "basic_headers.h"

void swapModulo(int *nFirst, int *nSecond)
{

    int template = *nFirst;
    *nFirst = *nSecond ;
    *nSecond = template % *nSecond;

    return;
}

void swap(int *nFirst, int *nSecond)
{
    int template = *nFirst;
    *nFirst = *nSecond;
    *nSecond = template;

    return;
}

