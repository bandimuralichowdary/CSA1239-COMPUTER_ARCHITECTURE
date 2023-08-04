// Converting Octal to Decimal
#include <stdio.h>
#include <math.h>
int main() {
    int octal, decimal = 0, base = 1, rem;
    printf("Enter the octal number: ");
    scanf("%d", &octal);
    while (octal > 0) {
        rem = octal % 10;
        decimal += rem * base;
        octal /= 10;
        base *= 8;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
