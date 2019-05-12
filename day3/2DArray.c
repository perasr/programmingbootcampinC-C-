#include<stdio.h>
/* Read a 2D array */
int main()
{
int i,j,num[2][3];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
	printf("Enter the values for num[%d][%d]: ",i,j);
	scanf("%d",&num[i][j]);	
}
}
printf("\n");
printf("The 2d array elements are:\n");
for(i=0;i<2;i++)
for(j=0;j<3;j++)
 {
printf("%d ",num[i][j]);
if(j==2)
{
 printf("\n");
}
}
	return 0;

}

