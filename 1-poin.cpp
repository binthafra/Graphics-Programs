#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,sa,sb;
    initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR FIRST PROGRAM: \n ");
    scanf("%f%f",&a,&b);
    sa=floor(a);
    sb=floor(b);
    printf("a=%f, b=%f\n",sa,sb);
    putpixel(sa,sb,YELLOW);
    getch();
    closegraph();

    return 0;

}
