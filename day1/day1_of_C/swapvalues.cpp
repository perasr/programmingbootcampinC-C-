#include <stdio.h>
#include <stdlib.h>
/* main method */
int main()
{
/* declare variables */
 int a,b,c;
 printf("Enter the values for a :");
 scanf("%d",&a);
 printf("Enter the values for b :");
 scanf("%d",&b);
 printf("The values that you've entered are: a = %d  b = %d ",a,b);
 /*swap the values */
    c = a;
    a = b;
    b = c;
    
/*display the values */
printf("\n");
printf("The swapped values are a = %d b =%d:",a,b);

	return 0;
}
