#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = '5';
    double b = 8.852963;
    float c = 2.250;
    int d = 8;
    printf("El tama�o del int en bytes es: %d\n", sizeof(d));
    printf("El tama�o del float en bytes es: %d\n", sizeof(c));
    printf("El tama�o del double en bytes es: %d\n", sizeof(b));
    printf("El tama�o del char en bytes es: %d\n", sizeof(a));
    return 0;
}
