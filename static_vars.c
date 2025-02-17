#include <stdio.h>

static int a=10;//visible only for this file
//can use getters and setters for other files

void foo(){
    static int b=0;//get saved in data a.k.a. is global
    b++;
}

int main(){


    return 0;
}
// do not declare the static function in the header file!!!

