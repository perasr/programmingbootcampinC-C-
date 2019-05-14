#include<stdio.h>
int main()
{
	int a,b,sum=0,i;
	printf("Enter the a and b ");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	sum = sum+a;
	printf("%d * %d = %d",a,b,sum);
	return 0;
}
