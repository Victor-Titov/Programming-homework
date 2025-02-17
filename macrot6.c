#include <stdio.h>
#define ARR_SIZE 5
#define SWAP(A,B,TYPE) \
TYPE c;                \
c=A;                   \
A=B;                   \
B=c;
#define SORT(ARR,SIZE,TYPE,COMPARE)    \
for(int i=SIZE-1;i>=0;i--){            \
    for(int j=0;j<i;j++){              \
        if(ARR[j] COMPARE ARR[j+1]){   \
            SWAP(ARR[j],ARR[j+1],TYPE) \
        }                              \
    }                                  \
}
int main(){
    int arr[ARR_SIZE]={9,2,5,7,0};
    SORT(arr,ARR_SIZE,int,<)
    for(int i=0;i<ARR_SIZE;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}