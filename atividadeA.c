// Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e apresentar o resultado da diferença do maior valor pelo menor valor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int A, B, diferenca;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A > B) {
        diferenca = A - B;
    } else {
        diferenca = B - A;
    }

    printf("A diferença entre o maior e o menor valor é: %d\n", diferenca);


    return 0;
}
