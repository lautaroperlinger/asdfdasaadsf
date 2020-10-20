#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED



#endif // COLOR_H_INCLUDED
typedef struct
{
    int idColor;
    char nombreColor[20];
}eColor;
int hardcoreo_Color(eColor colores[],int len_color,char Colores_data[]);
void mostrar_Colores(eColor Colores[],int len_colores);
void mostrar_Color(eColor Colores[],int len_colores,int i);
