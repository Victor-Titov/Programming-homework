#include <stdio.h>
#include "mystrings.h"
int main(int argc, char ** argv){
    if(argc>3){
        printf("too much arguments");
        return 0;
    }
    struct str ans;
    ans= strconcat(argv[1],argv[2]);
    printf("%s", ans.arr);

    return 0;
}