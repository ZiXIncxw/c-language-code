#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main() {
//    int n;
//    int i = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int m = n % 10;
//        if (m % 2 == 1)
//        {
//            m = 1;
//        }
//        else
//        {
//            m = 0;
//        }
//
//        sum += m * pow(10, i);
//        i++;
//        n /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include <stdio.h>
//
//int fib(int n)
//{
//    if (n > 2)
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//    else {
//        return n;
//    }
//
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n - 1) + fib(n - 2);
//    printf("%d\n", ret);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int tmp = 0;
//    int arr[100001] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    char arr[8001];
//    scanf("%s", arr);
//    unsigned long long c = 0;
//    unsigned long long h = 0;
//    unsigned long long chn = 0;
//    for (char* p = arr; *p; p++) {
//        if (*p == 'C')//数C的个数
//            c++;
//        if (*p == 'H')//必须前面得是C才能组成CH,和前面每一个C都能组成一个CH
//            h += c;
//        if (*p == 'N')//同理只有前面是CH才能组成CHN，和前面的每个CH等能组成一个CHN
//            chn += h;
//    }
//    printf("%lld", chn);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int max = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        scanf("%d", &n);
//        if (n > max)
//        {
//            max = n;
//        }
//    }
//    printf("%d\n", max);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 90 && n <= 100)
//    {
//        printf("A\n");
//    }
//    else if (n >= 80 && n <= 89)
//    {
//        printf("B\n");
//    }
//    else if (n >= 70 && n <= 79)
//    {
//        printf("C\n");
//    }
//    else if (n >= 60 && n <= 69)
//    {
//        printf("D\n");
//    }
//    else if (n >= 0 && n <= 59)
//    {
//        printf("E\n");
//    }
//    else {
//        printf("F\n");
//    }
//
//    return 0;
//}





