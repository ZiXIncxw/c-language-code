#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int arr[100][100] = {0};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k = 0;
    char t = 0;
    scanf("%d", &k);
    int a = 0;
    int b = 0;
    for (i = 0; i < k; i++)
    {
        scanf(" %c %d %d", &t, &a, &b);
        if (t == 'r')
        {
            for (j = 0; j < k; j++)
            {
                int tmp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = tmp;
            }
        }
        else if (t == 'c')
        {
            for (j = 0; j < k; j++)
            {
                int tmp = arr[j][a - 1];
                arr[j][a - 1] = arr[j][b - 1]
                    arr[j][b - 1] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}






