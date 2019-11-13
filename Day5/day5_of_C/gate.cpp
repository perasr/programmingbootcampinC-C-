/* What's the First value and Second Value*/

#include<stdio.h>
int main()
{
	int a[] ={2,4,6,8,10};
	int i,sum=0,*b = a+4,j=0;
	printf("The First value is %d\n",*b);
	printf("The Second value is %d",*(b));
	for(i=0;i<5;i++)
	{
		sum = sum + (*b-i) -*(b-i);
		printf("%d\n",sum);
		return 0;
	}
}   
