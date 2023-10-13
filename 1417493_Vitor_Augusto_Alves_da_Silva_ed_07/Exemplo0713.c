/*
 Exemplo0713 - v1.3. - 14 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int x;

    void exemplo0711 ();
    void exemplo0712 ();
    void exemplo0713 ();

    while (x !=0)
{
    printf("Exemplo 11 = Multiplos de 5 e impares, gravados em txt \n");
    printf("Exemplo 12 = Multiplos de 7 e pares em oredem decrescentes, gravados em txt \n");
    printf("Exemplo 13 = Potencias de 3, gravados em txt \n");

    printf("\nEscolha um dos exemplos de 11 a 20 \n");
    scanf("%d", &x);

    switch (x)
    {
        case (11):
        exemplo0711();
        break;
        
        case (12):
        exemplo0712();
        break;

        case (13):
        exemplo0713();
        break;

    }
}

    system ("pause");
    return 0;
}

void exemplo0711 ()
{
    int n;
    int i;
    int numero = 0;
    int vetor [20];

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        numero = numero + 5;
        if (numero % 2 != 0)
        {
            vetor [i] = numero;
            i++;
        }
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Multiplo de 5 e impar \n", vetor[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0711.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0712 ()
{
    int n;
    int i;
    int numero = 7;
    int vetor [20];
    int contador = 1;

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        numero = numero + 7;
        if (numero % 2 == 0)
        {
            vetor [i] = numero;
            i++;
        }
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Multiplo de 5 e impar \n", vetor[n - contador]);
        contador++;
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0712.txt", "w");

    i = 0;
    contador = 1;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[n - contador]);
    i++;
    contador++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0713 ()
{
    int n;
    int i;
    int numero = 3;
    int vetor [20];
    int contador = 1;
    int cont = 0;
    int potencia;

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        potencia = pow(numero, cont);
        vetor [i] = potencia;
        i++;
        cont++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Potencias de 3 \n", vetor[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0713.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}