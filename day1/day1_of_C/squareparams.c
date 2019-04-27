/*calculate the Area,perimeter,and diagonal of a square*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*main method */
 int main(){
 /*declare variables and read the side of the square */
   float length,Area,perimeter,diagonal;
   printf("Enter the length of the side of the square (in cms): ");
   scanf("%f",&length);
 /*declare variables Area,perimemeter,diagonal and caluculate the values */
 Area = pow(length,2);
 perimeter = 4*length;
 diagonal = sqrt(2)*length;
 printf("Area = %.2f cms \nPerimeter = %.2f cms \nDiagonal = %.2f cms",Area,perimeter,diagonal);
 return 0;
 }
