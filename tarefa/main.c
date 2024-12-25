#include <stdio.h>
#include "lib/tempo.h"
#include "lib/comprimento.h"
#include "lib/temperatura.h"
#include "lib/converter_m_quadrado_cm_quadrado.h"


float converter_m_quadrado_cm_quadrado(float);

int main() {

    unidadeComprimento();
    unidadeTemperatura();
    UnidadeTempo();

    printf("\nResultado: %.2f centimetro quadrado.\n\n", converter_m_quadrado_cm_quadrado(1.15));  //chamada da funcao que converte de metro quadrado para centimetro quadrado.

    return 0;
}