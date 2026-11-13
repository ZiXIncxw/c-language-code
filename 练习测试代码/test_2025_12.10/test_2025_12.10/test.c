#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//void SLTest01()
//{
//	SL sl;
//	SLInit(&sl);
//	//增删查改操作
//	//测试尾插
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(sl);//1 2 3 4
//
//	//SLPushFront(&sl, 5);
//	//SLPushFront(&sl, 6);
//
//	//测试尾删
//	SLPopBack(&sl);
//	SLPrint(sl);//1 2 3 
//	SLPopBack(&sl);
//	SLPrint(sl);
//	SLPopBack(&sl);
//	SLPrint(sl);
//	SLPopBack(&sl);
//	SLPrint(sl);
//	SLPopFront(&sl);
//	SLPrint(sl);
//	//...........
//	SLDestroy(&sl);
//}

//void SLTest02()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(sl);//1 2 3 4
//	//测试指定位置之前插入数据
//	//SLInsert(&sl, 1, 99);
//	//SLInsert(&sl, sl.size, 88);
//
//	//测试删除指定位置的数据
//	//SLErase(&sl, 1);
//	//SLPrint(sl);//1 3  4
//
//	//测试顺序表的查找
//	int find = SLFind(&sl, 40);
//	if (find < 0)
//	{
//		printf("没有找到！\n");
//	}
//	else {
//		printf("找到了！下标为%d\n",find);
//	}
//	SLDestroy(&sl);
//}

////通讯录的测试方法
//void ContactTest01()
//{
//	Contact con;//创建的通讯录对象  实际上就是 顺序表对象，等价于SL sl
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactAdd(&con);
//	ContactShow(&con);
//
//	//ContactDel(&con);
//	ContactModify(&con);
//	ContactShow(&con);
//	ContactFind(&con);
//
//	ContactDesTroy(&con);
//}
//int main()
//{
//	//SLTest01();
//	//SLTest02();
//	ContactTest01();
//	return 0;
//}


void menu()
{
	printf("******************通讯录******************\n");
	printf("*******1.增加联系人   2.删除联系人********\n");
	printf("*******3.修改联系人   4.查找联系人********\n");
	printf("*******5.展示联系人   0.   退出  *********\n");
	printf("******************************************\n");
}

int main()
{
	int op = -1;
	Contact con;
	ContactInit(&con);

	do {
		menu();
		printf("请选择您的操作：\n");
		scanf("%d", &op);

		//要根据对应的op执行不同的操作
		switch (op)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("退出通讯录....\n");
			break;
		default:
			printf("输入错误，请重新选择您的操作！\n");
			break;
		}
	} while (op != 0);

	ContactDesTroy(&con);
	return 0;
}