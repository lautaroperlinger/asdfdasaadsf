#ifndef BICICLETAS_H_INCLUDED
#define BICICLETAS_H_INCLUDED
#include "Tipos.h"
#include "Color.h"
#define FALSE 0
#define TRUE 1

#endif // BICICLETAS_H_INCLUDED
typedef struct
{
    int idBici;
    char marca[20];
    int TipoBici;
    int ColorBici;
    float rodados;
    int isEmpty;

}eBicicleta;

int alta_bicicleta(eBicicleta Bicis[],eTipo tipos[],eColor colores[],int len,int id);
int Lugar_Libre(eBicicleta Bicis[],int len_bicis);
void iniciar_Bicis(eBicicleta Bicis[],int len_bicis);
int menu();
