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
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;//行的范围为1~9
		y = rand() % col + 1;//列的范围为1~9
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//设置雷
			count--;
		}
	}
}
int getmine(char mine[ROWS][COLS],int x,int y)
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
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("游戏失败，你被炸死了\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = getmine(mine, x, y);
				show[x][y] = count + '0';//1加上字符0就为字符1，如果是2加上字符0就为字符2
				displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
		displayboard(mine, ROW, COL);
	}
}
