#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 3

float calcular_determinante(float matriz[TAMANHO][TAMANHO]) {
    return matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
           matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
           matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
}

int main() {
    float matriz[TAMANHO][TAMANHO];
  
    srand(time(NULL));

    printf("Matriz 3x3 gerada:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = rand() % 11; 
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    float determinante = calcular_determinante(matriz);
    
    printf("Determinante da matriz: %.2f\n", determinante);

    return 0;
}
