#include <stdio.h>
#include "mystrings.h"
int main(int argc, char ** argv){
    if(argc>3){
        printf("too much arguments");
        return 0;
    }

    printf("%d", strcompare(argv[1],argv[2]));

    return 0;
}