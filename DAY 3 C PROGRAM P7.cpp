#include <stdio.h>

int main() 
{
    int n, i;
    float num, sum = 0, average;

    printf("Enter the number of elements you want to add: ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i) {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;
    printf("Sum of %d numbers is: %.2f\n", n, sum);
    printf("Average of %d numbers is: %.2f\n", n, average);

    return 0;
}
