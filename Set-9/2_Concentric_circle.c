#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = 300, y = 200;  // Center of circles
    for (int radius = 30; radius <= 150; radius += 30) {
        circle(x, y, radius);
    }

    getch();
    closegraph();
    return 0;
}