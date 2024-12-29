#include <stdio.h>

void swap(int *x,int *y)
{
    int twep;
    twep = *x;
    *x = *y;
    *y = twep;
}


void paixu(int nums[],int n)
{
    for (int i=0;i < n -1;i++)
    {
        for (int j = 0;j < n -i-1;j++)
        {
            if (nums[j]>nums[j+1])
                swap(&nums[j],&nums[j+1]);
       }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for (int k=0;k<n;k++)
    {
        scanf("%d",&nums[k]);
    }
    paixu(nums,n);
    for (int k=0;k<n;k++)
    {
        printf("%d",nums[k]);
    }
}
//argument
/* 冒泡排序（标志优化）
void bubbleSortWithFlag(int nums[], int size) {
    // 外循环：未排序区间为 [0, i]
    for (int i = size - 1; i > 0; i--) {
        bool flag = false;
        // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}/* 冒泡排序（标志优化）
void bubbleSortWithFlag(int nums[], int size) {
    // 外循环：未排序区间为 [0, i]
    for (int i = size - 1; i > 0; i--) {
        bool flag = false;
        // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}/* 冒泡排序（标志优化）
void bubbleSortWithFlag(int nums[], int size) {
    // 外循环：未排序区间为 [0, i]
    for (int i = size - 1; i > 0; i--) {
        bool flag = false;
        // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}/* 冒泡排序（标志优化）
void bubbleSortWithFlag(int nums[], int size) {
    // 外循环：未排序区间为 [0, i]
    for (int i = size - 1; i > 0; i--) {
        bool flag = false;
        // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}*/