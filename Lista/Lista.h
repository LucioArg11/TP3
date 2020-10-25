#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(x,y) (x>y?y:x)

typedef struct sNodo
{
    unsigned tam;
    void *dato;
    struct sNodo *siguiente;
}tNodo;
typedef tNodo *tLista;

void crear_lista(tLista *p);
int lista_vacia(const tLista *p);
int lista_llena(const tLista *p,unsigned tam);
void vaciar_lista(tLista *p);
int poner_al_comienzo(tLista *p,void * dato,unsigned tam);
int sacar_del_comienzo(tLista *p,void * dato,unsigned tam);
int ver_primero_lista(const tLista *p ,void * dato ,unsigned tam);
int poner_alfinal_lista(tLista *p,void * dato,unsigned tam);
int sacar_ultimo_lista(tLista *p,void *dato,unsigned tam);
int ver_ultimo_lista(tLista *p,void *dato,unsigned tam);
int ver_pos_lista(tLista *p,void *dato,unsigned tam,int pos);

#endif // LISTA_H_INCLUDED
