#ifndef PILA_ESTATICA_H_INCLUDED
#define PILA_ESTATICA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAMPILA 200

typedef struct{
    unsigned tope;
    char Pila[TAMPILA];
}tPila;

void crear_pila(tPila *p);
int pila_vacia(tPila *p);
int pila_llena(tPila *p, unsigned tam);
int poner_en_pila(tPila *p, const void* dato, unsigned tam);
int sacar_de_pila(tPila *p,void *dato,unsigned tam);
int ver_tope(tPila *p,void *dato, unsigned tam);
void vaciar_pila(tPila *p);


#endif // PILA_ESTATICA_H_INCLUDED
