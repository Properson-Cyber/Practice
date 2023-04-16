#include "tools.h"
#include <windows.h>
#include <stdio.h>

//���ô��ڴ�С
void SetWindowSize(int cols,int lines) {
	//���ô��ڱ���
	system("title Snake Game");
	char cmd[30];
	//һ��ͼ�Ρ�ռ�����ַ����ʿ�ȳ���2
	sprintf_s(cmd, "mode con cols=%d lines=%d", cols * 2, lines);
	//system(mode con cols=88 rows=88)���ô��ڸ߶ȺͿ��
	system(cmd);
}


//���ù��λ��
void SetCursorPosition(const int x, const int y) {
	COORD position;
	position.X = x * 2;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

//�����ı���ɫ
void SetColor(int colorID) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

//�����ı�������ɫ
void SetBackColor() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_BLUE |
		BACKGROUND_BLUE |
		BACKGROUND_GREEN |
		BACKGROUND_RED);
}