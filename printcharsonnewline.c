#include <stdio.h>

void printcharsonnewline(char *s);

int main() {
    char input[] = "someString";
    printcharsonnewline(input);

    return 0;
}

void printcharsonnewline(char *s) {
    for (int index = 0; s[index] != '\0'; index++) {//\0 not 0 and int not char
        char currentchar = s[index];
        printf("%c\n", currentchar);
    }
}