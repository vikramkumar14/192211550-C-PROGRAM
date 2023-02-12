#include <stdio.h>
#include <math.h>

int main()
{
    int hex, decimal = 0, i = 0;

    printf("Enter an hex number: ");
    scanf("%d", & hex);

    while (hex!= 0) {
        decimal += (hex % 10) * pow(8, i);
        ++i;
        hex /= 10;
    }

    printf("Decimal equivalent of the hex number %d is: %d\n", hex, decimal);

    return 0;
}
