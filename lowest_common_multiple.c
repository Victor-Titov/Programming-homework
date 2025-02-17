#include <stdio.h>

int highest_common_denominator(int a, int b){
    int c;
    while(b>0) {
        c=a%b;
        a = b;
        b = c;
    }
    return a;
}

int lowest_common_multiple(int a, int b){
    int c=a*b/ highest_common_denominator(a,b);

    return c;
}

int main(){
    int a=15, b=20;
    printf("%d", lowest_common_multiple(a,b));
}