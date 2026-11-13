#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 500; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//1 1
//2 3
//3 5
//4 7
//5 9
//6 11

//推理结论：
// 
//空瓶是共享的，也就是说，假如有10个空瓶，那么先换5个，此时剩余5个空瓶，再换2个，注意，此时剩了1+2 = 3
//再换1个，此时剩1+1 = 2，还能再换1个，所以10个空瓶总共能换5+2+1+1 = 9个，
//也就是说当有n个空瓶时，就有n-1个瓶，所以能喝到n+n-1 = 2n-1
int Get_WaterNumFastly(int Money)
{
	if (Money < 0)
	{
		return 0;
	}

	return 2*Money-1;
}

//纯享推理版

//int Get_WaterNum(int Money)
//{
//	if (Money < 0)
//	{
//		return 0;
//	}
//	int Switch_emptyReal = Money;
//	int Switch_emptyRemaining = Money;
//	int total = Money;
//	//10,5,3
//	while (Switch_emptyReal >= 2)
//	{
//		Switch_emptyReal = Money / 2;//5,2,1,1
//		Switch_emptyRemaining = Money % 2;//0,1,1,0
//		total += Switch_emptyReal;//15,17,18,19
//		Switch_emptyReal += Switch_emptyRemaining;//5,3,2,1
//	}
//
//	return total;
//}


//废物啊，这么简单都写不对！！！！！！！！！！！！！！！！！！！！！！！

//int Get_WaterNum(int Money)
//{
//	if (Money < 0)
//	{
//		return 0;
//	}
//	int Switch_emptyRemaining = Money % 2;//0
//	int Switch_emptyReal = Money / 2+ Switch_emptyRemaining;//5
//	int total = Money+ Switch_emptyReal;//15
//	//10,5,3
//	while (Switch_emptyReal >= 2)
//	{
//		Switch_emptyRemaining = Switch_emptyReal % 2;//1,1,0
//		Switch_emptyReal = Switch_emptyReal / 2;//2,1,1
//		total += Switch_emptyReal;//17,18,19
//		Switch_emptyReal += Switch_emptyRemaining;//3,2,1
//	}
//
//	return total;
//}

int Get_WaterNum(int Money)
{
	if (Money < 0)
	{
		return 0;
	}
	int Empty = Money;//手里的空瓶
	int Total = Money;//总共
	int Exchange = 0;//换了多少个
	int Remaining = 0;//剩余的空瓶
	//10
	while (Empty >= 2)
	{
		Exchange = Empty / 2;//5
		Remaining = Empty % 2;//0
		Empty = Exchange + Remaining;//5
		Total += Exchange;//15
	}
	return Total;
}

void Print1()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 6 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (int j = 2 * (5-i) + 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	/*int ret = Get_WaterNum(20);
	printf("%d ", ret);*/
	Print1();
	return 0;
}




