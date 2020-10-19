#include "Pila.h"
#include "funciones_varias.h"
int main()
{

    int v[]={1,-5,-3,5,3,6,1,-10,8,12,44,3,0,12,4,5,87,-45,-2,-60,-30};
    ordena_vector_pilas(&v,21,comparar);

    return 0;
}
