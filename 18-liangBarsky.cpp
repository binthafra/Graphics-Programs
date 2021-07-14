#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    initwindow(500,500, "CSE-4742");

	int i;
	int x1,y1,x2,y2,xmin,xmax,ymin,ymax,xx1,xx2,yy1,yy2,dx,dy;
	float u1,u2,p[4],q[4],u[4];
    printf("Enter coordinates :\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2); //100,200,300,300
    scanf("%d%d%d%d",&xmin,&ymin,&xmax,&ymax);// 100 100 250 250
    line(x1,y1,x2,y2);
	rectangle(xmin,ymin,xmax,ymax);
	getch();
	dx=x2-x1;
	dy=y2-y1;
	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;

	q[0]=x1-xmin; //left
	q[1]=xmax-x1;// right
	q[2]=y1-ymin;//bottom
	q[3]=ymax-y1;// TOP

	for(i=0; i<4; i++)
    {
        if(p[i]!=0)
        {
            u[i]=(float)q[i]/p[i];
        }
        else if(p[i]==0 && q[i]<0)
            printf("line completely outside the window");
        else if(p[i]==0 && q[i]>=0)
            printf("line completely outside the window");
    }
    if (u[0]>u[2])
    {
        u1=u[0];
    }
    else
    {
       u1=u[2];
    }
    if (u[1]<u[3])
    {
        u2=u[1];
    }
    else
    {
        u2=u[3];
    }
	if(u1<u2)
	{
		xx1 = x1 + u1 * p[1];
		xx2 = x1 + u2 * p[1];
		yy1 = y1 + u1 * p[3];
		yy2 = y1 + u2 * p[3];
		cleardevice();
		rectangle(xmin,ymin,xmax,ymax);
		line(xx1,yy1,xx2,yy2);
	}
    else
    {
        printf("line lies out of the window");
    }
	delay(5000);
	closegraph();
}
