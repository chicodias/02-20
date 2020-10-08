#include <stdio.h>

void convBin(int x);

int main ()
{

    convBin(20);

    return 0;
}

void convBin(int x)
{
    if(x%2>0)
        convBin(x/2);
    printf("%d",x%2);
}