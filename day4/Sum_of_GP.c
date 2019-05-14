#include<stdio.h>
#include<windows.h>
 /* Sum of first n terms in GP*/
 int main()
 {
    double a,ar,r,mid,Sum,thrd,nth;
    int n;
 	printf("Enter the first two terms: ");
 	scanf("%lf%lf",&a,&ar);
 	printf("Enter the n terms for which you need the Sum of GP: ");
 	scanf("%d",&n);
	/*calculating the exponent*/
	r= ar/a;
	/*caclulating 3rd term*/
	thrd = a*pow(r,2);
	/*calculating the nth term */
	nth = a*pow(r,n-1);

	/*calculating the Sum of the series*/
	mid = (1-pow(r,n))/(1-r);
	Sum = a*mid;
	printf("The sum of first %d terms of the series %.0lf + %.0lf + %.0lf + ...+ %.0lf = %.2f ",n,a,ar,thrd,nth,Sum);
	 return 0;
 	
 	
 }
