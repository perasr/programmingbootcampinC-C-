/*calculate the Diameter,Area,and circumference of a circle*/
#include<stdio.h>

using namespace std;
 /*main method */
 int main() {
 	float radius;
 	printf("Enter the radius value(in cms): ");
 	scanf("%f",&radius);
/*calculation of Diameter,Area and circumference */
  /*Declare variables diam,Area,circum */
  float diam,Area,circum;
   diam = 2 * radius;
   Area = 3.14 *(radius * radius);
   circum = 2*(3.14)* radius;
   printf("Diameter = %.2f cm \nArea = %.2f cm \nCircumference = %.2f cm",diam,Area,circum);
   
   return 0;
 }
