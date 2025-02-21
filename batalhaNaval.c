#include <stdio.h>

// Constantes para controle da matriz
#define LINHAS 10
#define COLUNAS 10

int main()
{
    // Definição do tabuleiro
    int tabuleiro[LINHAS][COLUNAS];

    // Variáveis de controle das habilidades
    int cone[2] = {0, 2}; // Início cone
    int cruz[2] = {5, 2}; // Início cruz
    int octaedro[2] = {7, 7}; // Início octaedro
    

    // Inicializa a matriz 10x10
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Habilidade Cone
    for (int j = 0; j < 3; j++){
        int x = cone[0] + j; 
        int y = cone[1] - j;
    
        if (x >= LINHAS || y < 0){ // Condição para evitar acesso fora da matriz
            continue; 
        }

        int largura = 1 + (2 * j); // Largura de cada linha do cone
        int inicio = y;
        int fim = y + largura - 1;

        // Evita acesso fora do tabuleiro
        if (inicio < 0){
            inicio = 0;
        }
        if (fim >= COLUNAS) {
            fim = COLUNAS - 1;
        }

        for (int n = inicio; n <= fim; n++){
            tabuleiro[x][n] = 1;
        }
    
    }

    // Habilidade Cruz
    for (int j = 0; j < 5; j++){

        // Posiciona a linha horizontal da cruz
        int xLinha = cruz[0];
        int yLinha = cruz[1] + j;
        
        // Condição para que a linha horizontal passe dos limites do tabuleiro
        if (xLinha > LINHAS){ 
            tabuleiro[xLinha][yLinha] = 0;
        } else if (yLinha > COLUNAS){
            tabuleiro[xLinha][yLinha] = 0;
        }

        tabuleiro[xLinha][yLinha] = 1;

        // Posiciona a linha vertical da cruz
        for (int n = 0; n < 3; n++){
            int xColuna = (cruz[0] - 1) + n;
            int yColuna = cruz[1] + 2;

            // Condição para que a linha vertical passe dos limites do tabuleiro
            if (xColuna > LINHAS || yColuna > COLUNAS){
                tabuleiro[xColuna][yColuna] = 0;
            } 

            tabuleiro[xColuna][yColuna] = 1;
        } 

    }
    // Habilidade Octaedro
    for (int j = 0; j < 3; j++){

        // Posiciona linha horizontal do octaedro
        int xLinha = octaedro[0];
        int yLinha = octaedro[1] + j;

        // Condição para que a linha horizontal passe dos limites do tabuleiro
        if(xLinha > LINHAS || yLinha > COLUNAS){
           tabuleiro[xLinha][yLinha] = 0;
        }

        tabuleiro[xLinha][yLinha] = 1;

        for (int n = 0; n < 3; n++){
            int xColuna = (octaedro[0] - 1) + n;
            int yColuna = octaedro[1] + 1;

            // Condição para que a linha vertical passe dos limites do tabuleiro
            if(xColuna > LINHAS || yColuna > COLUNAS){
                tabuleiro[xColuna][yColuna] = 0;
            } 

            tabuleiro[xColuna][yColuna] = 1;
        }
    }
    
    // Printa o tabuleiro
    for (int i = 0; i < LINHAS; i ++){
        for (int j = 0; j < COLUNAS; j++){
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }
        return 0;
}
