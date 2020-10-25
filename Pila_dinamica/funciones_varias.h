#ifndef FUNCIONES_VARIAS_H_INCLUDED
#define FUNCIONES_VARIAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int ordena_vector_pilas(void *v,unsigned cant_ele,
                        int (*comparar)(const void*,const void*));
int comparar(const void*,const void*);

#endif // FUNCIONES_VARIAS_H_INCLUDED
