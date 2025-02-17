#include <stdio.h>

int main(){

    char a = 125;
    int b = a; //no error
    printf("%d\n",a);
    int a1=32134;
    char b1=a1;// overflow(the problem is that the value is larger than the max value of the type(the same problem can be seen in unsigned to  signed conversion))
    printf("%d\n",b1);
    char a2=-1125;
    unsigned char b2=a2;// problem is when a negative num is typecast to an unsigned variable
    printf("%d\n", b2);
    int a3=5;
    float b3=a3;//no error
    printf("%f",b3);
    float a4=6.75;
    int b4=a4;
    printf("%d\n",b4);
    //explicit
    int a5=5;
    float b5=(float)a5;
    return 0;
}