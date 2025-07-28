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
	printf("-----扫雷开始-----\n");
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
			mine[x][y] = '1';//布置雷
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
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EAST_COUNT)
	{
		printf("输入坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，游戏结束\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = getmine_count(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (win == row * col - EAST_COUNT)
	{
		printf("排雷成功，你赢了\n");
		displayboard(mine, ROW, COL);
	}
}





