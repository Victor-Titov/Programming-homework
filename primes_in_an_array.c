#include <stdio.h>

int isPrime(int num){
    if (num<2){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){

            return 0;
        }
    }
    //printf("%d\n",num);
    return 1;
}

int main(){
    int len, sum=0;
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<len;i++){
        if(isPrime(arr[i])){
            sum+=arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}