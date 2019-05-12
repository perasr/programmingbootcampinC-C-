#include<stdio.h>
#include<math.h>
/*Decimal to Binary */
int main()
{
	int i = 0,j,rem[100],num;
printf("Enter the decimal number : ");
scanf("%d",&num);
while(num>0)
{
	rem[i]= num%2;
	num = num/2;
	i++;
}
for(j=i-1;j>=0;j--)
printf("%d",rem[j]);
printf(" is the binary equivalent");
return 0;
}

