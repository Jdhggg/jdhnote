/*#include <stdio.h>
// 输入3个整数，输出其中最大的数
int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = 0;
    if ( a > b ) 
    {
        if ( a > c ) 
        {            
            max = a;//
        } 
           else 
           {
            max = c;
           }
    }  
     else 
     {
        if  (b > c)//
        {
            max = b;
        } 
        else 
        {            
            max = c; //
        }
     }
    printf("%d\n", max);
    return 0;
}
*/
// 输入一个整数，输出其逆序数字
/*#include <stdio.h>
int reverse(int number)
{
int digit, flag, res;  
res = 0;
    flag = number < 0 ? -1 : 1;
    if (flag == -1){//负数取正
        number = - number;
    }
    do{
        digit = number % 10;
        res = res * 10 + digit;

        number /= 10;
    }while (number != 0);
    return flag * res;
}
int main()
{
    int number;
    scanf("%d", &number);
    printf("%d\n",reverse(number));
}*/
//求1+1/2!+...+1/n! 的值
/*#include <stdio.h>

int main() {
    int n, i, j;
    double sum = 1.0;    // 初始化sum为1.0，因为第一个项是1
    double factor;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factor = 1.0;    // 每次外层循环重新初始化factor为1

        for (j = 1; j <= i; j++) {
            factor = factor * j;    // 计算i的阶乘
        }

        sum = sum + 1.0 / factor;   // 累加1/i!
    }

    printf("%.8f\n", sum);
    return 0;
}
*/
//输入一个正整数n(1<=n<=9)，计算并输出s=1+12+123+1234+12...n(n位数)的和
/*#include <stdio.h>
int main()
{
    int s,n,i;
    double t;
scanf("%d", &n);
s = 0;        
t = 0.1;
for(i = 1; i <= n; i++){
t=t*10;    
s = s + t;
}
printf("%d\n", s);

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num, s;
for(num = 1; num <= 100; num++){
    s = 0;
    do{
       s = s + num % 10;
       num = num / 10;
    }while(num != 0);
    printf("%d\n", s);
}
}
#include<stdio.h>

int main(void)
{
	double i=1;
	double eps,sum=0,re=1;
	scanf("%le", &eps);
	while(re>=eps)
    {
		sum = sum + re;
		re = re * i/(2*i+1);
		i = i + 1;
	}
	sum = sum + re;
	printf("PI = %.5f",2*sum);
	return 0;
}


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            printf("1*1=1\n");
            break;  
             case 2:
            printf("1*1=1\n1*2=2   2*2=4\n");
            break;  
         case 3:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n");
            break;
         case 4:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n1*4=4   2*4=8   3*4=12  4*4=16\n");
            break;
            case 5:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n1*4=4   2*4=8   3*4=12  4*4=16\n1*5=5   2*5=10  3*5=15  4*5=20  5*5=25\n");
            break;
            case 6:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n1*4=4   2*4=8   3*4=12  4*4=16\n1*5=5   2*5=10  3*5=15  4*5=20  5*5=25\n1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36\n");
            break;
            case 7:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n1*4=4   2*4=8   3*4=12  4*4=16\n1*5=5   2*5=10  3*5=15  4*5=20  5*5=25\n1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36\n1*7=7   2*7=14  3*7=21  4*7=28  5*7=35  6*7=42  7*7=49\n");
            break;
             case 8:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n1*4=4   2*4=8   3*4=12  4*4=16\n1*5=5   2*5=10  3*5=15  4*5=20  5*5=25\n1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36\n1*7=7   2*7=14  3*7=21  4*7=28  5*7=35  6*7=42  7*7=49\n1*8=8   2*8=16  3*8=24  4*8=32  5*8=40  6*8=48  7*8=56  8*8=64\n");
            break;
              case 9:
            printf("1*1=1\n1*2=2   2*2=4\n1*3=3   2*3=6   3*3=9\n1*4=4   2*4=8   3*4=12  4*4=16\n1*5=5   2*5=10  3*5=15  4*5=20  5*5=25\n1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36\n1*7=7   2*7=14  3*7=21  4*7=28  5*7=35  6*7=42  7*7=49\n1*8=8   2*8=16  3*8=24  4*8=32  5*8=40  6*8=48  7*8=56  8*8=64\n1*9=9   2*9=18  3*9=27  4*9=36  5*9=45  6*9=54  7*9=63  8*9=72  9*9=81\n");
            break;
            
    }
}
#include <stdio.h>
int main ()
{
    int n=0;
    scanf ("%d",&n);
    for (int i=1;i <= n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d*%d=%d   ",j,i,j*i);
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int n=0;
    char ch;
    double shengao=0;
    double x=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%c %lf",&ch,&shengao);
        switch(ch)
        {
            case 'F':
        x=1.09*shengao;
        printf("%.2f\n",x);
        break;
        case 'M':
        x=shengao/1.09;
        printf("%.2f\n",x);
        break;
        }
    }
}
#include <stdio.h>
int main ()
{
    char ch;
    int n=0;
    scanf("%c",&ch);
    n = ch - 'A' + 1;
   for (int i=1;i<=n;i++)
   {
      for (int j=1;j<=40 -n +1;i++)
      {
          printf(" ");
      }
       if (i==n||i==1)
       {  break;  }
       for (char t = 'A';t<=ch;t++)
       {
           printf("%c",t);
       }
       for (int x=1;x<=n-1;x++)
       {
           printf (" ");
       }
       for (char t = 'A';t<=ch;t++)
       {
           printf("%c",t);
       }
       
   }
}
//完数寻找
//输出样例：
//6 = 1 + 2 + 3
//28 = 1 + 2 + 4 + 7 + 14
#include <stdio.h>
int main ()
{
    int shu[]={};
    int x=0,m=0,n=0,sum=0;
    int i=0,j=0;
    scanf("%d %d",&m,&n);
    i=m;
    for (i;i<=n;i++)
    {
        if (x%i==0)
        {
            sum = sum + i;
            shu[j]=i;
            j++;
        }
    }
    if (sum==x)
    {
        printf("%d = 1 ",x);
        for (int t=0;t<=j;t++)
        {
            printf("+ %d ",shu[t]);
        }

    }
}
// 完数寻找
// 输出样例：
// 6 = 1 + 2 + 3
// 28 = 1 + 2 + 4 + 7 + 14
#include <stdio.h>

int main() {
    int m = 0, n = 0;

    // 输入范围，增加简单的错误处理

    scanf("%d %d", &m, &n);
    for (int x = m; x <= n; x++) {
        int sum = 0; 
        for (int i = 1; i <= x / 2; i++) {
            if (x % i == 0) {
                sum += i; // 累加约数
            }
        }
        if (sum == x) { 
            printf("%d = 1", x); 
            for (int i = 2; i <= x / 2; i++) { 
                if (x % i == 0) {
                    printf(" + %d", i);
                }
            }
            printf("\n"); // 换行
            // 无完数输出提示信息
            if (x == 1) {
                printf("None\n");
            }
        }
    }
    return 0; 
}
/////////////////////
#include<stdio.h>
int isPerfect(int x) {
    int flag;
    int sum = 0;
    for (int i = 1; i <= x/2; i++) {
        if (x%i == 0) sum += i;
    }
    if (sum == x) flag = 1;
    else flag = 0;
    return flag;
}
int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int flag = 0;
    for (int i = m; i <= n; i++) {
        if (isPerfect(i) == 1) {
            flag = 1;
            printf("%d = 1", i);
            for (int j = 2; j <= i/2; j++) {
                if (i%j == 0) printf(" + %d", j);
            }
            printf("\n");
        }
    }
    if (flag == 0) printf("None");
}*/
//n阶乘
int mayfac_n(int n)
{
for (int i = 1; i <= n; i++)
{
    n *= i;
}
return n;
}

//x的y次方
double mypow(double x, int y)
{
    for (int i = 1; i < y; i++)
    {
        x *= x;
    }
    return x;
}
//圆的面积
double PI(double u)
{
    const double pi = 3.1415926;
    double sum = 0.0;
    return 2.0* pi*u*u;
}
int main()
{
    printf ("%lf",mypow(3,2));
}
#include<stdio.h>

int main(void){
    double i=1;
    double eps,sum=0,x=1;
    scanf("%le", &eps);
    while(x>=eps){
        sum = sum + x;
        x = x * i/(2*i+1);
        i = i + 1;
    }
    sum = sum + x;
    printf("PI = %.5f",2*sum);
    return 0;
}
//奇数 函数
int oodnumber(int x)
{
    if (x % 2 == 0)
    {
        return x;
    }
    else
    {
        return 1;
    }
}
//质数函数
int prime(int x)
{
    int flag = 0;
    for (int i=2;i<=x/2;i++)
    {
        if (x%i==0)
        {
        flag=1;
        break;
        }
    }
        if (flag==1)
        {
            return ;
        }
        if (flag==0)
        {
            return x;
        }
}
