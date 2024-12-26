#include <stdio.h>
#include <comprimento.h>

float valor;
int op;

void UnidadeComprimento(){

    system("chcp 65001>nul");

    printf("Qual unidade de medida deseja converter? \n1 - Metro. \n2 - Centímetros. \n3 - Milímetros \n");
    scanf("%d", &op);
    printf("Digite a quantidade: ");
    scanf("%f", &valor);

    switch(op){
        case 1: 
        {
            metros(valor);
            break;
        }
        case 2:
        {
            centimetros(valor);
            break;
        }
        case 3: 
        {
            milimetros(valor);
            break;
        }
        default:
        {
            printf("Opção Invalida!");
        }
    }

}

void metros(float num){
    printf("Em centímetros: %.2f", num*100);
    printf("Em milímetros: %.2f", num*1000);
}

void centimetros(float num){
    printf("Em metros: %.2f", num/100);
    printf("Em milímetros: %.2f", num*10);
}

void milimetros(float num){
    printf("Em metros: %.2f", num/1000);
    printf("Em centímetrosmetros: %.2f", num/10);
}