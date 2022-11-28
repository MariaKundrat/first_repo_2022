#include <stdio.h>
#include <math.h>
int main(void)
{
    double x=15.241;
    double y=7.118;
    double z;
    z = ((3*sqrt(x + pow(y,3)))/(cbrt(y)))+((3/(4*x))*cos(y));
    printf("z=%lf", z);
    return 0;
}