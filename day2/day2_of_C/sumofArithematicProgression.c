#include<stdio.h>
/*find the sum of first n terms of an Arithematic progression*/
int main()
{
	
 int a,a1,a2,n,Sum,d,an;
 printf("Enter the first term of the series: ");
 scanf("%d",&a);
 printf("Enter the second term of the series: ");
 scanf("%d",&a1);
 printf("Enter the 'n' terms for which you wanna find the series:");
 scanf("%d",&n);
 d = a1-a;
 a2 =a1+d;
 an = a+(n-1)*d;
 Sum = n/2 *(a+an);
 printf("The sum of the series:\n%d+%d+%d....+%d = %d",a,a1,a2,an,Sum);
 return 0;
}
