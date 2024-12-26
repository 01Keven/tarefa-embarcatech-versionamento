#include <stdio.h>
#include <locale.h>

void converterVelocidade() {
    double valor, convertido;
    int escolha;

    printf("Bem-vindo ao conversor de unidades de velocidade!\n");
    printf("Escolha uma das conversões a seguir:\n");
    printf("1 - km/h para m/s\n");
    printf("2 - m/s para km/h\n");
    printf("3 - km/h para mph\n");
    printf("4 - mph para km/h\n");
    printf("5 - m/s para mph\n");
    printf("6 - mph para m/s\n");

    printf("Digite o número da conversão desejada: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1:
            convertido = valor / 3.6;
            printf("%.2f km/h equivale a %.2f m/s\n", valor, convertido);
            break;
        case 2:
            convertido = valor * 3.6;
            printf("%.2f m/s equivale a %.2f km/h\n", valor, convertido);
            break;
        case 3:
            convertido = valor * 0.621371;
            printf("%.2f km/h equivale a %.2f mph\n", valor, convertido);
            break;
        case 4:
            convertido = valor / 0.621371;
            printf("%.2f mph equivale a %.2f km/h\n", valor, convertido);
            break;
        case 5:
            convertido = valor * 2.23694;
            printf("%.2f m/s equivale a %.2f mph\n", valor, convertido);
            break;
        case 6:
            convertido = valor / 2.23694;
            printf("%.2f mph equivale a %.2f m/s\n", valor, convertido);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}
