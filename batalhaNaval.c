#include <stdio.h>

#define linhas 10
#define colunas 10

int main() {

    // Coordenadas navios
    // Os dois primeiros navios são na horizontal
    // Já os outros dois navios são na diagonal
    int inicioNavioX[4] = {0, 2, 3, 4}; 
    int inicioNavioY[4] = {2, 2, 1, 5};

    // Declaração do tabuleiro 
    int tabuleiro[linhas][colunas];

    // Inicialização do tabuleiro com 0
    for (int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0;
        }   
    }

    // Posiciona navio1 horizontal
    for (int i = 0; i < 4; i++) { // Percorre todo vetor inicioNavioX

        // Posicionamento do navio 1 no tabuleiro
        if(i == 0){
            for (int j = 0; j < 3; j++){
                // Certifica que o navio não passe dos limites do tabuleiro
                if(inicioNavioY[i] + j < colunas){
                    tabuleiro[inicioNavioX[i]][inicioNavioY[i] + j] = 3;
                }
            }
        }

        // Posicionamento do navio 2 no tabuleiro
        if(i == 1){
            for (int j = 0; j < 3; j++){
                // Certifica que o navio não passe dos limites do tabuleiro
                if(inicioNavioY[i] + j < colunas){
                    tabuleiro[inicioNavioX[i]][inicioNavioY[i] + j] = 3;
                }
            }
        }

        // Posicionamento do navio 3 no tabuleiro
        if(i == 2){
            for (int j = 0; j < 3; j++){
                // Certifica que a coluna não passe dos limites do tabuleiro
                if((inicioNavioY[i] + j < colunas) && (inicioNavioX[i] + j < linhas)){
                    tabuleiro[inicioNavioX[i] + j][inicioNavioY[i] + j] = 3;
                }
            }
        }


        // Posicionamento do navio 4 no tabuleiro
        if(i == 3){
            for(int j = 0; j < 3; j++){
                // Certifica que a coluna não passe dos linites do tabuleiro
                if((inicioNavioY[i] + j < colunas) && (inicioNavioX[i] + j < linhas)){
                    tabuleiro[inicioNavioX[i] + j][inicioNavioY[i] + j] = 3;
                }
            }
        }

    }

    // Impressão do tabuleiro
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d", tabuleiro[i][j]);
        }
    printf("\n");
    }

    return 0;

}
