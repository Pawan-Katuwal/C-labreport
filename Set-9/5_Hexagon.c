#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x_center = 300, y_center = 200, radius = 50;
    int x, y;
    for (int i = 0; i < 6; i++) {
        x = x_center + radius * cos(i * M_PI / 3);
        y = y_center + radius * sin(i * M_PI / 3);
        line(x_center + radius * cos(i * M_PI / 3), y_center + radius * sin(i * M_PI / 3),
             x_center + radius * cos((i + 1) * M_PI / 3), y_center + radius * sin((i + 1) * M_PI / 3));
    }

    getch();
    closegraph();
    return 0;
}