#ifndef FILA_H
#define FILA_H
#include <stdlib.h>
#include <stdio.h>

typedef int tp_item;

typedef struct tp_no{
    struct tp_no *esq;
    tp_item info;
    struct tp_no *dir;
}tp_no;

typedef tp_no *tp_arvore;

tp_arvore inicializa_arvore(){
    return NULL;
}
int arvore_vazia(tp_arvore raiz){
    if (raiz==NULL)return 1;
    return 0;
}
tp_no *aloca_no(){
    tp_no *no;
    no = (tp_no*)malloc(sizeof(tp_no));
    return no;
}



#endif