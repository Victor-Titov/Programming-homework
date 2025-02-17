#include <stdio.h>

int main(){
    char a[100];
    char largest=0;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if((int)a[i]>(int)largest){
            largest=a[i];
        }
    }
    printf("%c",largest);
    return 0;
}