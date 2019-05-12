#include<stdio.h>
/*add,subtract,multiply and divide a 2 dimensional array by 10 */
int main()
{
	float a[100][100];
	int i,j,n,choice;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("Enter the numbers for a 2d array a[%.0f][%.0f]:",i,j);
    scanf("%f",&a[i][j]);
     }
}
printf("The elements of 2D Matrix are:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%.2f\t",a[i][j]);
		if(j==1)
	{
		printf("\n");
		
		}
	}
}

printf("\nEnter the value of N to perform arithematic operations:\n");
scanf("%d",&n);
printf("\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)");
printf("\n******************************");
printf("\nEnter your choice: \n");
scanf("%d",&choice);
if (choice == 1)
printf("The calculated values for the addition of 2D matrix are:\n");
else if(choice == 2)
printf("The calculated values for the Subtraction of 2D matrix are:\n");
else if(choice == 3)
printf("The calculated values for the Multiplication of 2D matrix are:\n");
else if(choice == 4)
printf("The calculated values for the Division of 2D matrix are:\n");

switch(choice)
{
	case 1:
	for(i=0;i<2;i++)
	{
	 for(j=0;j<2;j++)
	 {
	printf("%.2f\t",a[i][j]+n);
		if(j==1)
		{
		printf("\n");
	     }
     }
}		break;
	case 2:
	for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%.2f\t",a[i][j]-n);
		if(j==1)
		{
		printf("\n");
	     }
    }  
}
		break;
	case 3:
	for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%.2f\t",a[i][j]*n);
		if(j==1)
		{
		printf("\n");
	     }
    }  
}
     break;
	case 4:
	for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%.2f\t",a[i][j]/n);
		if(j==1)
		{
		printf("\n");
	     }
    }  
}
break;
default:
printf("Invalid choice");
}

	return 0;
}
