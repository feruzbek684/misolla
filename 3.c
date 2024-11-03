#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int n, int array[n][n]) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[n][n]); 
        }
    }
}

void print(int n, int array[n][n]) {
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

    random(n, array);
    print(n, array);
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", array[j][i]); 
        }
        puts("");
    }

    return 0;
}