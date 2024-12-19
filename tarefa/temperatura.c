#include <stdio.h>

int op;
double value;
double fromCelsius(), fromFahr(), fromKelvin();

int main() {
    system("chcp 65001>nul");

    printf("Selecione a unidade inicial:\n");
    printf("1 - Celsius\n2 - Fahrenheit\n3 - Kelvin\n");
    scanf("%d", &op);

    if (op == 1)
        fromCelsius();
    else if (op == 2)
        fromFahr();
    else if (op == 3)
        fromKelvin();
    else
        printf("Opção inválida!");
}

double fromCelsius() {
    printf("Insira o valor em Celsius: ");
    scanf("%lf", &value);

    printf("Celsius: %.2lf °C\n", value);
    printf("Fahrenheit: %.2lf °F\n", (value * 9/5) + 32);
    printf("Kelvin: %.2lf K\n", value + 273.15);
}

double fromFahr() {
    printf("Insira o valor em Fahrenheit: ");
    scanf("%lf", &value);

    printf("Celsius: %.2lf °C\n", (value - 32) * 5/9);
    printf("Fahrenheit: %.2lf °F\n", value);
    printf("Kelvin: %.2lf K\n", (value - 32) * 5/9 + 273.15);
}

double fromKelvin() {
    printf("Insira o valor em Kelvin: ");
    scanf("%lf", &value);

    printf("Celsius: %.2lf °C\n", value - 273.15);
    printf("Fahrenheit: %.2lf °F\n", (value - 273.15) * 9/5 + 32);
    printf("Kelvin: %.2lf K\n", value);
}

// Feito por MarlonSS