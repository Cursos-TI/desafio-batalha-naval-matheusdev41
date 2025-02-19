#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    
    int tabuleiro[LINHAS][COLUNAS];

    // Inicializa o tabuleiro 10x10 com 0
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

     // Coordenadas dos navios 
     // Primeiro elemento do array é a coordenada da linha da matriz
     // Segundo elemento do array é a coordenada da coluna da matriz
    int navio1[2] = {4, 1};
    int navio2[2] = {3, 5};
    int navio3[2] = {0, 0};
    int navio4[2] = {0, 5};

    // Posicionando navio1 - horizontal
    for (int j = 0; j < 3; j++){ // Posiciona as 3 partes do navio
    int x = navio1[0];
    int y = navio1[1] + j;

        if (y < COLUNAS && tabuleiro[x][y] != 3){ // Condição para garantir que não haja sobreposição e que não passe do limite do tabuleiro
            tabuleiro[x][y] = 3; // Valor 3 atribuido ao indice x, y definidos no array navio1
        }
    }

    // Posicionando navio2 - vertical
    for (int j = 0; j < 3; j++){
        int x = navio2[0] + j;
        int y = navio2[1];

        if (x < LINHAS && tabuleiro[x][y] != 3){ // Condição para garantir que não haja sobreposição e que não passe do limite do tabuleiro
            tabuleiro[x][y] = 3; // Valor 3 atribuido ao indice x, y definidos no array navio2
        }
    }

    // Posicionando navio3 - diagonal
    for (int j = 0; j < 3; j++){
        int x = navio3[0] + j;
        int y = navio3[1] + j;

        if ((x < LINHAS && y < COLUNAS) && (tabuleiro[x][y] != 3)){
            tabuleiro[x][y] = 3;
        }
    }

    // Posicionando navio4 - diagonal
    for (int j = 0; j < 3; j++){
        int x = navio4[0] + j;
        int y = navio4[1] + j;

        if((x < LINHAS && y < COLUNAS) && (tabuleiro[x][y] != 3)){
            tabuleiro[x][y] = 3;
        }
    }
    
    // Impressão do tabuleiro final
    for( int i = 0; i < 10; i++){
        for( int j = 0; j < 10; j++){
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    } 

    return 0;
}