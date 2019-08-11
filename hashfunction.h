//
// Created by Once on 2019/8/11.
//

#ifndef DATALGORITHM_HASHFUNCTION_H
#define DATALGORITHM_HASHFUNCTION_H

// 散列函数构造法
// 1、直接定址法
extern int hash_direct_addr(int key);

// 2、数字分析法
extern int hash_digit_analyze(const char *key, int len);

// 3、相乘取整法
extern int hash_multiply(int key);

// 4、平方取中法
extern int hash_square(int key);

// 5、折叠法
extern int hash_fold(int key);

// 6、随机数散列法
extern int hash_rand(int key);

// 7、取余散列法
extern int hash_mod(int key);

// 8、平方散列法
extern int hash_sq(int key);

// 9、斐波那契散列法
extern int hash_fibo(int key);

#endif //DATALGORITHM_HASHFUNCTION_H
