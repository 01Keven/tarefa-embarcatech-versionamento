//Autor: Wilton Lacerda Silva Júnior.
long double converterBits(double numero, short int unidade, short int saida) // saida em long double, tres entradas. Funcao por Wilton
{
    // entrada: primeiro o numero para ser convertido, segundo a unidade de conversao (tipos na proxima linha), terceiro tipo de saida desejada
    //  tipos: 1 - bits, 2 - bytes, 3 - kilobytes, 4 - megabytes, 5 - gigabytes, 6 - terabytes
    long double result = 0; // variavel para resultado
    double NumParaBits = 0; // variavel para calculo
    long double NumEmBits = 0; // variavel para calculo
    switch (unidade) // switch para saber qual a unidade de entrada
    {
    case 1:
        NumParaBits = 1;
        break;
    case 2:
        NumParaBits = 8;
        break;
    case 3:
        NumParaBits = 8192; //8 * 1024
        break;
    case 4:
        NumParaBits = 8388608; //8 * 1024 * 1024
        break;
    case 5:
        NumParaBits = 8589934592; //8 * 1024 * 1024 * 1024
        break;
    case 6:
        NumParaBits = 8796093022208; //8 * 1024 * 1024 *1024 * 1024
        break;
    default:
        printf("Tipo de variável inválida. Por favor, selecione um tipo possível\n"); // valor entrado errado
        return -1;
        break;
    }
    NumEmBits = numero * NumParaBits; // calculo para saber quantas vezes tem que multiplicar a entrada pra transformar em bits
    switch (saida) // switch para calculo da conversao para saida
    {
    case 1:
        result = NumEmBits;
        break;
    case 2:
        result = NumEmBits / 8;
        break;
    case 3:
        result = NumEmBits / 8192; //8 * 1024
        break;
    case 4:
        result = NumEmBits / 8388608; //8 * 1024 * 1024
        break;
    case 5:
        result = NumEmBits / 8589934592; //8 * 1024 * 1024 * 1024
        break;
    case 6:
        result = NumEmBits / 8796093022208; //8 * 1024 * 1024 *1024 * 1024
        break;
    default:
        printf("Tipo de variável inválida. Por favor, selecione um tipo possível\n"); // valor entrado errado
        return -1;
        break;
    }
    return result; // retorna o resultado
}