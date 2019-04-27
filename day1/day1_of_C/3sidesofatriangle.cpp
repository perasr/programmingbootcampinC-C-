/* find out whether given three sides form a triangle*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
/*declare the variables for the three sides of a triangle*/
	int a,b,c;
	printf("Enter the three sides of a triangle: ");
	scanf("%d%d%d",&a,&b,&c);
/*check whether three sides form a triangle or not*/
	if(a+b>c && a+c>b && b+c>a)
	printf("These 3 sides (%d, %d, %d) forms a triangle",a,b,c);
	else
	printf("These 3 sides (%d, %d, %d) doesn't form a traingle" ,a,b,c);
	
	return 0;

	
}
