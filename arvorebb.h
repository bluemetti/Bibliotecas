#ifndef ARVOREBB_H
#define ARVOREBB_H
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
int insere_no(tp_arvore *raiz, tp_item e){
    tp_no *pai = NULL, *novo, *p=*raiz;
    novo=aloca_no();                            //endereco do novo elemento da arvore
    if(!novo)return 0;                          //se nao conseguir alocar, retorna 0
    novo->info = e;
    novo->esq = NULL;
    novo->dir = NULL;
    while (p!=NULL){                    //caminha na direcao da posicao q sera inserido o novo no
        pai=p;
        if (e < p->info){
            p=p->esq;
        }else p = p->dir;
    }
    if (pai!=NULL){
        if (e < pai->info)pai->esq=novo;
        else pai->dir=novo;
    }else *raiz=novo;

    return 1;
}
void pre_ordem(tp_no *p){
    if(p!=NULL){
        printf("\n%d", p->info);
        pre_ordem(p->esq);
        pre_ordem(p->dir);
    }
}
void em_ordem(tp_no *p){
    if(p!=NULL){
        em_ordem(p->esq);
        printf("\n%d", p->info);
        em_ordem(p->dir);
    }
}
void pos_ordem(tp_no *p){
    if(p!=NULL){
        em_ordem(p->esq);
        em_ordem(p->dir);
        printf("\n%d", p->info);
    }
}
int niveis_arvore(tp_arvore raiz){
    if (raiz==NULL)return 0;
    int alt_esq = niveis_arvore(raiz->esq);
    int alt_dir = niveis_arvore(raiz->esq);
    if(alt_esq > alt_dir)return alt_esq+1;
    return alt_dir+1;
}
int numero_nos(tp_arvore raiz){
    if (raiz==NULL)return 0;
    int nos_esq = numero_nos(raiz->esq);
    int nos_dir = numero_nos(raiz->esq);
    return (nos_esq+nos_dir+1);
}



#endif