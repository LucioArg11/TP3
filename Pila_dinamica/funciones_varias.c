#include "funciones_varias.h"
#include "Pila.h"
int ordena_vector_pilas(void *v,unsigned cant_ele,
                        int (*comparar)(const void*,const void*))
{
    tPila p1,p2;
    void *tope1,
         *tope2,
         *aux=v,
         *fin=aux+(sizeof(v)*cant_ele);

    crear_pila(&p1);
    crear_pila(&p2);

    while(aux<fin)
    {
        while((!pila_vacia(&p1)) &&
              ((ver_tope(&p1,&tope1,sizeof(v)))!=0||
              comparar(&tope1,aux)>0))
        {
            sacar_de_pila(&p1,&tope1,sizeof(v));
            poner_en_pila(&p2,&tope1,sizeof(v));
        }

        while((!pila_vacia(&p2)) &&
              ((ver_tope(&p2,&tope2,sizeof(v))||
                comparar(&tope2,aux)<0)))
        {
            if(comparar(&tope2,aux)<0)
                break;
            sacar_de_pila(&p2,&tope2,sizeof(v));
            poner_en_pila(&p1,&tope2,sizeof(v));
        }
        poner_en_pila(&p1,aux,sizeof(v));
        aux+=sizeof(v);
    }

    while(!pila_vacia(&p1))
    {
        ver_tope(&p1,&tope1,sizeof(v));
        sacar_de_pila(&p1,&tope1,sizeof(v));
        poner_en_pila(&p2,&tope1,sizeof(v));
    }

    while(!pila_vacia(&p2))
    {
          ver_tope(&p2,&tope2,sizeof(v));
          memcpy(v,&tope2,sizeof(v));
          v+=sizeof(v);
          sacar_de_pila(&p2,&tope2,sizeof(v));
    }
    return 1;

}

int comparar(const void* n1,const void* n2)
{
    return *(int *)n1-*(int *)n2;
}
