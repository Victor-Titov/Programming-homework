#include <stdio.h>

int a=3;
void foo(){
    //can access a

}
extern int b;//so the var can be accessed in other files
int main(){
    // can also access a

    return 0;
}