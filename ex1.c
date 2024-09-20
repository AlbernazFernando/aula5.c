#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int NUM_ALUNOS = 20;
    float notas[NUM_ALUNOS];
    float soma = 0.0;
    float media;
    int cont_acima_media = 0, i;

    
    srand(time(NULL));

   
    for ( i = 0; i < NUM_ALUNOS; i++) {
        
        notas[i] = (float)(rand() % 101) / 10.0; 
        soma += notas[i]; 
    }

   
    media = soma / NUM_ALUNOS;

    
    for ( i = 0; i < NUM_ALUNOS; i++) {
        if (notas[i] > media) {
            cont_acima_media++;
        }
    }

    
    printf("Média da turma: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", cont_acima_media);

   
    printf("Notas dos alunos: ");
    for ( i = 0; i < NUM_ALUNOS; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");

    return 0;
}
