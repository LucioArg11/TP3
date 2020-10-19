#include "Pila.h"
void crear_pila(tPila *p)
{
    *p=NULL;
}

int pila_vacia(tPila *p)
{
    return *p==NULL;
}


int pila_llena(tPila *p, unsigned tam)
{
    tNodo *nuevo=(tNodo *)malloc(sizeof(tNodo));
    void *info=malloc(tam);

    free(nuevo);
    free(info);
    return (nuevo==NULL || info==NULL);
}

int poner_en_pila(tPila *p, const void* dato, unsigned tam)
{
    tNodo   *nuevo=malloc(sizeof(tNodo));
    nuevo->info=malloc(sizeof(tam));

    if(!nuevo)
        {
            free(nuevo);
            return 0;
        }

    memcpy(nuevo->info,dato,MIN(tam,sizeof(dato)));
    nuevo->tam=tam;
    nuevo->sig=*p;
    *p=nuevo;
    return 1;
}

int sacar_de_pila(tPila *p,void *dato,unsigned tam)
{
    tNodo *aux=*p;
    if(aux==NULL)
        return 0;
    memcpy(dato,aux->info,MIN(tam,aux->tam));
    *p=aux->sig;
    free(aux->info);
    free(aux);
    return 1;
}

int ver_tope(tPila *p,void *dato, unsigned tam)
{
    if(*p==NULL)
        return 0;
    memcpy(dato,(*p)->info,MIN((*p)->tam,tam));
    return 1;
}

void vaciar_pila(tPila *p)
{
    while(*p!=NULL)
    {
        tNodo *aux=*p;
        *p=aux->sig;
        free(aux->info);
        free(aux);
    }
}
