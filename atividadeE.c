//Efetuar a leitura de três valores numéricos (representados pelas variáveis A, B e C) e processar o cálculo da equação completa de segundo grau, utilizando a fórmula de Bhaskara (considerar para a solução do problema todas as possíveis condições para delta: delta < O - não há solução real, delta> O - há duas soluções reais e diferentes e delta= O - há apenas uma solução real). Lembre-se de que é completa a equação de segundo grau que possui todos os coeficientes A, B e C diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas para delta.

#include <stdio.h> //Biblioteca necessária para entrada e saída de dados.
#include <stdlib.h> //Biblioteca necessária para a função "system".
#include <locale.h> //Biblioteca necessária para configurar a localização padrão.

int main()
{
    setlocale(LC_ALL, "");
    /*
    A função "setlocale" é chamada para configurar a localização padrão e o parâmetro LC_ALL
    indica que todas as configurações de localização devem ser definidas de acordo com o
    ambiente do sistema.
    */
    float A, B, C;
    float delta, x1, x2;

    printf("Digite os valores dos coeficientes A, B e C:\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);

    delta = B*B - 4*A*C;

    if (delta < 0) {
        printf("Não há solução real.\n");
    } else if (delta > 0) {
        x1 = (-B + sqrt(delta)) / (2*A);
        x2 = (-B - sqrt(delta)) / (2*A);
        printf("Há duas soluções reais e diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        x1 = -B / (2*A);
        printf("Há apenas uma solução real:\n");
        printf("x1 = %.2f\n", x1);
    }

    return 0;
}

