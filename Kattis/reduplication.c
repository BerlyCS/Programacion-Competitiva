#include <stdio.h>
int main() {
    char word[20];
    scanf("%s", word);
    int repeat;
    scanf("%i", &repeat);
    for (int i=0; i<repeat; i++) {
        printf("%s", word);
    }
}
