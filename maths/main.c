#include<stdio.h>

#include "maths.h"


int main(){
    long a;
    printf("enter value:\n");
    scanf("%ld", &a);
    printf("The factorial of %ld is %ld", a, factorial(a));
    return 0;
}