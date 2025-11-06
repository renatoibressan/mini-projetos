#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, c, linha, coluna, player, won, plays, option;
    char tabuleiro[3][3];
    do {
        player = 1;
        won = 0;
        plays = 0;
        for (l = 0; l < 3; l++) {
            for (c = 0; c < 3; c++) {
                tabuleiro[l][c] = ' ';
            }
        }
        do {
            printf("\n\n\t 0   1   2 \n\n");
            for (l = 0; l < 3; l++) {
                for (c = 0; c < 3; c++) {
                    if (c == 0) printf("\t");
                    printf(" %c ", tabuleiro[l][c]);
                    if (c < 2) printf("|");
                    if (c == 2) printf("  %d", l);
                }
                if (l < 2) printf("\n\t-----------");
                printf("\n");
            }
            do {
                printf("Jogador %d, insira a linha e a coluna que deseja posicionar: ", player);
                scanf("%d%d", &linha, &coluna);
            } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ');
            if (player == 1) {
                tabuleiro[linha][coluna] = 'o';
                player++;
            } else {
                tabuleiro[linha][coluna] = 'x';
                player = 1;
            }
            plays++;
            if ((tabuleiro[0][0] == 'o' && tabuleiro[0][1] == 'o' && tabuleiro[0][2] == 'o') || 
            (tabuleiro[1][0] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[1][2] == 'o') || 
            (tabuleiro[2][0] == 'o' && tabuleiro[2][1] == 'o' && tabuleiro[2][2] == 'o')) {
                printf("\nO jogador 1 venceu por linha!\n");
                won = 1;
            } else if ((tabuleiro[0][0] == 'x' && tabuleiro[0][1] == 'x' && tabuleiro[0][2] == 'x') || 
            (tabuleiro[1][0] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[1][2] == 'x') || 
            (tabuleiro[2][0] == 'x' && tabuleiro[2][1] == 'x' && tabuleiro[2][2] == 'x')) {
                printf("\nO jogador 2 venceu por linha!\n");
                won = 1;
            }
            if ((tabuleiro[0][0] == 'o' && tabuleiro[1][0] == 'o' && tabuleiro[2][0] == 'o') || 
            (tabuleiro[0][1] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[2][1] == 'o') || 
            (tabuleiro[0][2] == 'o' && tabuleiro[1][2] == 'o' && tabuleiro[2][2] == 'o')) {
                printf("\nO jogador 1 venceu por coluna!\n");
                won = 1;
            } else if ((tabuleiro[0][0] == 'x' && tabuleiro[1][0] == 'x' && tabuleiro[2][0] == 'x') || 
            (tabuleiro[0][1] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[2][1] == 'x') || 
            (tabuleiro[0][2] == 'x' && tabuleiro[1][2] == 'x' && tabuleiro[2][2] == 'x')) {
                printf("\nO jogador 2 venceu por coluna!\n");
                won = 1;
            }
            if (tabuleiro[0][0] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[2][2] == 'o') {
                printf("\nO jogador 1 venceu por diagonal!\n");
                won = 1;
            }
            else if (tabuleiro[0][0] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[2][2] == 'x') {
                printf("\nO jogador 2 venceu por diagonal!\n");
                won = 1;
            }
            if (tabuleiro[2][0] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[0][2] == 'o') {
                printf("\nO jogador 1 venceu por diagonal!\n");
                won = 1;
            }
            else if (tabuleiro[2][0] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[0][2] == 'x') {
                printf("\nO jogador 2 venceu por diagonal!\n");
                won = 1;
            }
        } while (won == 0 && plays < 9);
        if (won == 0) printf("\nVelha!\n");
        printf("\nDeseja continuar? (Digite '1' para jogar novamente)\n");
        scanf("%d", &option);
    } while (option == 1);
    printf("\nObrigado por jogar!\n");
    return 0;
}
