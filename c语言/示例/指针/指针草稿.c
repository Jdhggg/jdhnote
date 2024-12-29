#include <stdio.h>

int main()
{
    int *p = NULL;
    int *q = NULL;
    printf ("p = %p\n", p);
    printf ("q = %p\n", q);
    // printf ("a = %d\n", *p);
    //printf ("b = %d\n", *q);// 这里会报错，因为p和q都没有指向任何地址，所以不能取值。
    int a = 10;
    int b = 20;
    p = &a;
    q = &b;
    printf("a = %d\n", *p);//*P 指向a的地址并取值*/
    printf("b = %d\n", *q);//*q 指向b的地址并取值*/
    printf("p = %p\n", p);
    printf("q = %p\n", q);
}