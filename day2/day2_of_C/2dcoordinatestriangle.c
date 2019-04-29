#include<stdio.h>
#include<math.h>
/* whether 3 co-ordinates forms a triangle or not */
int main()
{
	float x1,y1,x2,y2,x3,y3;
	float side1,side2,side3;
	printf("Enter the 1st co-oridnate\n(x1 y1)\n");
	scanf("%f%f",&x1,&y1);
	printf("Enter the 2nd co-ordinate\n(x2 y2)\n");
	scanf("%f%f",&x2,&y2);
	printf("Enter the 3rd co-ordinate\n(x3 y3)\n");
	scanf("%f%f",&x3,&y3);
	/*calculating sides of each of the triangle*/
	side1 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	side2 = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	side3 = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));


/*satisfying the condition sum of 2 sides must be greater than 3rd side */
	if(side1+side2>side3 && side2+side3>side2 && side3+side1>side2)
	printf("These 3 co-ordinates (%.1f ,%.1f) (%.1f ,%.1f) (%.1f ,%.1f) forms a triangle",x1,y1,x2,y2,x3,y3);
	else
	printf("These 3 co-oridnates (%.1f ,%.1f) (%.1f ,%.1f) (%.1f ,%.1f) doesn't form a triangle",x1,y1,x2,y2,x3,y3);

	
	return 0;
}
