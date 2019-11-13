#include<stdio.h>
int main()
{
/*Counting positive and negative elements in  an array and also calculate sum of positive and negative elements*/
int psum=0;
int A[100],i,j,n,pcount=0,ncount=0,nsum=0;
printf("How many elements you wanna add in your array ");
scanf("%d",&n);
printf("Add combination of positive and negative elements\n");
for(i=0;i<n;i++)
{
	printf("A[%d]: ",i);
	scanf("%d",&A[i]);
}
// write a loop to count positive and negative numbers and their individual sum
	for(i=0;i<n;i++)
    {
    if(A[i]>=0)
    {
		pcount++;
		psum = psum+A[i];
    }
    else
    {
		ncount++;
        nsum=nsum+A[i];
    }
       
}
    printf("Number of positive integers: %d\nSum: %d  ",pcount,psum);
    printf("\nNumber of negative integers: %d\nSum: %d",ncount,nsum);
	return 0;
	}
	
    
    
