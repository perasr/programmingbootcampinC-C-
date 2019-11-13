/* Basic function exploration */
#include<stdio.h>
void main ()
{

int a,b,sum=0;
printf("Enter the values of a and b \n");
scanf("%d%d",&a,&b);
sum = add(a,b);
printf("The sum is %d",sum);

}
int add(int x,int y)
{
	int res;
	res = x+y;
}


