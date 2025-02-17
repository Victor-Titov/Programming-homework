#include <stdio.h>

#define CMP(A,B) (A<B) ? B : A
int main(){
   int a, b;
   scanf("%d%d",&a,&b);
   printf("%d",CMP(a,b));
}