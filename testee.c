#include "arvorebb.h"

int main(){
    tp_arvore arvre;
    arvre = inicializa_arvore();
    insere_no(&arvre, 6);
    insere_no(&arvre, 3);
    insere_no(&arvre, 9);
    insere_no(&arvre, 1);
    insere_no(&arvre, 10);
    insere_no(&arvre, 22);
    insere_no(&arvre, 33);
    insere_no(&arvre, 10);
    insere_no(&arvre, 75);
    insere_no(&arvre, 6);
    insere_no(&arvre, 3);
    insere_no(&arvre, 9);
    insere_no(&arvre, 1);
    insere_no(&arvre, 10);
    insere_no(&arvre, 22);
    insere_no(&arvre, 33);
    insere_no(&arvre, 10);
    insere_no(&arvre, 75);
    insere_no(&arvre, 3);
    insere_no(&arvre, 9);
    insere_no(&arvre, 1);
    insere_no(&arvre, 10);
    insere_no(&arvre, 22);
    insere_no(&arvre, 33);
    insere_no(&arvre, 10);
    insere_no(&arvre, 75);
    pos_ordem(arvre);
    printf("\n\naltura: %d", numero_nos(arvre));
}