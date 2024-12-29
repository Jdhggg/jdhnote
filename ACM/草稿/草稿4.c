#include <stdio.h>
int main()
{
    int n=0,x=0;
    int sum=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if (x%2 == 0)
         sum = sum + x;
    }
    printf ("%d",sum);
}