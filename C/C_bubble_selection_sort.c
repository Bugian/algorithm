#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            swap(&arr[min], &arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 5, 6, -3, 112, 999, 86, 0};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    int n; // Numărul de elemente pentru v
    printf("Introduceți numărul de elemente pentru v: ");
    scanf("%d", &n);

    int* v = (int*)malloc(n * sizeof(int));
    printf("Introduceți elementele pentru v:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Array original arr:\n");
    printArray(arr, length);
    bubbleSort(arr, length);
    printf("Array arr după Bubble Sort:\n");
    printArray(arr, length);

    selectionSort(arr, length);
    printf("Array arr după Selection Sort:\n");
    printArray(arr, length);
    
    printf("Array original v:\n");
    printArray(v, n);
    bubbleSort(v, n);
    printf("Array v după Bubble Sort:\n");
    printArray(v, n);

    selectionSort(v, n);
    printf("Array v după Selection Sort:\n");
    printArray(v, n);

    free(v); // Eliberăm memoria alocată pentru v

    return 0;
}
