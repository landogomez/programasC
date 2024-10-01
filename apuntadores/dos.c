#include <stdio.h>

int main() {

    int a = 19;
    int b = 20;

    int *pA = &a;
    int *pB = &b;

    *pA = 20;

    printf("%i", a);


    return 0;
}