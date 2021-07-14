#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
  return (sqrt(pow(x,3)-1)); /* x3 -x2-1 = 0 */
}

int main()
{
  float x0,x1=0,tmp,eps=0.001;
  int iteration=0;
  printf("Enter initial guess: ");
  scanf("%f",&x0);
  do
  {
    tmp=x1;
    x1=f(x0);
    iteration++;
    printf("\n%d\t%f",iteration,x1);
    x0=x1;
  }while(fabs(tmp-x1)>eps);
  printf("\n\n Real root=%0.4f\n Iteration=%d",x1,iteration);
  getch();
}
