#include <stdio.h>

void converterPotencia() {
    // Função para conversão de unidades de potência: Watts, quilowatts e cavalos-vapor
    // Entrada: O número a ser convertido, a unidade de entrada e a unidade de saída, definidos pelo usuário
    // Saída: Exibição do resultado diretamente no console

    double numero;          // Variável para o número a ser convertido
    short int unidade;      // Variável para unidade de entrada
    short int saida;        // Variável para unidade de saída
    double result = 0;      // Variável para armazenar o resultado final
    double NumParaWatts = 0; // Variável auxiliar para converter a unidade de entrada para watts

    // Solicita ao usuário o número para conversão
    printf("Digite o número para ser convertido: ");
    scanf("%lf", &numero);

    // Solicita ao usuário a unidade de entrada
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Watts\n2 - Quilowatts\n3 - Cavalos-vapor\n");
    printf("Digite a opção: ");
    scanf("%hd", &unidade);

    // Solicita ao usuário a unidade de saída
    printf("Escolha a unidade de saída:\n");
    printf("1 - Watts\n2 - Quilowatts\n3 - Cavalos-vapor\n");
    printf("Digite a opção: ");
    scanf("%hd", &saida);

    // Determina o fator de conversão para Watts com base na unidade de entrada
    switch (unidade) {
        case 1: // Unidade de entrada: Watts
            NumParaWatts = 1;
            break;
        case 2: // Unidade de entrada: Quilowatts
            NumParaWatts = 1000;
            break;
        case 3: // Unidade de entrada: Cavalos-vapor
            NumParaWatts = 735.5;
            break;
        default: // Unidade de entrada inválida
            printf("Tipo de unidade de entrada inválida. Por favor, selecione uma opção válida.\n");
            return;
    }

    // Converte o número da unidade de entrada para Watts
    double NumEmWatts = numero * NumParaWatts;

    // Converte de Watts para a unidade de saída especificada
    switch (saida) {
        case 1: // Unidade de saída: Watts
            result = NumEmWatts;
            break;
        case 2: // Unidade de saída: Quilowatts
            result = NumEmWatts / 1000;
            break;
        case 3: // Unidade de saída: Cavalos-vapor
            result = NumEmWatts / 735.5;
            break;
        default: // Unidade de saída inválida
            printf("Tipo de unidade de saída inválida. Por favor, selecione uma opção válida.\n");
            return;
    }

    // Exibe o resultado da conversão
    printf("O resultado da conversão é: %.10lf\n", result);
}
