#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Fa�a um programa que pe�a um n�mero
inteiro positivo e em seguida mostre este n�mero invertido.
Independente do n�mero de d�gitos do n�mero
Exemplo: 2349 -> N�mero Invertido 9432*/

int main ()
{
    int a,b;
    b=0;
    a=12345678; //n�mero de 4 d�gitos
    printf("%d\n",a);
    do
    {
        b=b*10;
        b=b+a%10;
        a=a/10;
    }
    while(a!=0);

    printf("%d",b);
    return 0;
}
