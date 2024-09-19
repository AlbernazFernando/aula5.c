#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int V1[15], V2[15];
    int i, count = 0;

    
    srand(time(NULL));

   
    printf("Vetor V1: ");
    for (i = 0; i < 15; i++) {
        V1[i] = rand() % 100; 
        printf("%d ", V1[i]);
    }
    printf("\n");

    
    printf("Vetor V2: ");
    for (i = 0; i < 15; i++) {
        V2[i] = rand() % 100; 
        printf("%d ", V2[i]);
    }
    printf("\n");

    
    for (i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            count++;
        }
    }

    printf("Quantidade de posições iguais: %d\n", count);

    return 0;
}
