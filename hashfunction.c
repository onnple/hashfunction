//
// Created by Once on 2019/8/11.
//

#include "hashfunction.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// 1、直接定址法
int hash_direct_addr(int key){
    return 2*key + 1;
}

// 2、数字分析法
int hash_digit_analyze(const char *key, int len){
    if(key == NULL || len < 0)
        return -1;
    char number[4];
    int j = 3;
    for (int i = len - 1; i > len - 5; --i) {
        number[j] = key[i];
        j--;
    }
    return strtol(number, NULL, 10);
}

// 3、相乘取整法
int hash_multiply(int key){
    float a = 0.618;
    int m = 16;
    float count = a * key;
    return (int)(m * (count - (int)count));
}

// 4、平方取中法
int hash_square(int key){
    int m = 100, b = 3;
    int value = key * key;
    char str[32];
    sprintf(str, "%d", value);
    int index = (strlen(str) - b - 1) / 2;
    char number[b - 1];
    int j = 0;
    for (int i = index; i < index + b - 1; ++i) {
        number[j] = str[i];
        j++;
    }
    return strtol(number, NULL, 10);
}

// 5、折叠法
int hash_fold(int key){
    int m = 100, b = 3;
    char str[32];
    sprintf(str, "%d", key);
    int count = 0, len = strlen(str);
    for (int i = 0; i < len; i += b) {
        int temp = 0;
        for (int j = 0; j < b && i + j < len; ++j) {
            temp = (int)(temp + pow(str[i + j] - 48, b - j));
        }
        count += temp;
    }
    char value[32];
    sprintf(value, "%d", count);
    int l = strlen(value);
    if(l <= b)
        return count;
    int hash = 0;
    for (int k = 0; k < b; ++k) {
        hash = (int)(hash + pow(str[l - 1 - k] - 48, k + 1));
    }
    return hash;
}

// 6、随机数散列法
static unsigned int randseed = 1103515245;
int hash_rand(int key){
    int m = 100;
    unsigned int r;
    r = randseed = key * randseed + 12345;
    return ((r << 16) | ((r >> 16) & 0xFFFF)) % m;
}

// 7、取余散列法
int hash_mod(int key){
    int m = 20;
    return key % m;
}

// 8、平方散列法
int hash_sq(int key){
    return (key * key) >> 28;
}

// 9、斐波那契散列法
int hash_fibo(int key){
    return (key * 2654435769) >> 28;
}



