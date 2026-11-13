#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	printf("-----ɨ�׿�ʼ-----\n");
	for (int j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = EAST_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//������
			count--;
		}
	}
}
int getmine_count(char mine[ROWS][COLS], int x,int y)
{
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}

void expand_blank(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* win)
{
	if (x < 1 || x > row || y < 1 || y > col)
		return;
	if (show[x][y] != '*')
		return;

	show[x][y] = mine[x][y];
	(*win)++;

	int count = getmine_count(mine, x, y);
	if (count > 0)
		return;

	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (i == 0 && j == 0)
				continue;
			expand_blank(mine, show, row, col, x + i, y + j, win);
		}
	}
}
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EAST_COUNT)
	{
		printf("请输入坐标: ");
		if (scanf("%d %d", &x, &y) != 2)
		{
			while (getchar() != '\n');
			printf("输入错误，请重新输入两个数字\n");
			continue;
		}
		if (x < 1 || x > row || y < 1 || y > col)
		{
			printf("坐标范围越界，请输入 1-%d 之间的坐标\n", row);
			continue;
		}
		if (show[x][y] != '*')
		{
			printf("该位置已排查，请重新输入\n");
			continue;
		}
		if (mine[x][y] == '1')
		{
			printf("你踩到雷了，游戏结束！\n");
			displayboard(mine, ROW, COL);
			return;
		}

		int count = getmine_count(mine, x, y);
		if (count > 0)
		{
			show[x][y] = count + '0';
			win++;
		}
		else
		{
			expand_blank(mine, show, row, col, x, y, &win);
		}
		displayboard(show, ROW, COL);
	}
	printf("扫雷成功，你赢了！\n");
}





