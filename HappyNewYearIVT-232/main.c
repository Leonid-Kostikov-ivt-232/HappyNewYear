// C ���� ����� ���-232!

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

    setbkcolor(1); // 梥� 䮭�

    for(i = dY; i > 150; i--)
    {
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, i, "� ���� �����!");
	delay(15);
	cleardevice();
    }

    for(j = dY; j > 200; j--)
    {
	outtextxy(XC, i, "� ���� �����!");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, j, "���-232");
	delay(15);
	cleardevice();
    }

    outtextxy(XC, i, "� ���� �����!");
    outtextxy(XC, j, "���-232");

    endgr();

    bmp(); // �뢮� �� �࠭ ���⨭�� "*.bmp"

    return 0;
}