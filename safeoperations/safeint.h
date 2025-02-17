//
// Created by viti on 12/9/2024.
//

#ifndef TUES_2024_5_SAFEINT_H
#define TUES_2024_5_SAFEINT_H
struct safeResult{
    int value;
    int error_flag;

};

struct safeResult safeAdd(int a, int b);
struct safeResult safeMultiply(int a, int b);
struct safeResult safeDivide(int a, int b);
struct safeResult safeSubtract(int a, int b);
struct safeResult safestrtoint(char a[]);
#endif //TUES_2024_5_SAFEINT_H
