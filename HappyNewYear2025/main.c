// C ���� 2025 �����!

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include "grasptc1.h"
#include "bmp.h"

void sound_dos()
{
   int i;
   for(i = 0; i <= 4; i++)
   {
       sound(440);
       delay(20); // ����প� (�ந��뢠���)��㪠
       nosound(); // ��⠭���� ��㪠
   }
}

int main()
{
    int dY, XC, i, j, k, year_len;

    /* ��� ��ଠ�쭮�� �⮡ࠦ����
    �᫠ ���� ࠧ��� ���ᨢ� year
    㪠��� � ����ᮬ. */

    char year[10];
    initgr();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    XC = (X__max)/2; dY = (Y__max/8)+400;

    printf("\n\n������ �᫮ ����: ");
    scanf("%s", &year);
    
    /* �� ����⨨ �� ������ �㤥� 
    ��襭 ��� 440 �� */
    sound_dos();

    setbkcolor(1); // 梥� 䮭�

    for(i = dY; i > 150; i--)
    {
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, i, "� ����");
	delay(15);
	cleardevice();
    }

    for(j = dY; j > 200; j--)
    {
	outtextxy(XC, i, "� ����");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, j, year);
	delay(15);
	cleardevice();
    }

    for(k = dY; k > 250; k--)
    {
	outtextxy(XC, i, "� ����");
	outtextxy(XC, j, year);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	outtextxy(XC, k, "�����!");
	delay(15);
	cleardevice();
    }

    outtextxy(XC, i, "� ����");
    outtextxy(XC, j, year);
    outtextxy(XC, k, "�����!");

    endgr();

    sound_dos();

    bmp(); // �뢮� �� �࠭ ���⨭�� "*.bmp"

    sound_dos();

    return 0;
}