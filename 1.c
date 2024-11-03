#include <stdio.h>

int toldir(int size1,int size2, int arr[size1][size2]){
    for (size_t i = 0; i < size1; i++) {
        for (size_t l = 0; l < size2; l++) {
            scanf("%d", &arr[i][l]);
        }
    }
}

int chiqar(int q, int u, int arr[q][u]){
    for (int i = 0; i < q; i++) {
        for (int l = 0; l < u; l++) {
            printf("%3d ", arr[i][l]);
        }
        puts("");
    }
}

int manfiy(int q, int u, int arr[q][u]){
    int yigindi = 0,manfiy = 0;
    for (int i = 0; i <= q && !manfiy; i++) {
        for (int l = 0; l <= u; l++) {
            if (arr[i][l] < 0) {
                manfiy = 1;
                break;
            }
            yigindi += arr[i][l];
        }
    } 
    printf("\n sonlarning yig'indisi: %d\n", yigindi);
}

int main () {
    int q, w;
    printf("q va w ni kiritng:  ");
    scanf("%d%d", &q, &w);

    int array[q][w];
    toldir(q,w, array);
    chiqar(q,w, array);
    manfiy(q,w,array);


    return 0;
}
