#include <stdio.h>
#include "massa.h"

void ConverterMassa() {
    int escolha;
    double valor, resultado = 0.0;
    char unidadeOrigem[50], unidadeDestino[50];

    printf("Escolha a conversão de massa:\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Gramas para Quilogramas\n");
    printf("3. Libras para Quilogramas\n");
    printf("4. Quilogramas para Libras\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1:
            resultado = valor * 1000;
            snprintf(unidadeOrigem, sizeof(unidadeOrigem), "Kg");
            snprintf(unidadeDestino, sizeof(unidadeDestino), "g");
            break;
        case 2:
            resultado = valor / 1000;
            snprintf(unidadeOrigem, sizeof(unidadeOrigem), "g");
            snprintf(unidadeDestino, sizeof(unidadeDestino), "Kg");
            break;
        case 3:
            resultado = valor * 0.453592;
            snprintf(unidadeOrigem, sizeof(unidadeOrigem), "lb");
            snprintf(unidadeDestino, sizeof(unidadeDestino), "Kg");
            break;
        case 4:
            resultado = valor / 0.453592;
            snprintf(unidadeOrigem, sizeof(unidadeOrigem), "Kg");
            snprintf(unidadeDestino, sizeof(unidadeDestino), "lb");
            break;
        default:
            printf("Opção inválida.\n");
            return; // Encerra a função se a opção for inválida
    }

    printf("%.2lf %s = %.2lf %s\n", valor, unidadeOrigem, resultado, unidadeDestino);
}
