#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int mult=1;
    while(n>0){
        mult*=n%10;
        n/=10;
    }
    printf("%d",mult);
    return 0;
}