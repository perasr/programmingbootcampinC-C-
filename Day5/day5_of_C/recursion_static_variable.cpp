/* implmentation of recursion using static variables*/
#include<stdio.h>
int fun(int n)
{
	static int x=0;
	
		if(n>0)
		{
			x++;
			return fun(n-1)+x;
		}
	
}
 int main()
{
 int a=5,r;
 r = fun(a);
 printf("%d",r);
 return 0;
 



}
