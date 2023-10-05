#include "listase.h"





int main(){
    tp_listase *l;
    l = inicializa_lista();
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