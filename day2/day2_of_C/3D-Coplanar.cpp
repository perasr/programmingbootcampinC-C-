/* Are the four points of 3D vectors co-planar? */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x1,y1,z1,x2,y2,z2,x3,y3,z3,x4,y4,z4;
	float a1,b1,c1,a2,b2,c2,a3,b3,c3;
	float A1,B1,C1;
	float det;
	printf("Enter the 3D co-ordinates of A: ");
	scanf("%f %f %f",&x1,&y1,&z1);
	printf("Enter the 3D co-ordinates of B: ");
	scanf("%f %f %f",&x2,&y2,&z2);
	printf("Enter the 3D co-ordinates of C: ");
	scanf("%f %f %f",&x3,&y3,&z3);
	printf("Enter the 3D co-ordinates of D: ");
	scanf("%f %f %f",&x4,&y4,&z4);
	/* forming the vectors AB,BC,CD where AB=(a1,b1,c1) BC =(a2,b2,c2) CD =(a3,b3,c3)*/
	 a1 = x2-x1;  b1 = y2-y1;  c1 = z2-z1;
	 a2 = x3-x2;  b2 = y3-y2;  c2 = z3-z2;
	 a3 = x4-x3;  b3 = y4-y3;  c3 = z4-z3;
	/*calculating the determinant */
	A1  =  a1*((b2*c3) -  (b3*c2)); 
	B1  =  b1*((a2*c3) -  (a3*c2)); 
	C1  =  c1*((a2*b3) -  (a3*b2));
	det =  A1-B1+C1; 
	/* if determinant is zero then it is co-planar*/
	if(det == 0)
    printf("The four points A B C D are co-planar");
	else
    printf("The four points A  B  C  D are not co-planar");	

return 0;
}




