//Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis N1, N2, N3 e N4. Calcular a média aritmética (variável MD1) desse aluno e apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve solicitar a quinta nota (nota de exame, representada pela variável NE) do aluno e calcular uma nova média aritmética (variável MD2) entre a nota de exame e a primeira média aritmética. Se o valor da nova média for maior ou igual a cinco, apresentar a mensagem "Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o valor da média obtida pelo aluno.

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
    float N1, N2, N3, N4; //As variáveis N1, N2, N3, N4 representam as notas bimestrais.
    float MD1, MD2; //Variável MD1 é a média aritmética das notas bimestrais, variável MD2 é a nova média aritmética após o exame.
    float NE; //Variável NE é a nota do exame.

    printf("Digite as notas bimestrais do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &N1);
    printf("Nota 2: ");
    scanf("%f", &N2);
    printf("Nota 3: ");
    scanf("%f", &N3);
    printf("Nota 4: ");
    scanf("%f", &N4);
    /*
    As notas bimestrais são solicitadas ao usuário usando a função "printf" e lidas usando a função "scanf".
    */
    MD1 = (N1 + N2 + N3 + N4) / 4; //A média aritmética MD1 é calculada somando as notas e dividindo por 4.

    printf("Média obtida: %.2f\n", MD1); //A mensagem "Média obtida: %.2f\n" é exibida, onde %f é substituído pelo valor da média MD1.

    if (MD1 >= 7) { //Se a média MD1 for maior ou igual a 7, a mensagem "Aprovado" é exibida.
        printf("Aprovado\n");
    } else {
        printf("Informe a nota de exame: "); //Caso contrário, o usuário é solicitado a informar a nota do exame usando a função "printf" e "scanf".
        scanf("%f", &NE);

        MD2 = (MD1 + NE) / 2; //A nova média MD2 é calculada somando a média MD1 com a nota do exame e dividindo por 2.

        printf("Nova média obtida: %.2f\n", MD2); //A mensagem "Nova média obtida: %.2f\n" é exibida, onde %f é substituído pelo valor da nova média MD2.

        if (MD2 >= 5) { //Se a nova média MD2 for maior ou igual a 5, a mensagem "Aprovado em exame" é exibida.
            printf("Aprovado em exame\n");
        } else {
            printf("Reprovado\n"); //Caso contrário, a mensagem "Reprovado" é exibida.
        }
    }

    return 0; //O valor 0 é retornado para indicar que o programa foi executado com sucesso.
}
