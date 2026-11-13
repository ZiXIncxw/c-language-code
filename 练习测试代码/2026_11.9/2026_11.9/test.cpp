#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 1. 从键盘上输入十个小于100的整数，输出偶数的个数和偶数和。
void problem1() {
    int num, count = 0, sum = 0;
    printf("=== 第1题 ===\n");
    printf("请输入10个小于100的整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            count++;
            sum += num;
        }
    }
    printf("偶数的个数为：%d，偶数和为：%d\n\n", count, sum);
    // 清空输入缓冲区，防止影响后面的输入
    while (getchar() != '\n');
}

// 2. 从键盘输入小于100的正整数n，找出在n-100以内的自然数中可以 被13整除第一个数。
void problem2() {
    int n, found = 0;
    printf("=== 第2题 ===\n");
    printf("请输入一个小于100的正整数n：");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("输入错误，请输入小于100的正整数。\n\n");
        return;
    }

    for (int i = n; i <= 100; i++) {
        if (i % 13 == 0) {
            printf("在%d到100以内，第一个能被13整除的数是：%d\n\n", n, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("在%d到100以内没有能被13整除的数。\n\n", n);
    }
    while (getchar() != '\n');
}

// 3. 输出1~1000之间既能够被13整除又能被5整除的数。
void problem3() {
    printf("=== 第3题 ===\n");
    printf("1~1000之间既能被13整除又能被5整除的数有：\n");
    for (int i = 1; i <= 1000; i++) {
        // 能被13和5同时整除，即能被65整除
        if (i % 13 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
}

// 4. 从1~12之间任取3个互不相同的整型数，输出其和能被6整除的数的个数。
void problem4() {
    int count = 0;
    printf("=== 第4题 ===\n");
    // 使用三层循环遍历所有组合，i<j<k 保证互不相同且不重复计算
    for (int i = 1; i <= 12; i++) {
        for (int j = i + 1; j <= 12; j++) {
            for (int k = j + 1; k <= 12; k++) {
                if ((i + j + k) % 6 == 0) {
                    count++;
                    // 如果想看具体是哪些数，可以取消下面这行的注释
                    // printf("(%d, %d, %d) ", i, j, k); 
                }
            }
        }
    }
    printf("1~12之间任取3个互不相同的数，其和能被6整除的组合共有：%d 个\n\n", count);
}

// 5. 输出“水仙花数”。所谓“水仙花数”是一个三位整数，其各个位数的立方和等于它本身。
void problem5() {
    printf("=== 第5题 ===\n");
    printf("100~999之间的“水仙花数”有：\n");
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;        // 百位
        int b = (i / 10) % 10;  // 十位
        int c = i % 10;         // 个位
        if (a * a * a + b * b * b + c * c * c == i) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
}

// 6. 用公式计算π的值。(精度要求最后一项的绝对值小于 10^-4)
void problem6() {
    printf("=== 第6题 ===\n");
    double pi_4 = 0.0; // 存放 π/4 的值
    double term = 1.0; // 当前项的值
    int denominator = 1; // 分母
    int sign = 1; // 符号

    // 精度要求：1/n < 10^-4，也就是当前项的绝对值 >= 1e-4 时继续循环
    while (fabs(term) >= 1e-4) {
        pi_4 += term;
        denominator += 2;   // 分母 1, 3, 5, 7...
        sign = -sign;       // 符号交替
        term = sign * (1.0 / denominator);
    }

    double pi = pi_4 * 4;
    printf("计算出的π值为：%f\n\n", pi);
}

// 7. 输出Fibonacci数列的前40项，Fibonacci数列为：1, 1, 2, 3, 5, 8...
void problem7() {
    printf("=== 第7题 ===\n");
    long long a = 1, b = 1, c;
    printf("Fibonacci数列前40项为：\n");
    printf("%lld %lld ", a, b);
    for (int i = 3; i <= 40; i++) {
        c = a + b;
        printf("%lld ", c);
        a = b;
        b = c;
        // 每10个数换行，方便查看
        if (i % 10 == 0) printf("\n");
    }
    printf("\n\n");
}

// 8. 输入一行以回车结束的字符，分别统计出其中英文字母、数字和其他字符的个数。
void problem8() {
    printf("=== 第8题 ===\n");
    int letters = 0, digits = 0, others = 0;
    char ch;

    printf("请输入一行字符（回车结束）：\n");
    // 注意：因为前面可能有scanf留下的回车符，这里先读取并丢弃一个空行
    // 实际运行中如果发现跳过了输入，可以用 getchar(); 吃掉前面的回车
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }
    printf("英文字母个数：%d\n", letters);
    printf("数字个数：%d\n", digits);
    printf("其他字符个数：%d\n\n", others);
}

int main() {
    // 依次调用各题函数
    //problem1();
    //problem2();
    //problem3();
    //problem4();
    //problem5();
    //problem6();
    //problem7();

    // 第8题用到 getchar，为了防止前面输入残留的回车符直接结束读取，
    // 在调用 problem8 之前先清空缓冲区
    printf("请按回车键进入第8题...\n");
    while (getchar() != '\n');
    problem8();

    printf("所有题目运行完毕！\n");
    return 0;
}