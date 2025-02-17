#include<stdio.h>
int foo(){
    int a=0;
    return a;
}

int main(){
    int a=10;
    // can not define a in this scope again
    {
        int b=20;
        printf("%d",b);
        //a is visible here as well as b
    }
    {
        int b=30;

    }
    {
        int a=3;
        //inner a overrides the outside a (shadowing)


    }
    //b isn't visible here(a is still visible)

    return 0;
}