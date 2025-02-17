#include <stdio.h>
long to_bin(int n){
    int a=n%2;
    int num;
    if(n>0){
        num = to_bin(n/2);
    }
    return num*10+a;
}

int main(){
    int n;
    scanf("%d", &n);
    long a=to_bin(n);
    printf("%ld", a);
    return 0;
}
