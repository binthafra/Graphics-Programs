#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void plot4pixels(int,int,int,int);
int main()
{
    initwindow(500,500, "CSE-4742");
    int x,y,r,i,h,k,a,b;
    cout<<"\n\t\t\t\*Polynomial method to draw an ellipse*\n";
    cout<<"\n enter the x and y coordinates:-\n";
    cin>>h>>k;
    cout<<"\n enter the first radius:-\n";
    cin>>a;
    cout<<"\n enter the second radius:-\n";
    cin>>b;
    x=0;
    y=b;
    while(x<a)
    {
       putpixel(x+h,y+k,WHITE);
       putpixel(x+h,-y+k,WHITE);
       putpixel(-x+h,y+k,WHITE);
       putpixel(-x+h,-y+k,WHITE);
       x++;
       y=b*sqrt(((a*a)-(x*x*1.0))/(a*a));
    }
    getch();
    closegraph();

     return 0;
}
