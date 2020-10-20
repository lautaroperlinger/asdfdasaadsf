#include "Validaciones.h"
int validacion_Tipo(eTipo Tipos[],eBicicleta Bicis,int len_tipos)
{

    int valido=0;
    for(int i=0;i<len_tipos;i++)
    {
        if(Tipos[i].idTipo==Bicis.TipoBici)
        {
           valido=1;
           break;
        }
    }
    return valido;
}
int validacion_Color(eColor Colores[],eBicicleta Bicis,int len_color)
{
    int valido=0;
    for(int i=0;i<len_color;i++)
    {
        if(Colores[i].idColor==Bicis.ColorBici)
        {
           valido=1;
           break;
        }
    }
    return valido;

}
int Validacion_Rodados(eBicicleta Bicis)
{
    int valido=0;
    if(Bicis.rodados=='20' ||Bicis.rodados== '26' ||Bicis.rodados== '27,5' || Bicis.rodados=='29')
    {
        valido=1;

    }
}
