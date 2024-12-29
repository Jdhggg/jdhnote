//函数声明格式示例
#include <stdio.h>
int Fux(int x,int y);
int Fux(x,y)//类型无需统一.无函数类型默认为int
{
int sum;
sum = x*y+ 10;
return sum;//1.只能返回一个值 2.数据类型自动转换
}
int main()
{
    int x;
    x = Fux(2,3);
    printf("%d\n",x);
    return 0;
}
