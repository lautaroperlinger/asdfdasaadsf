#include "Tipos.h"
#include "string.h"
#include "stdio.h"
int hardcoreo_Tipo(eTipo tipos[],int len_tipos,char Tipos_data[])
{
    int iddtipo=1000;
    int retorno = -1;
    if(tipos != NULL && len_tipos > 0)
    {
        retorno=0;
        for(int i =0; i< len_tipos; i++)
        {
            tipos[i].idTipo=iddtipo;
            strcpy(tipos[i].descripcion,Tipos_data[i]);
            iddtipo++;
        }
    }
    return retorno;
}
void mostrar_TipoS(eTipo tipos[],int len_tipos)
{
    printf("---------TIPOS DE BICIS---------\n\n");
    for(int i=0;i<len_tipos;i++)
    {
        mostrar_Tipo(tipos,len_tipos,i);
    }
}
void mostrar_Tipo(eTipo tipos[],int len_tipos,int i)
{
    printf("%d        %s\n",tipos[i].idTipo,tipos[i].descripcion);
}
