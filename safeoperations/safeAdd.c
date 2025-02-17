#include <stdio.h>
#include "safeint.h"

int main(int argc, char ** argv){
    if(argc!=3){
        printf("Invalid amount of arguments");
        return 0;
    }
    struct safeResult a,b,c;
    a= safestrtoint(argv[1]);
    b= safestrtoint(argv[2]);

    if(a.error_flag || b.error_flag){
        printf("Invalid arguments");
        return 0;
    }
    c= safeAdd(a.value,b.value);
    if(c.error_flag){
        printf("Invalid(overflow/underflow)");
        return 0;

    }
    printf("%d", c.value);
    return 0;
}