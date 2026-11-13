#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("-------------------\n");
	printf("----1.  play  ----\n");
	printf("----0.  exit  -----\n");
	printf("-------------------\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	findmine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择: ");
		if (scanf("%d", &input) != 1)
		{
			while (getchar() != '\n');
			printf("输入错误\n");
			continue;
		}
		switch (input)
		{
		case 1:
			printf("\n扫雷游戏开始！\n\n");
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("选择错误，请输入 0 或 1\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}




