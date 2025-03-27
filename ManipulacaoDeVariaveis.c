#include <stdio.h> // Adicionando a bibliotecas necessárias
#include <stdlib.h>

int main() {

    int a, b;
    float c;
    printf("Escolha um numero para a variavel A: ");
    scanf("%d", &a);

    printf("Escolha um numero para a variavel B: ");
    scanf("%d", &b);


    printf("Voce escolheu A = %d e B = %d\n", a, b);
    //TROCAR OS VALORES USANDO APENAS 2 VARIAVEIS
    //COM 3 SERIA: a, b, c => c=a, a=b, b=c
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Novos valores A = %d e B = %d\n", a, b);
    system("pause");
    system("cls");

    a=9;//dividir inteiros
    b=2;
    c=a/b;
    printf("agora para A=9 e B=2 veja a diferenca de \n a/b e ((float)a/b) respectivamente");
    printf("\n %.1f",c);
    c = ((float)a/b);
    printf("\n %.1f",c);
    return 0;
}
