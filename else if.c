#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	if (a<b)
	{
		printf("%d is the largest number",b);
	}
	else
	{
		printf("%d is the largest number",a);
	}
}
