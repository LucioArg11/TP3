#include"Pila_estatica.h"
void crear_pila(tPila *p)
{
    p->tope=TAMPILA;
}

int pila_vacia(tPila *p)
{
    return p->tope==TAMPILA;
}
int pila_llena(tPila *p, unsigned tam)
{
    return p->tope<tam+sizeof(unsigned);

}
int poner_en_pila(tPila *p, const void* dato, unsigned tam)
{
    if(p->tope<tam+sizeof(unsigned))
        return 0;
    p->tope-=tam;
    memcpy(p->Pila+p->tope,dato,tam);
    p->tope-=sizeof(unsigned);
    memcpy(p->Pila+p->tope,&tam,sizeof(unsigned));
    return 1;
}
int sacar_de_pila(tPila *p,void *dato,unsigned tam)
{

    if(p->tope==TAMPILA)
        return 0;



}

int ver_tope(tPila *p,void *dato, unsigned tam)
{

}

void vaciar_pila(tPila *p)
{

}

