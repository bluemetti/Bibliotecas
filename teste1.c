#include "listase.h"



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
    insere_listase_no_fim(&l1, 11);
    insere_listase_no_fim(&l1, 11);
    insere_listase_no_fim(&l1, 11);
    conecta_listase(&l, &l1);
    imprime_listase(l);
}