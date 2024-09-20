#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50

int main() {
    int VET[TAMANHO];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        VET[i] = rand() % 100; 
    }

    printf("Números gerados:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", VET[i]);
    }
    printf("\n");

    printf("Números repetidos e suas posições:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = i + 1; j < TAMANHO; j++) {
            if (VET[i] == VET[j]) {
                printf("Número %d encontrado nas posições %d e %d\n", VET[i], i, j);
            }
        }
    }

    return 0;
}
