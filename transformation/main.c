#include "transformation.h"
#include <stdio.h>

int main(){
    char num[20]="-1234";
    char notNum[20]="12abs3";
    struct transformation one =transform(num);
    struct transformation two =transform(notNum);

    printf("tmp.num=%ld tmp.error=%s\n", one.result, one.error);
    printf("tmp.num=%ld tmp.error=%s", two.result, two.error);

    return 0;
}