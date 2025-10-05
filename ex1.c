#include <stdio.h>
#define L 3
#define C 3
void preenche(int arr[L][C], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
