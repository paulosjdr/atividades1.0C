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
    int N; //Variável de número inteiro.

    do{
    /*
    O bloco "do-while" é iniciado. Isso significa que as instruções dentro desse bloco serão repetidas
    pelo menos uma vez e continuarão sendo repetidas enquanto a condição especificada for verdadeira.
    */
    system("cls"); //A função "system" é chamada com o argumento "cls". Isso irá limpar a tela do console.

    printf("    Digite um valor numérico inteiro positivo ou negativo: ");
    /*
    A mensagem "Digite um valor numérico inteiro positivo ou negativo: " é exibida na tela usando a função "printf".
    */
    scanf("%d", &N);
    /*
    A função "scanf" é utilizada para ler o valor digitado pelo usuário e armazená-lo na variável N. 
    O especificador %d é usado para ler um valor inteiro.
    */

    if (N < 0) { //É utilizada uma estrutura de controle if para verificar se o valor N é um valor negativo.
        N *= -1;
    }
    /*
    Se a condição for verdadeira, o valor de N é multiplicado por -1, invertendo o sinal e tornando-o positivo. 
    Isso é feito pela instrução N *= -1, que é uma forma abreviada de N = N * -1.
    */
    for (int i = 0; i < 4; i++) { //Imprime uma nova linha no console quatro vezes.
        printf("\n");
    }
    printf("    O valor lido como positivo é: [%d]\n", N);
    /*
    A mensagem "O valor lido como positivo é: [N]" é exibida na tela usando a função "printf", 
    onde o %d é substituído pelo valor da variável N.
    */
    for (int i = 0; i < 4; i++) { //Imprime uma nova linha no console quatro vezes.
        printf("\n");
    }
    system("pause");
    /*
    A função "system" é chamada novamente com o argumento "pause". Isso faz com que o programa
    aguarde a entrada do usuário antes de prosseguir.
    */
    }while(N !=0);
    /*
    O bloco "do-while" é encerrado com a condição "(N !=0)". Isso significa que o loop
    continuará enquanto N for diferente de zero.
    */
    return 0;
    /*
    O programa retorna 0, indicando que foi concluído com sucesso. O programa continua repetindo esse processo
    até que o usuário digite zero para ambos os números.
    */
}
