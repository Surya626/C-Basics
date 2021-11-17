#include<stdio.h>
void main()
{ 
    int x,y,z; //x2 y3 z4
    printf("enter a numbers :");
    scanf("%d %d %d",&x,&y,&z);
    x += y; // x5 y3 z4
    y -= z; // x5 y-1 z4
    z += x; // x5 y-1 z9
    y *= x; // x5 y-5 z9
    x *= z; // x45 y-5 z9
    printf("%d %d %d",x, y,z);


	
}
