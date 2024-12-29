#include <stdio.h>
int main()
{
    int *p = NULL;
    int *b = NULL;
    char *w[4] = {NULL};
    int a = 1;
    char str[10] = {'0'};
    int nums[5] = {2,3,4,5,6};
    p = &a;
    w[0] = &a;
    for (int k=0;k<4;k++)
    {
        w[k] = w[0] + k;
    }
    b = &nums[0];
    printf(" //%d//\n\t",&a);
    //b = b + 1;
    //printf(" %d %d %d %d \n",&nums[1] , b , *b, &nums[0]);
     for (int g=0;g<4;g++)
    {
        printf("%d %d\n\t ",w[g],*w[g]);
    }
    //
    int c = 0;
    int d = 0;
    printf("请输入 字位 和 改变的值 的值：");
    scanf("%d %d",&c,&d);
    *w[c] = d;
    for (int g=0;g<4;g++)
    {
        printf("%d ------> %d >>> %s\n\t ",w[g],*w[g],itoa(*w[g],str,2));
    }
    printf("%d",a);
}