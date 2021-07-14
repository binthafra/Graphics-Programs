#include <graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,sa,sb;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR SCAN CONVERSION OF A POINT PROGRAM: \n ");
    scanf("%f%f",&a,&b);
    sa=floor(a+0.5);
    sb=floor(b+0.5);
    printf("a = %f, b=%f\n",sa,sb);
    putpixel(sa,sb,YELLOW);

    getch();
    closegraph();

    return 0;

}
