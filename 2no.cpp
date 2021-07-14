#include<stdio.h>
#include<math.h>
float f(float x)
{
    float a;
    a=((7*x)/(1+x));
    return a;
}
int main()
{
    int n,i;
    float p,q,h,sum=0,integral,y0,yn;
    printf("\n Enter the upper limit: ");
    scanf ("%f",&p);
    printf("\n Enter the lower limit: ");
    scanf ("%f",&q);
    printf("\n Enter the interval: ");
    scanf ("%d",&n);
    h=(q-p)/n;
    y0=f(p+0*h);
	yn=f(p+n*h);
    i=1;
    while(i<n)
    {
        sum=sum+f(p+i*h);
        i++;
    }
    integral=(h/2)*(y0 + yn + 2*sum);
    printf("\n The integral of the equation using Trapezoidal Rule is %.3f:\n",integral);

    return 0;
}
