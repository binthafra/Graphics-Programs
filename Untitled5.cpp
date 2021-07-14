#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define e 0.0001
#define f(x) x*x*x+x*x-1
#define g(x) 1/sqrt(x+1)   //x=2-x^2
int main()
{
	int i=0;
	float x1,x0; //initial guess
	printf("\nEnter the initial guess x0: ");
	scanf("%f",&x0);
	//if x0=initial guess to a root,then next approximation
	x1=x0;//x[i+1]=g(x[i]);
	do
	{
		i++;
		x0=x1;
		x1=g(x0);
		printf("Iteration = %d\t",i);
        printf("root = %f\t\n",x1);

	}while(fabs(x1-x0)>e);

	printf("One root is %f obtained at %d th iteration ",x1,i);
}

