#include <graphics.h>
#include<conio.h>
#include <stdio.h>

int main()
{
    int i, j,n,x,y;

    initwindow(600,600, "CSE-4742");


    printf("Enter the number");
    scanf("%d",&n);

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {

           if(i == j ||  i+j == n +1)


            putpixel(200+i,200+j,WHITE*1);
            else


            putpixel(200+i,200+j,WHITE * 2);
        }

        printf("\n");
    }

    getch();
    return 0;
}

