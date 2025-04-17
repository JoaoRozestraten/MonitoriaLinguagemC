#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo, palpite, tentativas = 10;

    int a0=-1,a1=-1,a2=-1,a3=1;
    int k;
    int digito_codigo,digito_palpite;
    int quantidade_acertos;
    int jg=1;

    while(jg != 0)
    {
        tentativas=10;
        a0=-1;
        a1=-1;
        a2=-1;
        a3=-1;
        quantidade_acertos=0;
srand(time(NULL));
    codigo = (rand() % 9000) + 1000;

    system("cls");
    printf("\n\t\t\t\t     ==> Seja bem-vindo ao jogo SECRETO! <==\n\n");
    printf("\t\t\tVocê tem 10 tentativas para acertar o número secreto entre [1000 e 9999].\n");
    printf("\t\t\tA partir da 5ª tentativa, o jogo irá te ajudar dando dicas.\n");
    printf("\n\t------------------------------------------------------------------------------------------------------------\n\t\t\t\t\t");
    system("pause");
    system("cls");

    do
    {
        quantidade_acertos=0;
        printf("\n\t\t\t\t\tDigite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < 1000 || palpite > 9999)
        {
            printf("\n\t\t\t     Por favor, insira um número válido entre 1000 e 9999.\n\n\t\t\t\t");
            system("pause");
            system("cls");
            continue;
        }

        if (palpite == codigo)
        {
            printf("\n\t\t\tParabéns! Você acertou o número %d em %d tentativa(s).\n", codigo, 11 - tentativas);
            tentativas=0;
            break;
        }


            printf("\n\tSEU CÓDIGO ATÉ AGORA: ");
            digito_codigo=(codigo/1000)%10;
            digito_palpite=(palpite/1000)%10;
            if (digito_codigo == digito_palpite)
            {
                a0 = digito_palpite; // Armazena o dígito correto
                quantidade_acertos++;
            }
            if(a0!=-1)
            {
                printf("%d ",a0);
            }
            else
            {
                    printf("_ ");
            }



            digito_codigo=(codigo/100)%10;
            digito_palpite=(palpite/100)%10;
            if (digito_codigo == digito_palpite)
            {
                a1 = digito_palpite; // Armazena o dígito correto
                quantidade_acertos++;
            }

            if(a1!=-1)
            {
                printf("%d ",a1);
            }
            else
            {
                    printf("_ ");
            }




            digito_codigo=(codigo/10)%10;
            digito_palpite=(palpite/10)%10;
            if (digito_codigo == digito_palpite)
            {
                a2 = digito_palpite; // Armazena o dígito correto
                quantidade_acertos++;
            }

            if(a2!=-1)
            {
                printf("%d ",a2);
            }
            else
            {
                    printf("_ ");
            }


            digito_codigo=(codigo)%10;
            digito_palpite=(palpite)%10;
            if (digito_codigo == digito_palpite)
            {
                a3 = digito_palpite; // Armazena o dígito correto
                quantidade_acertos++;
            }

            if(a3!=-1)
            {
                printf("%d ",a3);
            }
            else
            {
                    printf("_ ");
            }

            if (quantidade_acertos > 0)
            {
                printf("\n\tVocê acertou %d dígito(s) na posição correta!\n", quantidade_acertos);
            }
            else
            {
                printf("\n\tNenhum dígito correto...\n");
            }

            if (tentativas <= 5)
            {

                printf("\n\tDica sobre o número secreto:\n");
                                //TESTE TESTE TESTE
                if(a0==-1)
                {
                    k=(codigo/1000)%10;
                    if(k%2==0)
                    {
                        printf("O numero na casa dos milhares (x000) é par");
                    }
                    else
                    {
                        printf("O número na casa dos milhares (x000) é ímpar");
                    }
                }
                else
                {
                    if(a1==-1)
                    {
                        k=(codigo/100)%10;
                        if(k%2==0)
                        {
                            printf("O numero na casa das centenas (0x00) é par");
                        }
                        else
                        {
                            printf("O número na casa das centenas (0x00) é ímpar");
                        }
                    }
                    else
                    {
                        if(a2==-1)
                        {
                            k=(codigo/10)%10;
                            if(k%2==0)
                            {
                                printf("O número da casa das dezenas (00x0)é par");
                            }
                            else
                            {
                                printf("O número da casa das dezenas (00x0) é ímpar");
                            }
                        }
                        else
                        {
                            if(a3==-1)
                            {
                                k=(codigo)%10;
                                if(k%2==0)
                                {
                                    printf("O número da casa das unidades(000x) é par");
                                }
                                else
                                {
                                    printf("O número da casa das unidades(000x) é ímpar");
                                }
                            }
                        }
                    }
                }
            }


        tentativas--;

        if (tentativas > 0)
        {
            printf("\n\t\t\t\t\tTentativas restantes: %d\n\t\t\t\t", tentativas);
        }
        else
        {
            printf("\n\t\t\tVocê não acertou o número! O código era: %d\n\t\t\t\t", codigo);
        }
        system("pause");
        system("cls");

    } while (tentativas > 0);







        system("pause");
        system("cls");
        printf("\n\tQuer jogar de novo (1 para sim e 0 para não)\n\t");
        scanf("%d",&jg);
        if(jg==0)
        {
            printf("\n\tAté a proxima\n\t");
            system("pause");
        }
    }

}
