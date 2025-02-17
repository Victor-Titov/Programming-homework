#include<stdio.h>
#define ARR_SIZE 10

int main(){
    #ifdef ARR_SIZE
        int arr[ARR_SIZE];

        #if ARR_SIZE >0 && ARR_SIZE <11
            for(int i=0, j=1;i<ARR_SIZE;i++, j*=2){
                arr[i]=j;
                printf("%d ",arr[i]);
            }
        #else
            printf("Size not supported");
        #endif
    #else
        printf("Undefined");
    #endif
    return 0;
}