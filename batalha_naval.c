#include <stdio.h>

// Variáveis constantes
#define LINHAS 10
#define COLUNAS 10
#define TAMANHO_NAVIO 3

// Função principal
int main()
{
        // Matriz que simula um tabuleiro para o jogo batalha naval
        int tabuleiro[LINHAS][COLUNAS] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0}
        };

        // Variáveis que simulam os navios do jogo
        int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
        int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};
        int navio1_diagonal[TAMANHO_NAVIO] = {3, 3, 3};
        int navio2_diagonal[TAMANHO_NAVIO] = {3, 3, 3};

        // Posicionando o navio no tabuleiro usando indices literais
        tabuleiro[0][0] = navio_horizontal[0];
        tabuleiro[0][1] = navio_horizontal[1];
        tabuleiro[0][2] = navio_horizontal[2];
        tabuleiro[5][9] = navio_vertical[0];
        tabuleiro[6][9] = navio_vertical[1];
        tabuleiro[7][9] = navio_vertical[2];
        tabuleiro[2][2] = navio1_diagonal[0];
        tabuleiro[3][3] = navio1_diagonal[1];
        tabuleiro[4][4] = navio1_diagonal[2];
        tabuleiro[7][7] = navio2_diagonal[0];
        tabuleiro[8][8] = navio2_diagonal[1];
        tabuleiro[9][9] = navio2_diagonal[2];
 
        // Loop para percorrer os valores do tabuleiro
        for (size_t i = 0; i < LINHAS; i++)
        {
            for (size_t j = 0; j < COLUNAS; j++)
            {
                printf("%d  ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        
    return 0;
}
