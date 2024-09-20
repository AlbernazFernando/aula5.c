#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int TAMANHO_VETOR = 30;
    int numeros[TAMANHO_VETOR];
    int numero, contagem = 0;

    
    srand(time(NULL));


    for (int i = 0; i < TAMANHO_VETOR; i++) {
        numeros[i] = rand() % 101; 
    }

    
    printf("Números gerados:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

   
    printf("Digite um número para contar quantas vezes aparece no vetor: ");
    scanf("%d", &numero);

    
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] == numero) {
            contagem++;
        }
    }


    printf("O número %d aparece %d vez(es) no vetor.\n", numero, contagem);

    return 0;
}
