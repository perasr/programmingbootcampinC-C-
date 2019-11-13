#include<stdio.h>

/* implementing count sort */
int main()
{
int A[100],n,max,min,i;
 printf("Enter the size of an array: ");
 scanf("%d",&n);
 printf("Enter those %d elements: \n",n);
 for(i=0;i<n;i++)
 {
 printf("A[%d]: ",i);
 scanf("%d",&A[i]);
}
min=A[0];
max=A[0];
for(i=0;i<n;i++)
{
	if(max<A[i])
	 max =A[i];
	 else
	 min = A[i];
}
	printf("\nMax : %d\nMin: %d",max,min);
return 0;
}

 

