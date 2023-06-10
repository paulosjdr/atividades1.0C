// Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e apresentar o resultado da diferença do maior valor pelo menor valor.

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
  int A, B, diferenca; //Variáveis

    do{
    /*
    O bloco "do-while" é iniciado. Isso significa que as instruções dentro desse bloco serão repetidas
    pelo menos uma vez e continuarão sendo repetidas enquanto a condição especificada for verdadeira.
    */
    system("cls"); //A função "system" é chamada com o argumento "cls". Isso irá limpar a tela do console.

    printf("Digite o valor de A: "); //É exibido a mensagem solicitando ao usuário que digite o valor de A usando a função "printf".
    scanf("%d", &A); //O valor digitado pelo usuário é lido usando a função "scanf" e armazenado na variável A.

    printf("Digite o valor de B: "); //É exibido a mensagem solicitando ao usuário que digite o valor de B usando a função "printf".
    scanf("%d", &B); //O valor digitado pelo usuário é lido usando a função "scanf" e armazenado na variável B.

    if (A > B) {
        diferenca = A - B;
    } else {
        diferenca = B - A;
    }
    /*
    O programa verifica se A é maior que B usando a estrutura de controle "if". Se a condição for verdadeira, a diferença entre A e B é
    calculada e atribuída à variável "diferenca". Caso contrário, a diferença entre B e A é calculada e atribuída à variável "diferenca".
    */
    printf("A diferença entre o maior e o menor valor é: %d\n", diferenca); //A diferença calculada é exibida na tela usando a função "printf".

    system("pause");
    /*
    A função "system" é chamada novamente com o argumento "pause". Isso faz com que o programa
    aguarde a entrada do usuário antes de prosseguir.
    */
    }while(A !=0 && B !=0);
    /*
    O bloco "do-while" é encerrado com a condição "(A != 0 && B != 0)". Isso significa que o loop
    continuará enquanto ambos A e B forem diferentes de zero.
    */
    return 0;
    /*O programa retorna 0, indicando que foi concluído com sucesso. O programa continua repetindo esse processo
    até que o usuário digite zero para ambos os números.
    */
}
