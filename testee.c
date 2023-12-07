#include "arvorebb.h"

void imprime_invertido(tp_no *p, int cont, int cont1){
    if(p!=NULL){
        if (altura_arvore(p->dir) < altura_arvore(p->esq)){
        imprime_invertido(p->esq, cont+1);
        imprime_invertido(p->dir, cont+1);            
        printf("Nivel %d: %c\n", cont, p->info);
        }
        if (altura_arvore(p->dir)>=altura_arvore(p->esq)){           
        imprime_invertido(p->dir, cont+1);
        imprime_invertido(p->esq, cont+1);            
        printf("Nivel %d: %c\n", cont, p->info);
        }
    }
}
/*
void imprime_invertido(tp_no *p, int cont){

}
*/

int main(){
    tp_arvore raiz;
    raiz = inicializa_arvore();
    insere_no(&raiz, 'H');
    insere_no(&raiz, 'M');
    insere_no(&raiz, 'R');
    insere_no(&raiz, 'O');
    insere_no(&raiz, 'D');
    insere_no(&raiz, 'C');
    insere_no(&raiz, 'F');
    insere_no(&raiz, 'B');
    imprime_invertido(raiz, 0, 0);
}