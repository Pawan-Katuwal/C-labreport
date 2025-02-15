#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a line
    line(100, 100, 200, 100);

    // Draw a rectangle
    rectangle(150, 150, 250, 250);

    // Draw a circle
    circle(300, 200, 50);

    getch();
    closegraph();
    return 0;
}