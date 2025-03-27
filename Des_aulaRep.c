#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Faça um programa que peça um número
inteiro positivo e em seguida mostre este número invertido.
Independente do número de dígitos do número
Exemplo: 2349 -> Número Invertido 9432*/

int main ()
{
    int a,b;
    b=0;
    a=12345678; //número de 4 dígitos
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
