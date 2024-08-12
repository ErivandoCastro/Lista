#include <stdio.h>

int main(){
    int num1, num2, temp;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    num1 = 3;
    num2 = 5;

    printf("Num1: %d\n", *ptr1);
    printf("Num2: %d\n", *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("------------------\n");

    printf("Num1: %d\n", *ptr1);
    printf("Num2: %d\n", *ptr2);

    return 0;
}