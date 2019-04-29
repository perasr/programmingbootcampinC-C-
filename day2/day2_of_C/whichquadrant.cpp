/* which of these co-oridnates belong to which quadrant */
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int x,y;
 printf("Enter the co-ordinates \n (x,y):");
 scanf("%d %d",&x,&y);
 if(x ==0  && y == 0)
  printf("The co-oridnates form origin");
 else if(x>0 && y>0)
  printf("The co-ordinates are in Quadrant 1");
 else if(x>0 && y<0)
  printf("The co-oridnates are in Quadrant 4");
 else if(x<0 and y>0)
  printf("The co-ordinates are in Quadrant 2");
 else
  printf("The co-ordinates are in Quadrant 3");
 
 return 0;
}
 
	

