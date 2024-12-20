/*Programa para converter as unidades de tempo: Segundos, minutos e horas*/

#include <stdio.h>

void Segundos(float num);
void Minutos(float num);
void Horas(float num);

int opcao;
float num;

int main(){
    system("chcp 65001>nul");

    printf("Qual unidade de tempo que você deseja converter?\n 1.Segundos\n 2.Minutos\n 3.Horas\n");
    scanf("%d", &opcao);
    printf("Digite a unidade de medida: ");
    scanf("%f", &num);

    switch(opcao){
        case 1: 
        {
            Segundos(num);
            break;
        }
        case 2:
        {
            Minutos(num);
            break;
        }
        case 3: 
        {
            Horas(num);
            break;
        }
        default:
        {
            printf("Opção Invalida!");
        }
    }

    return 0;
}

void Segundos(float num)
{

   
}

void Minutos(float num)
{
    
    
}

void Horas(float num)
{

    
}

