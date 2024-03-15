#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    printf("%d\n", 'A');
    printf("%d\n", 'BCabc');
    printf("%d\n", 0);
    printf("%d\n", 12);
    printf("%d\n", '$');
    printf("%d\n", '*');
    printf("%d\n", '+');
    printf("%d\n", '/');
    printf("%d\n", ' ');

    return 0;
}