#include <stdio.h>
int F(long long da,long long xiao)
{
    long long flog=0;
    while (xiao != 0)
    {
        flog = da % xiao;
        da = xiao;
        xiao = flog;
    }
    return da;
}

int main()
{
    long long  n=0,m=0,k=0,w=0,u=0;
    scanf("%lld %lld",&n,&m);
    if (n == 0 || m == 0) 
    {
        return 1;
    }
    else
    { 
        k = F(n,m);//k=1
        u = (m/k)*(n/k);
        w = (m*n)/k;
        printf("%lld\n%lld\n",k,u);
        printf("%lld\n%lld\n",k,w);
    }
}