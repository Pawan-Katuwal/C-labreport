#include <graphics.h>
#include <conio.h>

// Function to draw the sun symbol
void drawSun(int centerX, int centerY, int radius) {
    setcolor(WHITE);
    circle(centerX, centerY, radius);  // Outer circle
}

// Function to draw the crescent moon symbol
void drawMoon(int centerX, int centerY, int radius) {
    setcolor(WHITE);
    circle(centerX, centerY, radius);  // Outer part of crescent moon
    setcolor(BLUE);
    circle(centerX + 5, centerY, radius);  // Inner circle to create crescent effect
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set the background color for the flag
    setfillstyle(SOLID_FILL, RED);
    bar(50, 50, 200, 300);  // Red flag background

    // Outer Triangle (top)
    setcolor(BLUE);
    line(100, 50, 100, 250);     // Left side
    line(100, 50, 180, 150);     // Top side
    line(100, 150, 180, 150);    // Bottom side (top triangle)
    line(100, 150, 100, 250);    // Left side extended

    // Inner Triangle (bottom)
    line(100, 250, 220, 300);    // Bottom side
    line(100, 250, 180, 150);    // Left diagonal side

    // Sun symbol in the top triangle
    drawSun(120, 110, 20);

    // Crescent moon symbol in the bottom triangle
    drawMoon(130, 200, 15);

    getch();
    closegraph();
    return 0;
}