#include <stdio.h>

 int main() {
 
/* declare the variables */
int num;
/* read n*/
printf("Enter the number: ");
scanf("%d",&num);
/* check and display */
if(num/10!=0 && num/100 ==0)
  printf("%d is a two digit number",num);
else
  printf("%d is not a two digit number",num);

return 0;
}

