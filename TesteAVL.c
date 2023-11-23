#include <stdio.h>
#include <locale.h>
#include "ArvoreAVL.h"


int main(){
	/*Demonstra��o das fun��es feitas em sala*/
	setlocale(LC_ALL,""); // Define localiza��o para acentua��o correta...
	int num, vazia, altura, totNOs, valCons, valRem;
	ArvAVL* raiz = criarAVL();
	vazia = estah_vaziaABB(raiz);
	if(vazia) printf("�RVORE AVL VAZIA!\n");
	printf("Digite um valor para inserir na �rvore AVL (ou -1 para parar):");
	scanf("%d", &num);
	while(num != -1){
		inserir(raiz, num);
		altura = alturaAVL(raiz);
		printf("\nAltura: %d", altura);
		printf("\nDigite outro valor para inserir na �rvore (ou -1 para parar):");
		scanf("%d", &num);
	}	
	vazia = estah_vaziaABB(raiz);
	if(vazia==0) printf("�RVORE AVL NAO VAZIA!");
	totNOs = totalNOsABB(raiz);
	printf("\nTotal de N�s: %d", totNOs);
	
/*	printf("\n");
    printf("%d...%d\n",sizeof(int *), sizeof(struct NO*));
    printf("...%x...%x...%d...%x",raiz,*raiz,(*raiz)->info,&(*raiz)->esq);
	printf("\n");
*/		
	printf("\nDigite um valor para remover da �rvore (ou -1 para parar):");
	scanf("%d", &valRem);
	
	while(valRem != -1){
		if(remover(raiz, valRem)){
			printf("\n%d removido da �rvore!", valRem);
		}		
		printf("\nDigite outro valor para remover da �rvore (ou -1 para parar):");
		scanf("%d", &valRem);
	}

	totNOs = totalNOsABB(raiz);
	printf("\nTotal de N�s: %d", totNOs);
	printf("\n==========================\nPercorrendo a �rvore:\n");
	printf("PRE ORDEM (pre fixa):\n");
	contPrint = 0;
	preOrd(raiz);
	printf("\nEM ORDEM (in fixa):\n");
	contPrint = 0;
	emOrd(raiz);
	printf("\nPOS ORDEM (pos fixa):\n");
	contPrint = 0;
	posOrd(raiz);
	return 0;
}

