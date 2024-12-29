/* #include<stdio.h>

double fun(int n)
{
    double f;
    if (n==0 || n==1)
        f = 1;
    else
        f = n * fun(n-1);
    return f;
}

int main( )
{
    int n;
    double f;
    scanf("%d", &n);
    f = fun (n);
    printf("%.0f", f);
    return 0;
} */
//本程序的功能是：从键盘输入n个学生（n不超过100）某门课的成绩，统计其中不及格（60分以下）的人数。
/* #include <stdio.h>
#define N 100    

int getFailNum(float score[], int n)  /* 函数功能：统计不及格（60分以下）的人数 
{  
    int  i, count = 0;
    for (i=0; i<n; i++) 
        if ( score[i] < 60 ) 
          count++;
    return count;  
} 

int main()    
{ 
    float score[N];
    int i, n, fail;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%f", &score[i]);
    fail =  getFailNum(score, n); 
    printf("不及格人数为%d\n", fail);
    return 0;
}
 */
//本题目要求：任意输入一个整数n，求n以内的偶数和。
/* #include <stdio.h>
int main()
{
int sum(int k);
int n,s;
scanf("%d",&n);
s = sum (n);
printf("sum=%d\n",s);
return 0;
}

int sum(int k)
{
int i,s=0;
for(i=2;i<=k;i=i+2)
s=s+i;
return s;
} */
//输出 1 到 100 之间的所有完数。要求定义和调用函数is(n)判断n是否为完数，若n为完数则返回1，否则返回0。
//完数就是因子和与它本身相等的数，6是完数（6=1+2+3），1不是完数
/* #include <stdio.h>
int is(int n); 

int main(void)
{   
    int i;    
   
    for (i = 1; i <= 100; i++){
        if ( is(i) ){
            printf("%d ", i);
        }
    }
        
    return 0;
}

int is (int n)
{   
    int i, sum;

    sum = 0;
    for (i = 1; i <= n/2; i++){
        if (n % i == 0){
            sum = sum + i;
        }
    }
    if (sum == n) {
        return 1;
    }else{ 
        return 0;
    }
} */
//一个大于1的自然数N，如果除了1和它本身之外，不能被其他自然数整除，换句话说，就是该数N除了1和它本身以外不再有其他的因数，则N为素数（质数）。
//下列程序中，函数prime的功能是判断参数n是否为一个素数，是则返回1，不是则返回0。
//在主函数中遍历10到20之间的整数，是素数的就输出到屏幕（每个数字占5列，右对齐）。
/* # include <stdio.h> 

int prime(int n)  /*判断n是否为一个素数，是则返回1，不是则返回0
{
    int i, flag;
    if (n<=1) 
        return 0;
    flag = 1;
    for (i=2; i<=n/2; i++)
        if (n%i==0)
        {
            flag = 0;
            break;
        }
    return flag;        
}  

int main( )                              
{    
    int n;
    for (n=10; n<=20; n++)
        if ( prime(n) )    /*如果n是素数，则输出n
            printf("%5d", n);
    return 0;
}      */
/* #include <stdio.h>

int even( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    if (even(n))
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);
    
    return 0;
}

even(n)
{
    if (n == 0)
        return 1;
    else if(n%2 == 0)
        return 1;
    else 
        return 0;
} */
//算出从n个不同元素中取出m个元素（m≤n）的组合数。
//建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。
/* #include <stdio.h>
double fact(double n)
{
    int s=1;
    for (int i = 1;i <= n;i++)
    {
        s = s * i;
    }
    return s;
}
int main()
{
    int n, m;
    scanf("%d %d",&m, &n);
    double result = fact(n) / (fact(m) * fact(n-m));
    printf("result = %.0f", result);
    return 0;
} */
//将26个英文字母按顺时针方向排成一个圆环。密钥是一个整数。
//加密的方法：
//若密钥 key≥0，则从明文字母开始按顺时针方向走 ∣key∣ 步得到密文字母；
//若密钥 key<0，则从明文字母开始按逆时针方向走 ∣key∣ 步得到密文字母。
//请编写加密程序，输入密钥(任意整数)和明文电文(含大、小写字母，数字和其他符号)，对电文中的大、小写字母进行加密，并输出密文电文。
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 加密函数，顺时针或逆时针根据密钥方向
void encrypt(int key, char c[]) {
    key = (key % 26 + 26) % 26; // 处理负密钥，确保 key 始终为非负数
    for (int i = 0; c[i] != '\0'; i++) {
        if (isupper(c[i])) { // 大写字母
            c[i] = (c[i] - 'A' + key) % 26 + 'A';
        } else if (islower(c[i])) { // 小写字母
            c[i] = (c[i] - 'a' + key) % 26 + 'a';
        }
    }
}

int main() {
    int key;
    char c[1000] = {0};

    printf("请输入密钥：");
    scanf("%d", &key);
    getchar(); // 清除缓冲区

    printf("请输入明文电文：");
    fgets(c, sizeof(c), stdin);

    // 去掉换行符
    size_t len = strlen(c);
    if (len > 0 && c[len - 1] == '\n') {
        c[len - 1] = '\0';
    }

    // 加密
    encrypt(key, c);

    // 输出密文
    printf("%s\n", c);
    return 0;
}
