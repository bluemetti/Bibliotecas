#include <stdio.h>
#include "listase.h"
int insere_ordenado(tp_listase **l, tp_item e){
    tp_listase *novo_no, *atu;
    novo_no = aloca_listase();
    if (novo_no==NULL)return 0;
    novo_no->info = e;
    tp_listase *ant;
    atu = *l;
    ant = NULL;
    while((atu->info<=e)&&(atu->prox!=NULL)){
        ant = atu;
        atu = atu->prox;
    }
    if((atu!=NULL)&&(ant ==NULL)){
        novo_no->prox = *l;
        *l = novo_no;
    }
    if ((atu==NULL)&&(ant!=NULL)){
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
    ant->prox = novo_no;
    novo_no->prox = atu;
}
int main(){
    tp_listase *l;
    l = inicializa_lista();

    insere_listase_no_fim(&l,10);
    insere_listase_no_fim(&l,20);   
    insere_listase_no_fim(&l,30);
    printf("tamanho: %d\n", tamanho_listase(l));
    insere_ordenado(&l, 15);
    insere_ordenado(&l, 1);
    imprime_listase(l);
    printf("tamanho: %d\n", tamanho_listase(l));
    destroi_listase(&l);
    printf("tamanho: %d\n", tamanho_listase(l));
}