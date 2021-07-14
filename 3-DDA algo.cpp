#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,sx,sy,x1,y1,sx1,sy1,m,y2,x2;
    int i;
    initwindow(500,500, "CSE-4742");
    printf("DDA algorithm\n");
    scanf("%f%f%f%f",&x,&y,&x1,&y1);
    sx=floor(x);
    sy=floor(y);
    sx1=floor(x1);
    sy1=floor(y1);
    printf("x= %f, y=%f\n x1= %f, y1=%f\n",sx,sy,sx1,sy1);

    m=(sy1-sy)/(sx1-sx);

    printf("%f\n",m);

    if(m<1 || m==1)
    {
        y2=sy;
        while(y2<=sy1)
        {
            putpixel(sx,y2,YELLOW);
            printf("%f %f\n",sx,y2);
            y2=y2+m;
            sx=sx+1;
        }
    }
    else
    {
        x2=sx;
        while(x2<=sx1)
        {
            putpixel(x2,sy,YELLOW);
            printf("%f %f\n",x2,sy);
            x2=x2+(1/m);
            sy=sy+1;
        }
    }
    getch();
    closegraph();
    return 0;
}
