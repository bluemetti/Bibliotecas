#ifndef LISTASE_H
#define LISTASE_H
#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no{
    tp_item info;
    struct tp_no *prox;
}tp_listase;

tp_listase * inicializa_lista(){
    return NULL;
}
int listase_vazia (tp_listase *lista){
    if (lista==NULL) return 1;
    return 0;
}
tp_listase * aloca_listase(){
    tp_listase *novo_no;
    novo_no = (tp_listase*) malloc(sizeof(tp_listase));
    return novo_no;
}
int insere_listase_no_fim(tp_listase **l, tp_item e){
    tp_listase *novo_no, *atu;
    novo_no = aloca_listase();
    if (novo_no==NULL)return 0;
    novo_no->info = e;
    novo_no->prox = NULL;
    if (listase_vazia(*l)) *l = novo_no;
    else{
        atu = *l; // atu eh atual
        while (atu->prox!=NULL){
            atu = atu->prox;
        }
        atu->prox = novo_no;
    }
    return 1;
}
void imprime_listase(tp_listase * lista){
    tp_listase *atu;
    atu = lista;
    while(atu!=NULL){
        printf("%d\n", atu->info);
        atu = atu->prox;
    }
}
int remove_listase(tp_listase **lista, tp_item e){
    tp_listase *ant, *atu;
    atu = *lista;
    ant = NULL;
    while((atu!=NULL)&&(atu->info!=e)){
        ant = atu;
        atu = atu->prox;
    }
    if (atu == NULL) return 0;
    if (ant == NULL) {
        *lista = atu->prox;
    }
    else{
        ant->prox = atu->prox;
    }
    free(atu);
    atu=NULL;
    return 1;
}
tp_listase *busca_listase(tp_listase *lista, tp_item e){
    tp_listase *atu;
    atu = lista;
    while ((atu!=NULL)&&(atu->info!=e)){
        atu = atu->prox;
    }
    return atu;
}
int tamanho_listase(tp_listase *lista){
    int cont = 0;
    tp_listase *atu;
    atu = lista;
    while(atu!=NULL){
        cont ++;
        atu = atu->prox;
    }
    return cont;
}
void destroi_listase(tp_listase **l){
    tp_listase *atu;
    atu = *l;
    while (atu!=NULL){
        *l = atu->prox;
        free(atu);
        atu = *l;
    }
    *l = NULL;
}

int maior_q_n(tp_listase **l,int n){
    tp_listase *atu;
    int cont;
    cont = 0;
    atu = *l;
    while(atu!=NULL){
        if (atu->info>n){
            cont++;
        }
        atu = atu->prox;
    }
    return cont;
}

int listase_iguais(tp_listase **l, tp_listase **l1){
    tp_listase *atu, *atu1;
    atu = *l;
    atu1 = *l1;
    if(tamanho_listase(*l)!=(tamanho_listase(*l1))) return 0;
    while(atu!=NULL){
        if(atu->info!=atu1->info) return 0;
        atu = atu->prox;
        atu1 = atu1->prox;
    }
    return 1;
}

void destroi_impar(tp_listase **l){
    tp_listase *atu, *ant;
    atu = *l;
    while ((atu->info % 2) != 0) {
        *l = atu->prox;
        free(atu);
        atu = *l;
    }
    while(atu!=NULL){
        ant = atu;
        atu = atu->prox;
        if(atu->info % 2 != 0){
            ant->prox = atu->prox;
            free(atu);
            atu = ant->prox;
        }
    }
}

int conecta_listase(tp_listase **l, tp_listase **l1){
    if (listase_vazia(*l)||listase_vazia(*l1)) return 0;
    tp_listase *atu, *atu1;
    atu = *l;
    atu1 = *l1;
    while(atu->prox != NULL){
        atu = atu->prox;
    }
    while(atu1->prox != NULL){
        atu1 = atu1->prox;
    }
    atu->prox = *l1;
    atu1->prox = *l;
    return 1;
}







#endif
