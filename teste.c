#include <stdio.h>
#include "listase.h"

int main(){
    tp_listase *l;
    l = inicializa_lista();
    if (insere_listase_no_fim){
        printf("deu familia");
    }else{
        printf("deu bosta familia");
    }
    insere_listase_no_fim(&l,10);
    insere_listase_no_fim(&l,20);
    insere_listase_no_fim(&l,30);
    printf("\nprimeiro: %d segundo: %d terceiro: %d", l->info, l->prox->info, l->prox->prox->info);
}