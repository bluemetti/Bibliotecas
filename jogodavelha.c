

#include <stdio.h>
#include <stdlib.h>
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
    int i, i1;
    char aux;
    for (i = 0; i < 3; i++)
    {
        for (i1 = 0; i1 < 3; i1++)
        {
            m[i][i1] = ' ';
        }
    }
        printf("         0 1 2\n");
        printf("       0 %c|%c|%c \n", m[0][0], m[0][1], m[0][2]);
        printf("         ------\n");
        printf("       1 %c|%c|%c \n", m[1][0], m[1][1], m[1][2]);
        printf("         ------\n");
        printf("       2 %c|%c|%c \n", m[2][0], m[2][1], m[2][2]);
    for (i = 0; i < 10; i++)
    {
        printf("jogador %s, digite uma coordenada\n", nome);
        scanf("%d", &i);
        scanf("%d", &i1);
        m[i][i1] = 'X';
        system("cls");
        printf("         0 1 2\n");
        printf("       0 %c|%c|%c \n", m[0][0], m[0][1], m[0][2]);
        printf("         ------\n");
        printf("       1 %c|%c|%c \n", m[1][0], m[1][1], m[1][2]);
        printf("         ------\n");
        printf("       2 %c|%c|%c \n", m[2][0], m[2][1], m[2][2]);
        printf("jogador %s, digite uma coordenada\n", nome1);
        scanf("%d", &i);
        scanf("%d", &i1);
        m[i][i1] = 'O';
        system("cls");
        printf("         0 1 2\n");
        printf("       0 %c|%c|%c \n", m[0][0], m[0][1], m[0][2]);
        printf("         ------\n");
        printf("       1 %c|%c|%c \n", m[1][0], m[1][1], m[1][2]);
        printf("         ------\n");
        printf("       2 %c|%c|%c \n", m[2][0], m[2][1], m[2][2]);
    }
}