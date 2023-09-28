#include <stdio.h>
#include "listase.h"

int main(){
    tp_listase *l;
    l = inicializa_lista();
    if (insere_listase_no_fim){
        printf("deu familia\n");
    }else{
        printf("deu bosta familia\n");
    }
    insere_listase_no_fim(&l,10);
    insere_listase_no_fim(&l,20);   
    insere_listase_no_fim(&l,30);
    imprime_listase(l);
}