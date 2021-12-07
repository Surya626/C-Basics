#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the numbers");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if (a>b && a>c && a>d)
	{
		printf ("%d is the largest",a);
	}
	
	else if (b>a && b>c && b>d)
	{
		printf ("%d is the largest",b);
	}
	else if (c>b && c>a && c>d)
	{
		printf ("%d is the largest",c);
	}
	else if (d>b && d>c && d>a)
	{
		printf ("%d is the largest",d);
	}
}
