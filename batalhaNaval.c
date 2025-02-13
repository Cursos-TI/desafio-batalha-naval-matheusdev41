#include <stdio.h>

int main() {
    // Declaração de tabuleiro 5x5
    int tabuleiro[5][5];
    int contador = 1;

    // Inicializa o tabuleiro numerado de 1 a 25
    for( int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            tabuleiro[i][j] = contador++;
        }
    }

     // Coordenadas dos navios 
    int x1 = 1; // Linha inicial navio 1
    int x2 = 2; // Linha inicial navio 2 

    printf("------------------ NAVIL 1 ------------------\n");
    for(int i = 1, j = 1; i < 4; i++, j++){
        printf("Parte %d do navio 1 posicionado na casa %d \n",
        i, tabuleiro[x1][j]);
    }

    printf("------------------ NAVIL  ------------------\n");
    for(int i = 1, j = 3; i < 4; i++){
        printf("Parte %d do navio 2 posicionado na casa %d \n",
        i, tabuleiro[x2][j]);
        x2++;
    }
    
    return 0;
}