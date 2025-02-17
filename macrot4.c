#include <stdio.h>
#define COMMAND(NAME,TYPE) TYPE ## _ ## NAME ## _command();
#define  DEFINE_COMMAND(NAME,TYPE) void TYPE ## _ ## NAME ## _command()

DEFINE_COMMAND(t1,test){

    printf("Hello ");
}

DEFINE_COMMAND(t2,test){
    printf("world\n");
}
int main(){
    COMMAND(t1,test)
    COMMAND(t2,test)
    return 0;
}




