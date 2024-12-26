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
#ifndef CONVERTER_COMPRIMENTO
#define CONVERTER_COMPRIMENTO

void UnidadeComprimento();
float converte_cm_m(float cm);
float converte_mm_m(float mm);

#endif 

/* macros para conversão de potência*/

#define WCV(n)   n/735.5
#define WkW(n)   n/1000
#define CVW(n)   n*735.5
#define CVkW(n)  n*735.5/1000
#define kWW(n)   n*1000
#define kWCV(n)  n*1000/735.5