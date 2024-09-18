#include <stdio.h>
int main() {
    int max, pos, i;
    int Q[20];
     for (i = 1; i < 21; i++) {
        printf("Digite um número positivo para a posição %d: ", i);
        scanf("%d", &Q[i]);

         while (Q[i] <= 0) {
            printf("Número inválido! Digite um número positivo para a posição %d: ", i);
            scanf("%d", &Q[i]);
        }
     }

     max = Q[0];
     pos = 0;

     for (i = 1; i < 20; i++) {
        if (Q[i] > max) {
            max = Q[i];
            pos = i;
        }
    }

     printf("O maior elemento é %d e ocupa a posição %d no vetor.\n", max, pos);
        return 0;
}
