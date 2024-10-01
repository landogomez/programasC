#include <stdio.h>

int main() {

    //Declare the array
    int array[5] = {1,2,3,4,5};

    int *pArr = &array[0];

    while(*pArr != NULL) {
        printf("\n %d", *pArr);
        pArr++;
    }

    return 0;
}