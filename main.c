#include <stdio.h>
#include <stdlib.h>
#include "DataStore.h"
#include "bicicletas.h"
#define TAMB 5


int main()
{
    eTipo TiposBicis[4];
    eColor ColoresBicis[5];
    eBicicleta Bicis[TAMB];
    int seguir=1;
    int opcion;
    int idBicis=100;
    int auxid;
    int flag;


    iniciar_Bicis(Bicis,TAMB);
    hardcoreo_Tipo(TiposBicis,4,Tipos_data);
    hardcoreo_Color(ColoresBicis,5,Colores_data);
    do
    {
        opcion=menu();
        switch(opcion)
        {
        case 1:
            alta_bicicleta(Bicis,TiposBicis,ColoresBicis,TAMB,idBicis);
            /*if(!=FALSE)
            {
                printf("error en el alta!\n");
            }
            else
            {
                printf("alta existosa!!\n");
                flag=1;
            }*/
            break;
        case 2:
            /*if(flag==1)
            {
            }*/
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
           break;
        case 10:
            break;
        default:
            break;
        }
    }while(seguir==1);

    return 0;
}
