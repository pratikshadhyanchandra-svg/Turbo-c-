#include <stdio.h>
#include <math.h>

int main() {
    int a = 15, b = 42, c = 27;

    int largest = (int)fmax(a, fmax(b, c));

    printf("The largest number is: %d\n", largest);

    return 0;
}
