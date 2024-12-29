#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int he_zi[5000] = { 0 };
int q = 0;//加入盒子或移出盒子的球的编号的次数
int k = 0;//小球编号总和
int x = 0;//操作数
int flog = 0;//是否为加入操作
int t = 0;//小球总数
char fk = 0;//操作类型

//和为K的子数组的个数，返回个数
int subarraySum(int nums[], int size, int k)
{
    int count = 0;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            count++;
        }
    }

    return count;
}
void removeItem(int nums[], int size, int index)
{
    // 把索引 index 之后的所有元素向前移动一位
    for (int i = index; i < size - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
}


int main()
{
    scanf("%d %d", &q, &k);
    for (int i = 0; i < q; i++)
    {
        getchar();
        scanf("%c", &fk);
        getchar();
        scanf("%d", &x);

        if (fk == '+')
        {
            he_zi[flog] = x;
            flog++;
            t++;
        }
        else if (fk == '-')
        {
            int j = 0;
            for (j = 0; j < t; j++)
            {
                if (he_zi[j] == x)
                {
                    he_zi[j] = 0;
                    t--;
                    break;
                }
            }//  
            removeItem(he_zi, t, j);
        }
        int count = subarraySum(he_zi, t, k);
        printf("%d\n", count);
    }

    return 0;
}