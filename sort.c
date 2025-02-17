#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int arr[len],tmp;
    for(int i=0;i<len;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=len-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i]*i;
    }
    printf("%d",sum);
    return 0;
}