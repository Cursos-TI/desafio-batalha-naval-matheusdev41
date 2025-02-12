#include <stdio.h>

int main() {
    // Coordenadas Fixas Navios  
    int x1 = 1;
    int x2 = 2;

    char tabuleiro[5][5] = {
       {1, 2, 3, 4, 5},
       {6, 7, 8, 9, 10},
       {11, 12, 13, 14, 15},
       {16, 17, 18, 19, 20},
       {21, 22, 23, 24, 25} 
    };
    
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