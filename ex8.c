#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;

    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int numbers[10];
    int i;

   
    srand(time(NULL));

    
    printf("Números gerados:\n");
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100; 
        printf("%d ", numbers[i]);
    }
    printf("\n");

  
    selectionSort(numbers, 10);

    
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
