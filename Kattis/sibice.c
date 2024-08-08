#include <math.h>
#include <stdio.h>
int main() {
    int matches, dimX, dimY;
    scanf("%i", &matches);
    scanf("%i", &dimX);
    scanf("%i", &dimY);

    int max = sqrt(dimX*dimX+dimY*dimY);
    int size;
    for (int i=0; i<matches; i++) {
        scanf("%i", &size);
        if (size <= max) {
            printf("%s\n","DA");
        }
        else {
            printf("%s\n","NE");
        }
    }
}
