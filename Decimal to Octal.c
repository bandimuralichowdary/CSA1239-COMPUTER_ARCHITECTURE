// Converting Decimal to Octal
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],n,i;
	printf("Enter the decimal number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("The equivalent octal to given decimal is = 0");
		return 0;
	}
	for(i=0;n>0;i++)
	{
		a[i]=n%8;
		n=n/8;
	}
	printf("The octal number is:");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
