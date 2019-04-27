#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/* Enter the year */
int year;
printf("Enter the year: ");
scanf("%d",&year);
 
/* Check whether leap year or not */
 
    if( ( year%100!= 0 && year%4 == 0) || (year%400 == 0))
         printf("%d is a leap year",year);
          else
           printf("%d is not a leap year",year);
           

	return 0;
}
     
