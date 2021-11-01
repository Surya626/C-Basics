#include<stdio.h>
void main()
{
	int a,b;
	a=10;
	b=2;

	printf("sum of %d and %d is %d\n",a,b,a+b);
	printf("difference betwen %d and %d is %d\n",a,b,a-b);
	printf("product of %d and %d is %d\n ",a,b,a*b);
	printf("quotient when %d is divide by %d is %d\n",a,b,a/b);
	printf("remainder when %d is divided by %d is %d\n",a,b,a%b);
	printf("sum of all arithematic operations is %d",(a+b)+(a-b)+(a*b)+(a/b)+(a%b));


}
