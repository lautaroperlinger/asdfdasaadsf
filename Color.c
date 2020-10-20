#include "Color.h"
#include "stdio.h"
#include "string.h"
#define FALSE 0
#define TRUE 1
int hardcoreo_Color(eColor colores[],int len_color,char Colores_data[])
{
    int iddcolor=5000;
    int retorno = -1;
    if(colores != NULL && len_color > 0)
    {
        retorno=FALSE;
        for(int i =0; i< len_color; i++)
        {
            colores[i].idColor=iddcolor;
            strcpy(colores[i].nombreColor,Colores_data[i]);
            iddcolor++;
        }
    }
    return retorno;
}
void mostrar_Colores(eColor colores[],int len_colores)
{
    printf("---------COLOR DE BICICLETAS---------\n\n");
    for(int i=0;i<len_colores;i++)
    {
        mostrar_Color(colores,len_colores,i);
    }

}
void mostrar_Color(eColor colores[],int len_colores, int i)
{
    printf("%d        %s \n",colores[i].idColor,colores[i].nombreColor);
}
