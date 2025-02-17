#include <stdio.h>
#define SWAP(A,B,TYPE) \
TYPE c; \
c=A; \
A=B; \
B=c;

int main(){

    int a,b;
    scanf("%d%d", &a,&b);
    SWAP (a,b,int)
    printf("%d %d", a,b);

    return 0;

}