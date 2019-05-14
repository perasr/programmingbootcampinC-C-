#include<stdio.h>
int main()
{
float n;
int i,x;
printf("Enter the n value: ");
scanf("%f",&n);
i=0;
while(i<n)
{
   i++;
   x=i;
   
}
printf("Integer part = %i",i-1);
float dec = n-(i-1);
printf("\nDecimal part = %f",dec);

return 0;
}
