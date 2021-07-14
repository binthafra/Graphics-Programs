#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,sx,sy,m,b,x2,y2,x1,y1,sx1,sy1,i;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR FIRST PROGRAM: \n ");
    //circle(50,50,30);    //circle(x, y, radius);

    scanf("%f%f%f%f",&x,&y,&x1,&y1);
    sx=floor(x);
    sy=floor(y);
    sx1=floor(x1);
    sy1=floor(y1);
    printf("x=%f, y=%f\n x1=%f,y1=%f",sx,sy,sx1,sy1);

    m=(y1-y)/(x1-x);
    b=sy-(m*sx);  //y=mx+b
    m=abs(m);

    if(m<1 || m==1)
    {
        for(i=sx+1; i<sx1; i++)
        {
            y2=(m*i)+b;
            putpixel(i,y2,RED);
        }
    }
    else
    {
        for(i=sy+1; i<sy1; i++)
        {
            x2=(i-b)/m;
            putpixel(x2,i,RED);
        }
    }
    getch();
    closegraph();

    return 0;

}
