#include<stdio.h>
#define DEBUG
#define ARR_SIZE 10
int arr[ARR_SIZE];

int sort(){
    int sum=0, temp;
    for(int i=ARR_SIZE-1;i>0;i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
    #ifdef DEBUG
        for(int i=0;i<ARR_SIZE;i++){
            printf("%d ",arr[i]);
        }
    #endif
    for(int i=0;i<ARR_SIZE;i+=3) {
        sum += arr[i];

    }
    #ifdef DEBUG
        printf("\n%d\n",sum);
    #endif

    return sum;
}

int main(){
    for(int i=0;i<ARR_SIZE;i++){
        scanf("%d",&arr[i]);
    }
    sort();
    return 0;
}