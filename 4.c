#include <stdio.h>

void inputArray(int n, int array[n][n]) {
    printf("kiriting\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]); 
        }
    }
}

void printArray(int n, int array[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", array[i][j]);
        }
        puts("");
    }
}

int main() {
    int n;
    printf("N: ");
    scanf("%d", &n); 
    int array[n][n];
    inputArray(n, array);
    printArray(n, array);
    
    puts("");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", array[j][i]); 
        }
        puts("");
    }

    return 0;
}