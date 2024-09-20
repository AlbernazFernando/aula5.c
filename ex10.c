#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int TAMANHO_VETOR = 20;
    int numeros[TAMANHO_VETOR];
    int numero, i, j;
    int novoVetor[TAMANHO_VETOR];
    int existe = 0;

    
    srand(time(NULL));

    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        int novoNumero;
        int repetido;

        do {
            repetido = 0;
            novoNumero = rand() % 100; 

            
            for (j = 0; j < i; j++) {
                if (numeros[j] == novoNumero) {
                    repetido = 1; 
                    break;
                }
            }
        } while (repetido);

        numeros[i] = novoNumero;
    }

 
    printf("Números gerados:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    
    printf("Digite um número para verificar se existe no vetor: ");
    scanf("%d", &numero);

    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] == numero) {
            existe = 1; 
            break;
        }
    }

    if (existe) {
       
        int novoVetorIndex = 0;
        for (i = 0; i < TAMANHO_VETOR; i++) {
            if (numeros[i] != numero) {
                novoVetor[novoVetorIndex++] = numeros[i];
            }
        }

     
        printf("Novo vetor sem o número %d:\n", numero);
        for (i = 0; i < novoVetorIndex; i++) {
            printf("%d ", novoVetor[i]);
        }
        printf("\n");
    } else {
        printf("O número %d não existe no vetor.\n", numero);
    }

    return 0;
}
