#include <stdio.h>

int op;
double value;
void fromCelsius(), fromFahr(), fromKelvin();

void unidadeTemperatura() {
    system("chcp 65001>nul");

    printf("Selecione a unidade de temperatura:\n");
    printf("1 - Celsius\n2 - Fahrenheit\n3 - Kelvin\n");
    scanf("%d", &op);

    switch(op) {
        case 1:
            fromCelsius();
            break;
        case 2:
            fromFahr();
            break;
        case 3:
            fromKelvin();
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}

void fromCelsius() {
    printf("Insira o valor em Celsius: ");
    scanf("%lf", &value);

    printf("Celsius: %.2lf °C\n", value);
    printf("Fahrenheit: %.2lf °F\n", (value * 9/5) + 32);
    printf("Kelvin: %.2lf K\n", value + 273.15);
}

void fromFahr() {
    printf("Insira o valor em Fahrenheit: ");
    scanf("%lf", &value);

    printf("Celsius: %.2lf °C\n", (value - 32) * 5/9);
    printf("Fahrenheit: %.2lf °F\n", value);
    printf("Kelvin: %.2lf K\n", (value - 32) * 5/9 + 273.15);
}

void fromKelvin() {
    printf("Insira o valor em Kelvin: ");
    scanf("%lf", &value);

    printf("Celsius: %.2lf °C\n", value - 273.15);
    printf("Fahrenheit: %.2lf °F\n", (value - 273.15) * 9/5 + 32);
    printf("Kelvin: %.2lf K\n", value);
}
