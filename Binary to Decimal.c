// Converting Binary to Decimal
#include <stdio.h>
#include <math.h>
int main() {
    int binary, decimal = 0, base = 1, rem;
    printf("Enter the binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
