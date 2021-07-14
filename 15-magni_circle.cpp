#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int x,y,r,midx,midy;
    float sf,r1;
    initwindow(500,500, "CSE-4742");
    printf("\n Enter the Raidus : ");
    scanf("%d",&r);
    outtextxy(350,200,"Before Magnifying");
    circle(200,200,r);
    printf("Magnify a Circle : \n ");
    printf("Enter the scaling factor : ");
    scanf("%f",&sf);
    cleardevice();
    outtextxy(350,200,"After Magnifying");
    r1=r*sf;
    circle(200,200,r1);
    getch();
}
