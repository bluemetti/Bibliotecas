#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#define MAX 100
typedef char
    tp_item;

    typedef struct{
        int topo;
        tp_item item[MAX];
    }tp_pilha;
    void inicializa_pilha(tp_pilha *p){
        p->topo = -1;
    }
    int pilha_vazia(tp_pilha *p){
        if (p->topo == -1) {return 1;
        }
        return 0;
    }
    int pilha_cheia(tp_pilha *p){
        if (p->topo == MAX - 1){
            return 1;
        }
            return 0;
    }
    int push (tp_pilha *p, tp_item e){
        if (pilha_cheia (p)==1){
            return 0;
        }
        p->topo++;
        p->item[p->topo]=e;
        return 1;
    }
    int pop (tp_pilha *p, tp_item *e){
        if (pilha_vazia(p)){
            return 0;
        }
        *e = p->item[p->topo];
        p->topo--;
        return 1;
    }
    int top (tp_pilha *p, tp_item *e){
        if (pilha_vazia(p)){
            return 0;
        }
        *e = p->item[p->topo];
        return 1;
    }
    int altura_pilha (tp_pilha *p){
        return p->topo+1;
    }
    void imprime_pilha (tp_pilha p){
        tp_item e;
        printf ("\n");
        while (!pilha_vazia(&p)){
            pop (&p, &e);
            printf("%c ", e);
        }
    }
    void retira_impar(tp_pilha *p){
    tp_pilha a;
    tp_item e;
    inicializa_pilha(&a);
    while (!pilha_vazia(p)){
        pop (p, &e);
        if (e%2 ==0){
            push(&a,e);
        }
    }
 
    while (!pilha_vazia(&a)){
        pop (&a, &e);
        push(p,e);
        
    }
}
    int compara_pilha (tp_pilha p, tp_pilha p1){
        if (altura_pilha(&p)!= altura_pilha(&p1)){
            return 0;
        }
        tp_item e, e1;
        while (!pilha_vazia(&p)){
            pop(&p,&e);
            pop (&p1, &e1);
            if (e!=e1){
                return 0;
            }
        }
        return 1;
    }
    int empilha_pilha(tp_pilha *p, tp_pilha *p1){
        if (altura_pilha(p)+altura_pilha(p1)>100 ){
            return 0;
        }
        tp_pilha a;
        inicializa_pilha(&a);
        tp_item e;
        while (!pilha_vazia(p1)){
            pop(p1, &e);
            push(&a, e);
        }
        while (!pilha_vazia(&a)){
            pop(&a, &e);
            push(p, e);
        }
        return 1;
    }
    

#endif


