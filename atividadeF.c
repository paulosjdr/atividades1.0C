//Ler três valores inteiros representados pelas variáveis A, B e C e apresentar os valores lidos dispostos em ordem crescente.

#include <stdio.h> //Biblioteca necessária para entrada e saída de dados.
#include <stdlib.h> //Biblioteca necessária para a função "system".
#include <locale.h> //Biblioteca necessária para configurar a localização padrão.

void ordenarCrescente(int *a, int *b, int *c)
{
    setlocale(LC_ALL, "");
    /*
    A função "setlocale" é chamada para configurar a localização padrão e o parâmetro LC_ALL
    indica que todas as configurações de localização devem ser definidas de acordo com o
    ambiente do sistema.
    */

    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int A, B, C;

    setlocale(LC_ALL, "");

    printf("Digite três valores inteiros:\n");
    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    printf("C: ");
    scanf("%d", &C);

    ordenarCrescente(&A, &B, &C);

    printf("Valores em ordem crescente: %d, %d, %d\n", A, B, C);

    return 0;
}

