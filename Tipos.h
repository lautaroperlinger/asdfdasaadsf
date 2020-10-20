#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED



#endif // TIPOS_H_INCLUDED
typedef struct
{
    int idTipo;
    char descripcion[20];
}eTipo;

int hardcoreo_Tipo(eTipo tipos[],int len_tipos,char Tipos_data[]);
void mostrar_Tipo(eTipo tipos[],int len_tipos,int i);
void mostrar_TipoS(eTipo tipos[],int len_tipos);
