#include<stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(){
   /* //&,|,~,^,<<,>>
    unsigned char a=6;
    //0000 0110
    unsigned char b=7;
    unsigned char c= a&b;//6(0000 0110)
    unsigned char c2= a | b;//7(0000 0111)
    unsigned char c3= ~a;//249(1111 1001)
    unsigned char c4= a ^ b;//1(0000 0001)
    unsigned char c5= a << 2;//249(0001 1000)
    unsigned char c6= a >> 2;//249(0000 0001)

*/
    char a[]="12345ab";
    int i;
    i= atoi(a);

    printf("%d",i);
    return 0;
}