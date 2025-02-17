#include<stdio.h>

int main(){
    int arr[]={5,6,9,0,2,3,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int temp;
#ifdef _WIN32
    for(int i=len-1;i>=0;i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
#elif defined __linux__
int  minpos;
for(int i=0;i<len;i++){

        minpos=i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[minpos]){

                minpos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minpos];
        arr[minpos]=temp;

    }
#elif defined __APPLE__
    for(int i=1;i<len;i++){
        temp=arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                for(int g=i;g>j;g--){
                    arr[g]=arr[g-1];

                }
                arr[j]=temp;
                break;
            }
        }
    }
#else
    int arr2[len];
    for(int i=0;i<len;i++){
        arr2[len-i-1]=arr[i];
    }
    for(int i=0;i<len;i++){
        arr[i]=arr2[i];
    }
#endif
    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}