#include <stdio.h>
#define L 3
#define C 3
float determinante(int arr[L][C], int n) {
    float det = 0;
    if (n == 2) {
        det = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    } 
    else if (n == 3) {
        det = arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])
            - arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0])
            + arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
    }
    return det;
}
