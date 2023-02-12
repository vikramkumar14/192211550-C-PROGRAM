#include <stdio.h>
#include <math.h>

int main() 
{
    int octal, decimal = 0, i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }

    printf("Decimal equivalent of the octal number %d is: %d\n", octal, decimal);

    return 0;
}
