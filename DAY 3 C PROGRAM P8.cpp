#include <stdio.h>

int main() 
{
    int n, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    printf("Sum of the series 1 - 2 + 3 - 4 + ... %d is: %d\n", n, sum);

    return 0;
}
