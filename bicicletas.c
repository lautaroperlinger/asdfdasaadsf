#include "Validaciones.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
int alta_bicicleta(eBicicleta Bicis[],eTipo tipos[],eColor colores[],int len_bicis,int id)
{
    int error=-1;
    int indice;
    eBicicleta Nuevabici;
    indice=Lugar_Libre(Bicis,len_bicis);
    if(Bicis!=NULL && len_bicis>0)
    {
        printf("----------Alta de bicicletas----------\n\n");
        if(indice!=-1)
        {
        Nuevabici.idBici=id;
        printf("ingrese marca: \n");
        fflush(stdin);
        gets(Nuevabici.marca);
        mostrar_TipoS(tipos,5);
        printf("ingrese el id del Tipo:\n");
        scanf("%d",&Nuevabici.TipoBici);
        while(validacion_Tipo(tipos,Nuevabici,5)!=TRUE)
        {
            printf("el tipo no existe. reingrese otro id: \n");
            scanf("%d",&Nuevabici.TipoBici);
        }
        mostrar_Colores(colores,6);
        printf("ingrese el id del Color:\n");
        scanf("%d",&Nuevabici.ColorBici);
        while(validacion_Color(colores,Nuevabici,6)!=TRUE)
        {
            printf("el color no existe. reingrese otro id: \n");
            scanf("%d",&Nuevabici.ColorBici);
        }
        printf("ingrese el rodado: \n");
        scanf("%2f", &Nuevabici.rodados);
        while(Validacion_Rodados(Nuevabici)!=TRUE)
        {
            printf("Rodados no disponibles!\n. Ingrese uno valido: ");
            scanf("%2f",&Nuevabici.rodados);
        }
        Nuevabici.isEmpty=TRUE;
        Bicis[id]=Nuevabici;
        error=FALSE;
        }
        else
        {
            printf("no hay memoria.\n");
        }

    }
    return error;

}
void iniciar_Bicis(eBicicleta Bicis[],int len_bicis)
{
    for(int i=0; i<len_bicis; i++)
    {
        Bicis[i].isEmpty=0;
    }
}
int Lugar_Libre(eBicicleta Bicis[],int len_bicis)//pone true en la bandera isEmpty
{
    int ver=-1;

    for(int i=0;i<len_bicis;i++)
    {
        if(Bicis[i].isEmpty==0)
        {
            ver=i;
        }
    }
    return ver;
}
int menu()
{
    int opcion;

    printf("------------MENU DE OPCIONES-----------\n\n");
    printf("1.Alta bicicleta.\n");
    printf("2.Modificar bicibleta.\n");
    printf("3.Baja bicicleta.\n");
    printf("4.Listar bicicletas.\n");
    printf("5.Listar tipos.\n");
    printf("6.Listar colores.\n");
    printf("7.Listar servicios.\n");
    printf("8.Alta trabajo.\n");
    printf("9.Listar trabajos.\n");
    printf("10.Salir\n\n");
    printf("ingrese opcion:\n");
    scanf("%d",&opcion);
    return opcion;
}
