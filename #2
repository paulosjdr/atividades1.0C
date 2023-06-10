//Efetuar a leitura de um valor numérico inteiro positivo ou negativo representado pela variável N e apresentar o valor lido 
como sendo positivo. Dica: se o valor lido for menor que zero, ele deve ser multiplicado por -1.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int N;

    do{

    system("cls");
printf("\n==================================================================\n");
    printf("    Digite um valor numérico inteiro positivo ou negativo: ");
    scanf("%d", &N);
printf("==================================================================\n");

    if (N < 0) {
        N *= -1;
    }

    for (int i = 0; i < 4; i++) { //Imprime uma nova linha no console quatro vezes.
        printf("\n");
    }
printf("\n========================================\n");
    printf("    O valor lido como positivo é: [%d]\n", N);
printf("========================================\n");

    for (int i = 0; i < 4; i++) { //Imprime uma nova linha no console quatro vezes.
        printf("\n");
    }

printf("///////////////////////\n");
printf("//////bY: Paulo////////\n"); //Assinatura.
printf("///////////////////////\n\n");

    system("pause");

    }while(N !=0);

    return 0;
}

