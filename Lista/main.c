#include "Lista.h"

int main()
{
    int v[]={1,2,3,4,5,6,0};
    int *aux=v;
    int nro;
    int cont=1;
    tLista lista;
    while(*aux!=0)
    {
        poner_al_comienzo(&lista,aux,sizeof(int));
        aux++;
    }
    while(cont<7)
    {
        ver_pos_lista(&lista,&nro,sizeof(int),cont);
        printf("%d \n",nro);
        cont++;
    }

    return 0;
}
