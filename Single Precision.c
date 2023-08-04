//SINGLE PRECISION
#include <stdio.h>
int printBinary(int n, int i)
{
 int k;
 for (k = i - 1; k >= 0; k--) {
  if ((n >> k) & 1)
   printf("1");
  else
   printf("0");
 }
}
typedef union {
 float f;
 struct
 {
  unsigned int mantissa : 23;
  unsigned int exponent : 8;
  unsigned int sign : 1;
 } raw;
} myfloat;
int printIEEE(myfloat var)
{
 printf("%d | ", var.raw.sign);
 printBinary(var.raw.exponent, 8);
 printf(" | ");
 printBinary(var.raw.mantissa, 23);
 printf("\n");
}
int main()
{
float x;
printf("Enter the number:");
scanf("%f",&x);
myfloat var;
var.f = x ;
printf("IEEE 754 representation of %f is : \n",
  var.f);
 printIEEE(var);
 return 0;
}
