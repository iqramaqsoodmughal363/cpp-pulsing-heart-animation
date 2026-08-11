#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int size = 50;
    int grow = 1;

    while (!kbhit()) {
        cleardevice();
        setbkcolor(BLACK);
        cleardevice();

        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);

        int x = getmaxx() / 2;
        int y = getmaxy() / 2;

        fillellipse(x - size / 2, y - size / 2, size, size);
        fillellipse(x + size / 2, y - size / 2, size, size);
        bar(x - size, y - size / 2, x + size, y + size);

        // Triangle part
        int points[] = {x - size, y + size, x + size, y + size, x, y + size * 2};
        fillpoly(3, points);

        size += grow;
        if (size > 70 || size < 50) grow = -grow;

        delay(80);
    }

    getch();
    closegraph();
    return 0;
}
