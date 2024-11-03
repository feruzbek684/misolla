#include <stdio.h>
int toldir(int q,int u, int arr[q][u]){
    for (int i = 0; i < q; i++) {
        for (int l = 0; l < u; l++) {
            scanf("%d", &arr[i][l]);
        }
    }
}

int chiqar(int q, int w, int arr[q][w]){
    for (int i = 0; i < q; i++) {
        for (int l = 0; l < w; l++) {
            printf("%3d ", arr[i][l]);
        }
        printf("\n");
    }
}

int manfiy_topish(int q,int w, int array[q][w]){
    int birnchi_manfiy = -1, oxirgi_manfiy = -1;
    for (int i = 0; i < q; i++) {
        for (int l = 0; l < w; l++) {
            if (array[i][l] < 0) {
                birnchi_manfiy = i;
                oxirgi_manfiy = l;
            }
        }
    }
    int yigindi = 0;
    if (birnchi_manfiy != -1) {
        for (int i = birnchi_manfiy; i < q; i++) {
            for (int l = 0; l < w; l++) {
                if (i == birnchi_manfiy && l <= oxirgi_manfiy) {
                    continue;
                }
                yigindi += array[i][l];
            }
        }
        printf("\n sonlarning yig'indisi: %d\n", yigindi);
    } else {
        printf("\nMassivda manfiy son topilmadi.\n");
    }
}
int main() {
    int q, w;
    printf("q va w ni kiritng: ");
    scanf("%d%d", &q, &w);

    int array[q][w];
    toldir(q,w,array);
    chiqar(q,w,array);
    manfiy_topish(q,w,array);
    return 0;
}
