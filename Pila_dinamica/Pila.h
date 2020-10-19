#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MIN(x,y) (x>y?y:x)

typedef struct  sNodo
{
    void*        info;
    unsigned     tam;
    struct sNodo *sig;
}tNodo;
typedef tNodo *tPila;

void crear_pila(tPila *p);
int pila_vacia(tPila *p);
int pila_llena(tPila *p, unsigned tam);
int poner_en_pila(tPila *p, const void* dato, unsigned tam);
int sacar_de_pila(tPila *p,void *dato,unsigned tam);
int ver_tope(tPila *p,void *dato, unsigned tam);
void vaciar_pila(tPila *p);


#endif // PILA_H_INCLUDED
