#include <stdio.h>

#define max 100

int main() {
    char string1[max] = "Hello, ";
    char string2[] = "world!";
    char *ptr1 = string1;
    char *ptr2 = string2;

    while (*ptr1) {
        ptr1++;
    }

    while (*ptr2) {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1 = '\0';

    printf("Strings concatenadas: %s\n", string1);

    return 0;
}
