#include<stdio.h>
#include<graphics.h>
void floodFill(int x,int y,int oldcolor,int newcolor)
{
	if(getpixel(x,y) == oldcolor)
	{
		putpixel(x,y,newcolor);
		floodFill(x+1,y,oldcolor,newcolor);
		floodFill(x,y+1,oldcolor,newcolor);
		floodFill(x-1,y,oldcolor,newcolor);
		floodFill(x,y-1,oldcolor,newcolor);
	}
}
int main()
{

	int x,y,radius;
	initwindow(500,500, "CSE-4742");
    printf("THIS IS OUR Flood Fill  PROGRAM: \n ");
	printf("Enter x and y positions for circle\n");
	scanf("%d%d",&x,&y);
	printf("Enter radius of circle\n");
	scanf("%d",&radius);
	circle(x,y,radius);
	floodFill(x,y,0,BLUE);
    getch();
	closegraph();
}
