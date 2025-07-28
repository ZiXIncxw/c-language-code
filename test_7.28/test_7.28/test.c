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
	char mine[ROWS][COLS] = { 0 };//存放雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查雷的信息
	//初始化棋盘
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS,'*');
	//打印棋盘
	displayboard(show, ROW, COL);
	//displayboard(mine, ROW, COL);
	//布置雷
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);
	//排查雷
	findmine(mine,show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned)(time)NULL);
	do
	{
		menu();
		printf("请输入数字");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
