#include <stdio.h>
#include <math.h>
int main()
{
  double x, res,res1,sinhx,coshx,tanhx;
  printf("Enter the value of x: ");
  scanf("%lf",&x);
  res = exp(x);
  res1 = exp(-x);
  sinhx = (res-res1)/2;
  coshx = (res+res1)/2;
  tanhx = sinhx/coshx;
  printf("The values of the hyperbolic functions are:\n");
  printf("Sinhx: %.2lf\nCoshx: %.2lf\nTanhx: %.2lf",sinhx,coshx,tanhx);
  return 0;
}
