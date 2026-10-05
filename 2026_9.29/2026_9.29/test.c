#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


#include <stdio.h>
int main()
{
    //学号姓名：67 S
    //学号姓名：68 L
    int id1, id2;        //两位同学学号
    char name1, name2;   //姓名（单个大写字母）
    int c1, dao1;        //第1位同学C语言、导论成绩
    int c2, dao2;        //第2位同学C语言、导论成绩
    int sum1, sum2;      //总分
    double avg1, avg2;   //平均分
    char grade1, grade2; //等级

    //输入提示
    printf("请输入第1位同学 学号、姓名、C语言、导论成绩：\n");
    scanf("%d %c %d %d", &id1, &name1, &c1, &dao1);
    printf("请输入第2位同学 学号、姓名、C语言、导论成绩：\n");
    scanf("%d %c %d %d", &id2, &name2, &c2, &dao2);

    //计算总分、平均分
    sum1 = c1 + dao1;
    avg1 = sum1 / 2.0;
    sum2 = c2 + dao2;
    avg2 = sum2 / 2.0;

    //判断第一位同学等级
    if (avg1 >= 90)
        grade1 = 'A';
    else if (avg1 >= 80)
        grade1 = 'B';
    else if (avg1 >= 70)
        grade1 = 'C';
    else if (avg1 >= 60)
        grade1 = 'D';
    else
        grade1 = 'E';

    //判断第二位同学等级
    if (avg2 >= 90)
        grade2 = 'A';
    else if (avg2 >= 80)
        grade2 = 'B';
    else if (avg2 >= 70)
        grade2 = 'C';
    else if (avg2 >= 60)
        grade2 = 'D';
    else
        grade2 = 'E';

    //格式化输出表格
    printf("\n序号\t学号\t姓名\tC语言\t导论\t总分\t平均分\t等级\n");
    printf("1\t%d\t%c\t%d\t%d\t%d\t%.1f\t%c\n", id1, name1, c1, dao1, sum1, avg1, grade1);
    printf("2\t%d\t%c\t%d\t%d\t%d\t%.1f\t%c\n", id2, name2, c2, dao2, sum2, avg2, grade2);

    return 0;
}







