#include "arvorebb.h"
#include <string.h>

int main(){
    char entrada[10], x;
    tp_arvore raiz;
    raiz = inicializa_arvore();
    while(scanf("%s", &entrada)!= EOF){
        if (strcmp(entrada, "I"))
        {
            scanf("%c", &x);
            insere_no(&raiz,x);
        }
        if (strcmp(entrada, "INFIXA")==0)em_ordem(raiz);printf("%c", 8);
        if (strcmp(entrada, "PREFIXA")==0)pre_ordem(raiz);printf("%c", 8);
        if (strcmp(entrada, "POSFIXA")==0)pos_ordem(raiz);printf("%c", 8);
        if (strcmp(entrada, "P")==0){
            scanf("%c", &x);
            if(busca_no(raiz, x)==NULL)printf("%c nao existe", x);
            else printf("%cexiste", x);
        }
        printf("\n");
    }
}