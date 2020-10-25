#include "Lista.h"

void crear_lista(tLista *p)
{
    *p=NULL;
}

int lista_vacia(const tLista *p)
{
    return *p==NULL;
}

int lista_llena(const tLista *p,unsigned tam)
{
    tNodo *aux=(tNodo*)malloc(sizeof(tNodo));
    void *info=malloc(tam);

    free(aux);
    free(info);

    return aux==NULL || info==NULL;
}

void vaciar_lista(tLista *p)
{
    while(*p)
    {
        tNodo *aux = *p;
        *p=aux->siguiente;
        free(aux->dato);
        free(aux);
    }
}

int poner_al_comienzo(tLista *p,void * dato,unsigned tam)
{
    tNodo *nuevo;

    if(((nuevo=(tNodo*)malloc(sizeof(tNodo)))==NULL) ||
            ((nuevo->dato=malloc(tam))==NULL))
    {
        free(nuevo);
        return 0;
    }
    memcpy(nuevo->dato,dato,tam);
    nuevo->tam=tam;
    nuevo->siguiente=*p;
    *p=nuevo;

    return 1;
}

int sacar_del_comienzo(tLista *p,void * dato,unsigned tam)
{
    tNodo *elim=*p;
    if(*p==NULL)
        return 0;
    memcpy(dato,elim->dato,MIN(tam,elim->tam));
    *p=elim->siguiente;
    free(elim->dato);
    free(elim);

    return 1;
}
int ver_primero_lista(const tLista *p,void * dato,unsigned tam)
{
    if(*p==NULL)
        return 0;
    memcpy(dato,(*p)->dato,MIN(tam,(*p)->tam));
    return 1;
}

int poner_alfinal_lista(tLista *p,void * dato,unsigned tam)
{
    tNodo *nuevo;

    while(*p)
        p=&((*p)->siguiente);


    if(((nuevo=(tNodo*)malloc(sizeof(tNodo)))==NULL) ||
        (nuevo->dato=malloc(sizeof(tam))))
    {
        free(nuevo);
        return 0;
    }
    memcpy(nuevo->dato,dato,tam);
    nuevo->tam=tam;
    nuevo->siguiente=NULL;
    *p=nuevo;
    return 1;
}

int sacar_ultimo_lista(tLista *p,void *dato,unsigned tam)
{
    if(*p==NULL)
        return 0;
    while((*p)->siguiente)
        p=&((*p)->siguiente);

    memcpy(dato,(*p)->dato,MIN(tam,(*p)->tam));
    free((*p)->dato);
    free(*p);
    *p=NULL;
    return 1;
}

int ver_ultimo_lista(tLista *p,void *dato,unsigned tam)
{
    if(*p==NULL)
        return 0;

    while((*p)->siguiente)
        p=&((*p)->siguiente);

    memcpy(dato,(*p)->dato,MIN(tam,(*p)->tam));
    return 1;
}

int ver_pos_lista(tLista *p,void *dato,unsigned tam,int pos)
{

    if(*p==NULL)
        return 0;

    if(pos<1)
        return 0;

    while(*p && pos>1)
        {
            p=&((*p)->siguiente);
            pos--;
        }
    memcpy(dato,(*p)->dato,MIN(tam,(*p)->tam));
    return 1;
}































