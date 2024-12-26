#include <stdio.h>
#include "lib/unidades_de_medidas.h"
#include "lib/massa.h"
#include "lib/unidade_velocidade.h"

// #include "lib/converter_bits.h"

int main() {
    system("chcp 65001>nul");
    int op;

    do
    {  
        printf("\nEscolha uma das seguintes opções:\n 1.Unidade de Comprimento\n 2.Unidades de Massa\n 3.Unidade de Volume\n 4.Unidade de Temperatura\n 5.Unidade de Velocidade\n 6.Watts, quilowatts, cavalos-vapo\n 7. Unidades de área\n 8. Unidades de tempo\n 9. Bits, bytes, kilobytes, megabytes, gigabytes, terabytes\n 0. Sair\n Opção: ");
        scanf("%d", &op);
        switch (op)
        {
            case 1:
                UnidadeComprimento();
                break;
            case 2:
                ConverterMassa();
                break;
            case 3:
                UnidadeVolume();
                break;
            case 4:
                unidadeTemperatura();
                break;
            case 5:
                converterVelocidade();
                break;
            case 6:
                // 6. Watts, quilowatts, cavalos-vapor - RICARDO GONÇALVES DO NASCIMENTO
                break;
            case 7:
            {
                float valor_metros;
                printf("Qual o valor em Metros?: ");
                scanf("%f", &valor_metros);
                float resultado = converter_m_quadrado_cm_quadrado(valor_metros);
                printf("Resultado: %f", resultado);
                break;
            }
                break;
            case 8:
                UnidadeTempo();
                break;
            case 9:
                converterBits();
                break;
            default:
                if (op < 1 || op > 10)
                {
                    printf("\nOpção Inválida!\n");
                }
                
                break;
        }
    } while (op != 10);
    
        
        return 0;
    }
