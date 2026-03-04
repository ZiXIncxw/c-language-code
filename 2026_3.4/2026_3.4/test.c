#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>   // 需要包含头文件

void rotate(int* nums, int numsSize, int k)
{
   
    if (numsSize == 0)
        return;  // 处理空数组
    // 动态分配与原数组等大的临时空间
    int* newArr = (int*)malloc(numsSize * sizeof(int));
    if (newArr == NULL) {
        // 分配失败的处理，可根据实际情况决定，这里直接返回
        return;
    }
    k %= numsSize;
    // 将元素放到新数组的正确位置
    for (int i = 0; i < numsSize; ++i) {
        newArr[(i + k)%numsSize] = nums[i];
    }
    // 将新数组内容复制回原数组
    for (int i = 0; i < numsSize; ++i) {
        nums[i] = newArr[i];
    }
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    
    // 释放动态内存
    free(newArr);
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7 };

    rotate(arr,7,3);
   
    return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//void rotate(int* nums, int numsSize, int k)
//{
//    if (numsSize == 0)
//        return;
//    int* newArr = (int*)malloc(numsSize * sizeof(int));
//    if (newArr == NULL) {
//        return;
//    }
//    k %= numsSize;
//    for (int i = 0; i < numsSize; ++i) {
//        newArr[(i + k) % numsSize] = nums[i];  // 关键修正
//    }
//    for (int i = 0; i < numsSize; ++i) {
//        nums[i] = newArr[i];
//    }
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    }
//    free(newArr);
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    rotate(arr, 7, 3);
//    return 0;
//}





