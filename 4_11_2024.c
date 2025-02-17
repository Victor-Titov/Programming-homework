#include <stdio.h>

 //#define WINDOWS 1
#define BUFFER_SIZE 3
#ifdef WINDOWS
#include <conio.h>
#endif

int main(){
#ifdef _WIN32
    printf("a");
#endif

    return 0;
}