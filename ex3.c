#include <stdio.h>
int main() {
    int min, pos, i;
    int Q[20];
     for (i = 1; i < 21; i++) {
        printf("Digite um número positivo para a posição %d: ", i);
        scanf("%d", &Q[i]);

         while (Q[i] <= 0) {
            printf("Número inválido! Digite um número positivo para a posição %d: ", i);
            scanf("%d", &Q[i]);
        }
     }

     min = Q[0];
     pos = 0;

     for (i = 1; i < 20; i++) {
        if (Q[i] < min) {
            min = Q[i];
            pos = i;
        }
    }

     printf("O menor elemento é %d e ocupa a posição %d no vetor.\n", min, pos);
        return 0;
}
