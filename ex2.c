#include <stdio.h>
#define L 3
#define C 3
float media(int arr[L][C], int l, int c) {
    int soma = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            soma += arr[i][j];
        }
    }
    return (float)soma / (l * c);
}
