#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Array(int n, int array[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = rand() % 50 -20; 
        }
    }
}

void s(int n, int array[n][n], int A[], int* sizeA, int B[], int* sizeB) {
    *sizeA = 0; 
    *sizeB = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] < 0) {
                A[(*sizeA)++] = array[i][j];
            } else if (array[i][j] > 0) {
                B[(*sizeB)++] = array[i][j];
            }
        }
    }
}

void printArray(int arr[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", "); 
    }
    printf("}\n");
}

int main() {
    srand(time(0)); 

    int n;
    printf("N: ");
    scanf("%d", &n); 

    int array[n][n]; 
    Array(n, array); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", array[i][j]);
        }
        puts("");
    }

    int A[n * n];
    int B[n * n]; 
    int sizeA, sizeB; 

    s(n, array, A, &sizeA, B, &sizeB); 
    printf("A");
    printArray(A, sizeA);
    printf("B");
    printArray(B, sizeB);

    return 0;
}