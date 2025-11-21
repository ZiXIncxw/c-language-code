#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
// 星期的枚举
enum Day
{
    Mon,    // 星期一
    Tues,   // 星期二
    Wed,    // 星期三
    Thur,   // 星期四
    Fri,    // 星期五
    Sat,    // 星期六
    Sun     // 星期日
};

// 性别的枚举
enum Sex
{
    MALE,    // 男
    FEMALE,  // 女
    SECRET   // 保密
};

// 颜色的枚举
enum Color
{
    RED,    // 红色
    GREEN,  // 绿色
    BLUE    // 蓝色
};

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",  RED);
        
    }
   
    return 0;
}



















