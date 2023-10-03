#include "listase.h"

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

int main(){
    tp_listase *l, *l1;
    l = inicializa_lista();
    l1 = inicializa_lista();
    insere_listase_no_fim(&l, 5);
    insere_listase_no_fim(&l, 10);
    insere_listase_no_fim(&l, 15);
    insere_listase_no_fim(&l, 12);
    insere_listase_no_fim(&l, 13);
    insere_listase_no_fim(&l, 10);
    insere_listase_no_fim(&l, 11);
    destroi_impar(&l);
    imprime_listase(l);
}