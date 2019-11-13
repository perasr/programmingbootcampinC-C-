#include<stdio.h>
/*find max,sum and min element in an 1d array */
int main()
{
	int x[100],n,max,min,i,sum=0;
	printf("How many elements you wanna add in an array?\n ");
	scanf("%d",&n);
	printf("Add the %d values to the array\n",n);
	for(i=0;i<n;i++)
	{
		printf("x[%d] : ",i);
		scanf("%d",&x[i]);
		sum = sum+x[i];
	}
	max=x[0];
    for(i=0;i<n;i++)
	{
      if (max < x[i])
        max=x[i];
    }
    min = x[0];
    for(i=0;i<n;i++)
    if(min > x[i])
    {
	min = x[i];
    }
	printf("Sum of an array is %d",sum);
	printf("\nMax element in the array is %d",max);
    printf("\nMin element in the array is %d",min);
	return 0;
}
