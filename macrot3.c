#include <stdio.h>
#define PRINT(A) printf("The value of "#A" on line %d in file"__FILE__" is %d",__LINE__,A)
int main(){
    int a;
    scanf("%d",&a);
    PRINT(a);
    return 0;
}