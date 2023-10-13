/*
 Exemplo0620 - v2.0. - 08 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int exemplo11();
    int exemplo12();
    int exemplo13();
    int exemplo14();
    int exemplo15();
    int exemplo16();
    void exemplo17();
    void exemplo18();
    void exemplo19();
    void exemplo20();

    int x;

    while (x != 0)
{
    printf("\n (11) - Apartir do 9, acrescentando multiplos de 2 \n");
    printf("\n (12) - Multiplos de 9, em ordem decrescente \n");
    printf("\n (13) - Multiplos de 9, em ordem crescente, comecando em 1 \n");
    printf("\n (14) - Multiplos de 9, em ordem decrescente, do inverso. \n");
    printf("\n (15) - Soma dos primeiros valores impares positivos comecando no valor 9 \n");
    printf("\n (16) - Soma dos inversos dos primeiros valores impares positivos comecando no valor 9 \n");
    printf("\n (17) - Mostrar cada simbolo de uma sequencia de caracteres separadamente \n");
    printf("\n (18) - Contar os digitos com valores pares em uma cadeia de caracteres \n");
    printf("\n (19) - Calcular a quantidade de minusculas em uma cadeia de caracteres \n");
    printf("\n (20) - Calcular certo termo par da serie de Fibonacci comecando em 1 \n");
    printf("\n (0)  - Sair \n");

    printf("\n Escolha um dos exemplos de 11 a 20. \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        exemplo11();
        break;

        case 12:
        exemplo12();
        break;

        case 13:
        exemplo13();
        break;

        case 14:
        exemplo14();
        break;

        case 15:
        exemplo15();
        break;

        case 16:
        exemplo16();
        break;

        case 17:
        exemplo17();
        break;

        case 18:
        exemplo18();
        break;

        case 19:
        exemplo19();
        break;

        case 20:
        exemplo20();
        break;

        default:
        printf("Invalido \n");
        break;
    }
}

    system ("pause");
    return 0;
}

int exemplo11a (int x)
{
int resultado;
int mais2 = 0;
int i = 0;

while (i < x)
{
resultado = 9 + mais2;
printf("Valor = %d \n", resultado);
mais2++;
mais2++;
i++;
}
}

int exemplo11 ()
{
    int exemplo11a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo11a (n);
    system("pause");
    
}

int exemplo12a (int x)
{
    int i = 0;
    int cont = 1;
    int multiplosDe9[20];
    int resultado [20];

    while (i < x)
    {
        multiplosDe9[i] = 9 * cont;
        resultado[i] = multiplosDe9 [i];
        i++;
        cont++;
    }
    i = 0;
    while (i < x)
    {
        printf("Valor = %d \n" ,resultado[x - 1]);
        x--;
    }
}

int exemplo12()
{
    int exemplo12a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo12a (n);
    system("pause");
}

int exemplo13a(int x)
{
    int multiplosDe9[20];
    int i = 0;
    int cont = 1;

    while(i < x)
    {
    multiplosDe9[i] = 9 * cont;
    i++;
    cont++;
    }

    printf("Valor = 1 \n");
    i = 0;
    while (i < x)
    {
        printf("Valor = %d \n", multiplosDe9[i]);
        i++;
    }
}

int exemplo13()
{
    int exemplo13a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo13a(n);
    system("pause");
}

int exemplo14a(int x)
{
    int multiplosDe9[20];
    int i = 0;
    int cont = 0;

    while(i < x)
    {
    multiplosDe9[i] = pow(9, cont);
    i++;
    cont++;
    }

    i = 0;
    while (i < x)
    {
        printf("Valor = 1/%d \n", multiplosDe9[x - 1]);
        x--;
    }
}

int exemplo14()
{
    int exemplo14a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo14a(n);
    system("pause");
}

int exemplo15a(int x)
{
    int multiplosDe2[20];
    int i = 0;
    int cont = 0;
    int resultado[20];
    int total = 0;

    while(i < x)
    {
    multiplosDe2[i] = 0 + cont;
    i++;
    cont++;
    cont++;
    }

    i = 0;
    while(i < x)
    {
        resultado[i] = 9 + multiplosDe2[i];
        i++;
    }

    i = 0;
    while (i < x)
    {
        printf("Valor = %d \n", resultado[i]);
        i++;
    }

    i = 0;
    while(i < x)
    {
        total += resultado[i];
        i++;
    }

    printf ("Soma total = %d \n", total);
}

int exemplo15 ()
{
    int exemplo15a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo15a(n);
    system("pause");
}

int exemplo16a(int x)
{
    float multiplosDe2[20];
    int i = 0;
    int cont = 0;
    float resultado[20];
    float total = 0;

    while(i < x)
    {
    multiplosDe2[i] = 0 + cont;
    i++;
    cont++;
    cont++;
    }

    i = 0;
    while(i < x)
    {
        resultado[i] = 1/(9 + multiplosDe2[i]);
        i++;
    }

    i = 0;
    while (i < x)
    {
        printf("Valor = %f \n", resultado[i]);
        i++;
    }

    i = 0;
    while(i < x)
    {
        total += resultado[i];
        i++;
    }

    printf ("Soma total = %f \n", total);
}

int exemplo16()
{
    int exemplo16a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo16a(n);
    system("pause");
}

void exemplo17a(char palavra[])
{
    int i = 0;

    while (palavra[i] != '\0')
    {
    printf("Caractere = %c \n", palavra[i]);
    i++;
    }    
}

void exemplo17 ()
{
    void exemplo17a();
    char vetor [20];

    printf("Insira a sequencia de caracteres \n");
    scanf("%s", &vetor);

    exemplo17a(vetor);
    system("pause");
}

void exemplo18a(char palavra[])
{
    int i = 0;
    int cont = 1;

    while (palavra[i] != '\0')
    {
    i++;
    if (palavra[i] == 50 || palavra[i] == 52 ||palavra[i] == 54 ||palavra[i] == 56)
    {
    printf("Caractere %d = %c \n", cont, palavra[i]);
    cont++;
    }
    }    
}

void exemplo18()
{
   void exemplo18a();
   char vetor [20];

    printf("Insira a sequencia de caracteres \n");
    scanf("%s", &vetor);

    exemplo18a(vetor);
    system("pause"); 
}

void exemplo19a(char palavra[])
{
    int i = 0;
    int cont = 1;

    while (palavra[i] != '\0')
    {
    i++;
    if (palavra[i] >= 'a' && palavra[i] <= 'z')
    {
    printf("Caractere %d = %c \n", cont, palavra[i]);
    cont++;
    }
    }    

    printf("Quantidade de minusculas = %d", cont);
}

void exemplo19()
{
   void exemplo19a();
   char vetor [20];

    printf("Insira a sequencia de caracteres \n");
    scanf("%s", &vetor);

    exemplo19a(vetor);
    system("pause"); 
}

void exemplo20a(int x)
{
    int i = 3;
    int calculoFibonacci;
    int fibonacci[20];
    int cont = 0;
    int fibonaccipar[20];
    int soma = 0;

    fibonacci[0] = 0;
    fibonacci[1] = 1;
    fibonacci[2] = 1;
    calculoFibonacci = ((fibonacci[i - 1]) + (fibonacci [i - 2]));
    
    while (i < 20)
    {
        fibonacci [i] = fibonacci[i-1] + fibonacci[i-2];
        i++;
    }

    i = 0;
    while(cont < x)
    {
    i++;
    if (fibonacci[i] % 2 == 0)
    {
    fibonaccipar [cont] = fibonacci [i];
    printf("%d \n", fibonacci[i]);
    cont++;
    }
    }

    i = 0;
    cont = 0;


    while (i < x)
    {
        soma += fibonaccipar[cont];
        i++;
        cont++;
    }

    printf("A soma dos valores eh = %d \n", soma);




}

void exemplo20()
{
   void exemplo20a();
   int n;

    printf("Insira a quantidade de numeros desejados \n");
    scanf("%d", &n);

    exemplo20a(n);
    system("pause"); 
}