//Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis N1, N2, N3 e N4. Calcular a média aritmética (variável MD) desse aluno e apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 5; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o valor da média obtida pelo aluno.

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
    float N1, N2, N3, N4; //Variáveis (Nota 1, Nota 2, Nota 3, Nota 4) de números com casas decimais.
    float MD; //Variável (Média) de números com casas decimais.

    printf("    Digite as notas bimestrais do aluno:\n"); //É exibida na tela usando a função "printf".
    printf("\n    Nota 1: ");
    scanf("%f", &N1);
    printf("    Nota 2: ");
    scanf("%f", &N2);
    printf("    Nota 3: ");
    scanf("%f", &N3);
    printf("    Nota 4: ");
    scanf("%f", &N4);
    /*
    São exibidas mensagens para solicitar as notas do aluno individualmente, utilizando a função "printf".
    As notas são lidas do usuário usando a função "scanf" e armazenadas nas respectivas variáveis N1, N2, N3 e N4.
    */
    MD = (N1 + N2 + N3 + N4) / 4;
    /*
    A média aritmética é calculada somando as notas e dividindo o resultado por 4, e o resultado é armazenado na variável MD.
    */
    printf("    Média obtida: %.2f\n", MD);
    /*
    A mensagem "Média obtida: %.2f\n" é exibida na tela usando a função "printf", onde o %f é substituído pelo valor da variável MD.
    O especificador .2 exibe a média com duas casas decimais.
    */
    if (MD >= 5) { //É utilizada uma estrutura de controle if para verificar se a média MD é maior ou igual a 5.
        printf("    Aprovado\n");
    } else {
        printf("    Reprovado\n");
    }
    /*
    Se a condição for verdadeira, a mensagem "Aprovado" é exibida na tela usando a função "printf".
    Caso contrário, se a média for menor que 5, a mensagem "Reprovado" é exibida.
    */
    return 0; //O valor 0 é retornado para indicar que o programa foi executado com sucesso.
}
