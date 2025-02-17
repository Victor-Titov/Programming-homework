#include <stdio.h>
int main(){
    int len=6;
    int arr[6]={1, 2, 5, 7, 8, 10};
    int n;
    scanf("%d",&n);
    int s=0,f=len-1,m, om;
    m=(s+f+1)/2;
    while(arr[m]!=n){
        if(arr[m]>n){
            f=m;

        }
        else{
            s=m;
        }
        om=m;
        m=(s+f+1)/2;
        if(om==m){
            printf("-1");
            return 0;
        }


    }
    printf("%d",m);
    return 0;
}