// Converting Hexa Decimal to Decimal
#include <stdio.h>
#include <math.h>
int main() {
    char hex[10];
    int decimal = 0, i;
    printf("Enter the hexadecimal number: ");
    scanf("%s", hex);
    for (i = 0; hex[i] != '\0'; i++) {
        int digitValue = 0;
        if (hex[i] >= '0' && hex[i] <= '9') {
            digitValue = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digitValue = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digitValue = hex[i] - 'a' + 10;
        } else {
            printf("Invalid hexadecimal input!\n");
            return 1;
        }
        decimal = decimal * 16 + digitValue;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
