#include <stdio.h>
int main() {
    char code[1000];
    fgets(code, 1000, stdin);
    printf("%s", code);
}
