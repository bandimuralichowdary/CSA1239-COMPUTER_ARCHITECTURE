//Converting Decimal to Hexa Decimal
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10], n, i;
    char hex[10];
    int remainder;
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("\nHexadecimal of Given Number is=0");
        return 0;
    }
    for (i = 0; n > 0; i++) {
        remainder = n % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder + 55;
        }
        n = n / 16;
    }
    printf("\nHexadecimal of Given Number is=");
    for (i = i - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    return 0;
}
