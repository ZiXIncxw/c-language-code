#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int weight = 0;
//    int high = 0;
//    while (scanf("%d %d", &weight, &high) != EOF)
//    {
//        double BMI = 0.0;
//        BMI = weight / ((high / 100.0) * (high / 100.0));
//        if (BMI < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        if (BMI >= 18.5 && BMI <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        if (BMI > 23.9 && BMI <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        if (BMI > 27.9)
//        {
//            printf("Obese\n");
//        }
//    }
//    return 0;
//}
#include <stdio.h>
#include <math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    while (~scanf("%f %f %f", &a, &b, &c))
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            float dert = b * b - 4.0 * a * c;
            float x1 = (-b + sqrt(dert)) / 2.0 / a;
            float x2 = (-b - sqrt(dert)) / 2.0 / a;
            if (dert == 0.0)
            {
                printf("x1=x2=%.2f\n", x1);
            }
            if (dert > 0.0)
            {
                printf("x1=%.2f;x2=%.2f\n", x2, x1);
            }
            if (dert < 0.0)
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2 * a), sqrt(-dert) / (2 * a), -b / (2 * a), sqrt(-dert) / (2 * a));

            }
        }
    }
    return 0;
}
//sb
//¶ñÐÄ





