#include <graphics.h>

int main()
{
    initwindow(500,500,"CSE-4742");
    printf("Draw an ARC");
    int x = 250;
    int y = 250;
    int start_angle = 45;
    int end_angle = 180;
    int radius = 100;
    arc(x, y, start_angle, end_angle, radius);
    getch();
    closegraph();

    return 0;
}
