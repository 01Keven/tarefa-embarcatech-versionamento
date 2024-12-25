//Programa para converter as unidades de tempo: Segundos, minutos e horas
/*
Pergunta ao usuario qual a unidade de tempo que deseja converter;
Pede ao usuario o valor da unidade de tempo;
Imprime todas as conversões na tela


*/

#include <stdio.h>


void Segundos(float num);
void Minutos(float num);
void Horas(float num);

int opcao;
float num;

void UnidadeTempo(){
    system("chcp 65001>nul");

    printf("Qual unidade de tempo que você deseja converter?\n 1.Segundos\n 2.Minutos\n 3.Horas\n");
    scanf("%d", &opcao);
    printf("Digite o valor: ");
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

}

void Segundos(float num) {
    printf("%.2f segundos equivalem a:\n", num);
    printf("- %.2f minutos\n", num / 60);
    printf("- %.2f horas\n", num / 3600);
}

void Minutos(float num) {
    printf("%.2f minutos equivalem a:\n", num);
    printf("- %.2f segundos\n", num * 60);
    printf("- %.2f horas\n", num / 60);
}

void Horas(float num) {
    printf("%.2f horas equivalem a:\n", num);
    printf("- %.2f minutos\n", num * 60);
    printf("- %.2f segundos\n", num * 3600);
}
