#include <stdio.h>

// Funções de conversão
float converte_litros_m3(float litros);
float converte_mililitros_litros(float mililitros);
float converte_galoes_litros(float galoes);

void UnidadeVolume() {
    printf("\n1000 litros equivalem a %.6f metros cúbicos.", converte_litros_m3(1000));
    printf("\n500 mililitros equivalem a %.6f litros.", converte_mililitros_litros(500));
    printf("\n10 galões equivalem a %.6f litros.", converte_galoes_litros(10));

}

float converte_litros_m3(float litros) {
    // 1 litro = 0.001 metros cúbicos
    printf("%.2f", litros * 0.001);
}

float converte_mililitros_litros(float mililitros) {
    // 1 mililitro = 0.001 litros
    printf("%.2f", mililitros * 0.001);
}

float converte_galoes_litros(float galoes) {
    // 1 galão (EUA) = 3.78541 litros
    printf("%.2f", galoes * 3.78541);

//1000 litros equivalem a 1.000000 metros cúbicos.
//500 mililitros equivalem a 0.500000 litros.
//10 galões equivalem a 37.854100 litros.
}