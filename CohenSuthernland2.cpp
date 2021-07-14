#include<conio.h>
#include<iostream>
#include<graphics.h>
using namespace std;
static int LEFT=1,RIGHT=2,BOTTOM=4,TOP=8,xl,yl,xh,yh;
int getcode(int x,int y)
{
    int code = 0;
    if(y > yh) code |=TOP;
    if(y < yl code |=BOTTOM;
    if(x < xl) code |=LEFT;
    if(x > xh) code |=RIGHT;
    return code;
}
int main()
{
    initwindow(500,500, "CSE-4742");
    setcolor(RED);
    cout<<"Enter top left and right bottom co-ordinates of clipping window: ";
    cin>>xl>>yl>>xh>>yh;
    rectangle(xl,yl,xh,yh);
    int x1,y1,x2,y2;
    cout<<"Enter the 1st point of the line: ";
    cin>>x1>>y1;
    cout<<"Enter the 2nd point of the line:";
    cin>>x2>>y2;
    cout<<"Before clipping:";
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    getch();
    int outcode1=getcode(x1,y1), outcode2=getcode(x2,y2);
    int accept = 0; //decides if line is to be drawn
    while(1)
    {
        float m =(float)(y2-y1)/(x2-x1);
//Both points inside. Accept line
        if(outcode1==0 && outcode2==0){
        accept = 1;
            break;
        }
//AND of both codes != 0.Line is outside. Reject line
        else if((outcode1 & outcode2)!=0)
        {
            break;
        }
        else
        {
            int x,y;
            int temp;
            if(outcode1==0)//Decide if point1 is inside, if not, calculate intersection
                temp = outcode2;
            else
                temp = outcode1;
            if(temp & TOP)//Line clips top edge
            {
                x = x1+ (yh-y1)/m;
                y = yh;

            }
            else if(temp & BOTTOM)  //Line clips bottom edge
            {
                x = x1+ (yl-y1)/m;
                y = yl;
            }
            else if(temp & LEFT)   //Line clips left edge
            {
                x = xl;
                y = y1+ m*(xl-x1);
            }
            else if(temp & RIGHT)   //Line clips right edge
            {
                x = xh;
                y = y1+ m*(xh-x1);
            }
//Check which point we had selected earlier as temp, and replace its co-ordinates
            if(temp == outcode1)
            {
                x1 = x;
                y1 = y;
                outcode1 = getcode(x1,y1);
            }
            else{
                x2 = x;
                y2 = y;
                outcode2 = getcode(x2,y2);
            }
        }
    }
    if(accept)
    {
        cleardevice();
        cout<<"\nAfter clipping:";
        setcolor(RED);
        rectangle(xl,yl,xh,yh);
        setcolor(WHITE);
        line(x1,y1,x2,y2);
    }
    getch();
    closegraph();
    return 0;

}
