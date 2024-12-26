#include <stdio.h>

void converterBits() {
    // Função para conversão de unidades de bits, bytes, kilobytes, megabytes, gigabytes e terabytes
    // Entrada: O número a ser convertido, a unidade de entrada e a unidade de saída, definidos pelo usuário
    // Saída: Exibição do resultado diretamente no console

    double numero;          // Variável para o número a ser convertido
    short int unidade;      // Variável para unidade de entrada
    short int saida;        // Variável para unidade de saída
    long double result = 0; // Variável para armazenar o resultado final
    double NumParaBits = 0; // Variável auxiliar para converter a unidade de entrada para bits
    long double NumEmBits = 0; // Variável para armazenar o número convertido em bits

    // Solicita ao usuário o número para conversão
    printf("Digite o número para ser convertido: ");
    scanf("%lf", &numero);

    // Solicita ao usuário a unidade de entrada
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Bits\n2 - Bytes\n3 - Kilobytes\n4 - Megabytes\n5 - Gigabytes\n6 - Terabytes\n");
    printf("Digite a opção: ");
    scanf("%hd", &unidade);

    // Solicita ao usuário a unidade de saída
    printf("Escolha a unidade de saída:\n");
    printf("1 - Bits\n2 - Bytes\n3 - Kilobytes\n4 - Megabytes\n5 - Gigabytes\n6 - Terabytes\n");
    printf("Digite a opção: ");
    scanf("%hd", &saida);

    // Determina o fator de conversão para bits com base na unidade de entrada
    switch (unidade) {
        case 1: // Unidade de entrada: bits
            NumParaBits = 1;
            break;
        case 2: // Unidade de entrada: bytes
            NumParaBits = 8;
            break;
        case 3: // Unidade de entrada: kilobytes
            NumParaBits = 8192; // 8 * 1024
            break;
        case 4: // Unidade de entrada: megabytes
            NumParaBits = 8388608; // 8 * 1024 * 1024
            break;
        case 5: // Unidade de entrada: gigabytes
            NumParaBits = 8589934592; // 8 * 1024 * 1024 * 1024
            break;
        case 6: // Unidade de entrada: terabytes
            NumParaBits = 8796093022208; // 8 * 1024 * 1024 * 1024 * 1024
            break;
        default: // Unidade de entrada inválida
            printf("Tipo de unidade de entrada inválida. Por favor, selecione uma opção válida.\n");
            return;
    }

    // Converte o número da unidade de entrada para bits
    NumEmBits = numero * NumParaBits;

    // Converte os bits para a unidade de saída especificada
    switch (saida) {
        case 1: // Unidade de saída: bits
            result = NumEmBits;
            break;
        case 2: // Unidade de saída: bytes
            result = NumEmBits / 8;
            break;
        case 3: // Unidade de saída: kilobytes
            result = NumEmBits / 8192; // 8 * 1024
            break;
        case 4: // Unidade de saída: megabytes
            result = NumEmBits / 8388608; // 8 * 1024 * 1024
            break;
        case 5: // Unidade de saída: gigabytes
            result = NumEmBits / 8589934592; // 8 * 1024 * 1024 * 1024
            break;
        case 6: // Unidade de saída: terabytes
            result = NumEmBits / 8796093022208; // 8 * 1024 * 1024 * 1024 * 1024
            break;
        default: // Unidade de saída inválida
            printf("Tipo de unidade de saída inválida. Por favor, selecione uma opção válida.\n");
            return;
    }

    // Exibe o resultado da conversão
    printf("O resultado da conversão é: %.10Lf\n", result);
}
