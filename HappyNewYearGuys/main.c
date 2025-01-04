// C Новым Годом! Ребята!

#include <stdio.h>
#include <conio.h>
#include "grasptc1.h"
#include "bmp.h"

int main()
{
    int dY, XC, i, j;
    initgr();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    XC = (X__max)/2; dY = (Y__max/8)+400;

    setbkcolor(1); // цвет фона

    for(i = dY; i > 150; i--)
    {
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, i, "С Новым Годом!");
	delay(15);
	cleardevice();
    }

    for(j = dY; j > 200; j--)
    {
	outtextxy(XC, i, "С Новым Годом!");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, j, "Ребята!");
	delay(15);
	cleardevice();
    }

    outtextxy(XC, i, "С Новым Годом!");
    outtextxy(XC, j, "Ребята!");

    endgr();

    bmp(); // Вывод на экран картинки "*.bmp"

    return 0;
}