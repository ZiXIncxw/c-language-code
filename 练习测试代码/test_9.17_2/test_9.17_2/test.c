#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    float max = 0.0;
//    float min = 100.0;
//    int n = 0;
//    float sum = 0.0;
//    float score = 0.0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f", &score);
//        sum += score;
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//    }
//    printf("%.2f %.2f %.2f", max, min, sum / 5.0);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int code1[100] = { 0 };
//    int code2[100] = { 0 };
//    scanf("%s %s", &code1, &code2);
//    if (strcmp(code1, code2) == 0)
//    {
//        printf("same\n");
//    }
//    else
//    {
//        printf("different\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int t = 0;
//    int n = 0;
//    int m = 0;
//    int sum = 0;
//    int arr[100][100] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}






