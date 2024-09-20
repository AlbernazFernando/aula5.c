#include <stdio.h>

int main() {
    int A[10], M[10];
    int X;


    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    
    printf("Digite um número para multiplicar: ");
    scanf("%d", &X);

    
    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }


    printf("Resultado do vetor M:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;
}
