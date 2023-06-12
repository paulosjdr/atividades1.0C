//Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D. Apresentar apenas os valores que sejam divisíveis por 2 e 3.

#include <stdio.h> //Biblioteca necessária para entrada e saída de dados.
#include <stdlib.h> //Biblioteca necessária para a função "system".
#include <locale.h> //Biblioteca necessária para configurar a localização padrão.

int main() //Ponto de entrada do programa.
{
    setlocale(LC_ALL, "");
    /*
    A função "setlocale" é chamada para configurar a localização padrão e o parâmetro LC_ALL
    indica que todas as configurações de localização devem ser definidas de acordo com o
    ambiente do sistema.
    */

    int A, B, C, D; //As variáveis A, B, C e D são utilizadas para armazenar os valores inteiros lidos.

    printf("Digite quatro valores inteiros:\n");
    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    printf("C: ");
    scanf("%d", &C);
    printf("D: ");
    scanf("%d", &D);
    /*
    Os valores inteiros são solicitados ao usuário usando a função "printf" e lidos usando a função "scanf".
    */
    printf("Valores divisíveis por 2 e 3:\n"); //A mensagem "Valores divisíveis por 2 e 3" é exibida.

    if (A % 2 == 0 && A % 3 == 0) {
        printf("%d\n", A);
    }

    if (B % 2 == 0 && B % 3 == 0) {
        printf("%d\n", B);
    }

    if (C % 2 == 0 && C % 3 == 0) {
        printf("%d\n", C);
    }

    if (D % 2 == 0 && D % 3 == 0) {
        printf("%d\n", D);
    }
    /*
    Cada valor é verificado se é divisível por 2 e 3 usando o operador % (operador de módulo).
    Se o valor for divisível por 2 e 3, ele é exibido na tela usando a função "printf".
    */

    return 0; //O valor 0 é retornado para indicar que o programa foi executado com sucesso.
}
