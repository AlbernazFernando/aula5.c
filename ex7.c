#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS_NO_ANO 365

int main() {
    float temperaturas[DIAS_NO_ANO];
    float soma = 0.0;
    float menor = 1000.0;  
    float maior = -1000.0; 
    int dias_inferiores_media = 0;

    srand(time(NULL));

    for (int i = 0; i < DIAS_NO_ANO; i++) {
        temperaturas[i] = (rand() % 3001) / 100.0; 
        soma += temperaturas[i];

        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }

        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }

    float media_anual = soma / DIAS_NO_ANO;

    for (int i = 0; i < DIAS_NO_ANO; i++) {
        if (temperaturas[i] < media_anual) {
            dias_inferiores_media++;
        }
    }

    printf("Menor temperatura do ano: %.2f\n", menor);
    printf("Maior temperatura do ano: %.2f\n", maior);
    printf("Temperatura média anual: %.2f\n", media_anual);
    printf("Número de dias com temperatura abaixo da média anual: %d\n", dias_inferiores_media);

    return 0;
}
