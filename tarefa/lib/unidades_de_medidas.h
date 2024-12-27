#ifndef CONVERTER_TEMPO_H
#define CONVERTER_TEMPO_H

void UnidadeTempo();
void Segundos(float num);
void Minutos(float num);
void Horas(float num);

#endif // CONVERTER_TEMPO_H

///////////////////////////////////////////////////
#ifndef CONVERTER_TEMPERATURA_H
#define CONVERTER_TEMPERATURA_H

void unidadeTemperatura();
void fromCelsius();
void fromFahr();
void fromKelvin();

#endif 

////////////////////////////////////////////////////
#ifndef CONVERTER_METRO_EM_CENTIMETRO_QUADRADO_H
#define CONVERTER_METRO_EM_CENTIMETRO_QUADRADO_H

float converter_m_quadrado_cm_quadrado(float val);

#endif

////////////////////////////////////////////////////
#ifndef CONVERTER_VOLUME_H
#define CONVERTER_VOLUME_H

void UnidadeVolume();
float converte_litros_m3(float litros);
float converte_mililitros_litros(float mililitros);
float converte_galoes_litros(float galoes);

#endif

///////////////////////////////////////////////////
#ifndef MEDIDA_COMPRIMENTO
#define MEDIDA_COMPRIMENTO

void UnidadeComprimento();
void metros(float num);
void centimetros(float num);
void milimetros(float num);

#endif

///////////////////////////////////////////////////
#ifndef UNIDADE_VELOCIDADE_H
#define UNIDADE_VELOCIDADE_H

void converterVelocidade();

#endif

///////////////////////////////////////////////////
#ifndef MASSA_H
#define MASSA_H

void ConverterMassa();

#endif

//////////////////////////////////////////////////
#ifndef CONVERTERPOTENCIA_H
#define CONVERTERPOTENCIA_H



// função para conversão de unidades de potência: Watts, quilowatts e cavalos-vapor
void converterPotencia();

#endif 

//////////////////////////////////////////////////
#ifndef CONVERTERBITS_H
#define CONVERTERBITS_H



// Função para conversão de unidades de bits, bytes, kilobytes, megabytes, gigabytes e terabytes
// A função interage com o usuário para coletar os dados de entrada e exibir o resultado diretamente
void converterBits();

#endif // CONVERTERBITS_H

///////////////////////////////////////////////////