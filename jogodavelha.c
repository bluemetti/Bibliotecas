

#include <stdio.h>
#include <stdlib.h>


char ganhoud(char m[][3]){
	if ((m[0][0] ==m[1][1])&&(m[1][1]==m[2][2])&&(m[0][0]!= ' ')){
		return m[0][0];
	}
	if ((m[0][2] == m[1][1])&&(m[1][1] == m[2][0])&&(m[0][2]!= ' ')){
		return m[0][2];
	}
	return ' ';
}




char ganhoul(char m[][3]){
	int i;
	for(i = 0; i<3; i++){
		if ((m[i][0]==m[i][1])&&(m[i][0]==m[i][2])&&(m[i][1]!=' ')){
			return m[i][0];
		}
	}
	return ' ';
}
char ganhouc(char m[][3]){
	int i;
	for(i = 0; i<3; i++){
		if ((m[0][i]==m[1][i])&&(m[0][i]==m[2][i])&&(m[1][i]!=' ')){
			return m[0][i];
		}
	}
	return ' ';
}
int coordenada_valida(char m[][3],int i, int j){
	if (i>2) return 0;
	if (j>2) return 0;
	if (m[i][j] == ' ') return 1;
	return 0;
	
}

void imprime_matriz(char m[3][3]){
		printf("         0 1 2\n");
        printf("       0 %c|%c|%c \n", m[0][0], m[0][1], m[0][2]);
        printf("         ------\n");
        printf("       1 %c|%c|%c \n", m[1][0], m[1][1], m[1][2]);
        printf("         ------\n");
        printf("       2 %c|%c|%c \n", m[2][0], m[2][1], m[2][2]);
}
void inicializa_matriz(char m[][3]){
	int i, i1;
	for (i = 0; i < 3; i++)
    {
        for (i1 = 0; i1 < 3; i1++)
        {
            m[i][i1] = ' ';
        }
    }
}

int main()
{
    system("color 1F");
    char nome[20], nome1[20];
    printf("\n#################################################\n");
    printf("BEM VINDOS, DIGITEM OS NOMES DOS JOGADORES");
    printf("\n#################################################\n");
    scanf("%s", nome);
    scanf("%s", nome1);
    system("cls");
    printf("\n#################################################\n");
    printf("jogador %s e jogador %s, BEM VINDOS E BOA SORTE!!!!", nome, nome1);
    printf("\n#################################################\n");
    printf("QUE COMECEM OS JOGOS");
    printf("\n#################################################\n");
    char m[3][3];
    int i, i1, j;
    char aux;
    inicializa_matriz(m);
    imprime_matriz(m);
    for (j = 0; j < 10; j++)
    {	
        printf("jogador %s, digite uma coordenada\n", nome);
        scanf("%d", &i);
        scanf("%d", &i1);
        while(!coordenada_valida(m,i, i1)){
        	printf("coordenada invalida jogue novamente\n");
        	scanf("%d", &i);
        	scanf("%d", &i1);
		}
        m[i][i1] = 'X';
        system("cls");
        imprime_matriz(m);
        if((ganhoul(m)=='X')||(ganhouc(m)=='X')||(ganhoud(m)=='X')){
        	printf("\nPARABENS %s, VOCE VENCEU!!!\n", nome);
        	return 0;
		}
		if(j == 4){
			printf("\nJOGO EMPATADO, PARABENS AOS BRAVOS GUERREIROS\n\n###############################################\n\nAGRADECEMOS POR JOGAREM NOSSO JOGO\n");
			return 0;
		}
        printf("jogador %s, digite uma coordenada\n", nome1);
        scanf("%d", &i);
        scanf("%d", &i1);
        while(!coordenada_valida(m, i, i1)){
        	printf("coordenada invalida jogue novamente\n");
        	scanf("%d", &i);
        	scanf("%d", &i1);
		}
        m[i][i1] = 'O';
        system("cls");
        imprime_matriz(m);
        if((ganhoul(m)=='O')||(ganhouc(m)=='O')||(ganhoud(m)=='O')){
        	printf("\nPARABENS %s, VOCE VENCEU!!!\n", nome1);
        	return 0;
		}
    }
}
