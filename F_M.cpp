#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
  return(x*x-x-2);
}
int main()
{
  float x1,x2,x=0,tmp,eps=0.0001;
  int iteration=0;
  do
  {
    printf("Enter Initial guess:");
    scanf("%f %f", &x1,&x2);
    if(f(x1)*f(x2)>0)
      printf("\nInvalid Guess.... Type the guess again...\n");
  }while(f(x1)*f(x2)>0);
  do
  {
    iteration++;
    tmp=x;
    x=x1-(f(x1)*(x2-x1))/(f(x2)-f(x1));
    if(f(x1)*f(x)<0)
        x2=x;
    else
        x1=x;
    printf("\n  Iteration=%d Result = %.4f",iteration,x);

  }while(fabs(tmp-x)>eps);

  printf("\n Result = %.4f Iteration=%d",x,iteration);
  getch();
}
