#include <stdio.h>
#include "mystrings.h"
int main(int argc, char ** argv){
    if(argc>2){
        printf("too much arguments");
        return 0;
    }
    printf("%d", strlength(argv[1]));

    return 0;
}