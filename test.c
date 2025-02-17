#include <stdio.h>

void foo(int a){
    a++;
    foo(a);

}

int main(){
    int a=10;
    foo(a);
    //a is still 10

    return 0;
}