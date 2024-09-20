#include <stdio.h>

int main() {
    const int NUM_ELEMENTOS = 20;
    int numeros[NUM_ELEMENTOS], i;

    for ( i = 0; i < NUM_ELEMENTOS; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números na ordem inversa:\n");
    for ( i = NUM_ELEMENTOS - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
