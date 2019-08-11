#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hashfunction.h"


static void hash_fuction(void){
    for (int i = 0; i < 10; ++i) {
        printf("%d ", hash_direct_addr(i));
    }
    printf("\n");

    char *phone[4] = {"18925468742", "18424574569", "13012541567", "13725485414"};
    for (int j = 0; j < 4; ++j) {
        printf("%d ", hash_digit_analyze(phone[j], 11));
    }
    printf("\n");

    for (int k = 0; k < 20; ++k) {
        printf("%d ", hash_multiply(k + 1));
    }
    printf("\n");

    int keys[4] = {23648, 1458, 3654, 984};
    for (int l = 0; l < 4; ++l) {
        printf("%d ", hash_square(keys[l]));
    }
    printf("\n");

    int k[4] = {236898998, 145011448, 64241654, 364746984};
    for (int l = 0; l < 4; ++l) {
        printf("%d ", hash_fold(k[l]));
    }
    printf("\n");

    int v[4] = {2368, 1451448, 1654, 36};
    for (int l = 0; l < 4; ++l) {
        printf("%d ", hash_rand(v[l]));
    }
    printf("\n");

    for (int m = 0; m < 20; ++m) {
        printf("%d ", hash_mod(m * m));
    }
    printf("\n");

    int p[4] = {23689, 1456, 41654, 23647};
    for (int m = 0; m < 4; ++m) {
        printf("%d ", hash_sq(p[m]));
    }
    printf("\n");

    for (int m = 0; m < 4; ++m) {
        printf("%d ", hash_fibo(p[m]));
    }
    printf("\n");
}


int main() {
    hash_fuction();
    return 0;
}

