#include <stdio.h>

int swap(int *x,int *y)
{
    int jh=0;
    jh = *x;
    *x = *y;
    *y = jh;
}


int main()
{
    int shu[10];
    int shu1[10];
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        {
            scanf("%d",&shu[i]);
        }
   for (int u=0;u<n;u++)
       {
        shu1[u] = shu[u];      
       }
   for (int j=0;j<n-1;j++) 
       {
        for (int k=0;k<n - 1 -j;k++)
            {
                if (shu[k] > shu[k + 1])
                    {
                        swap(&shu[k],&shu[k+1]);
                    }
            }
       }

        for (int ch=0;ch<n;ch++)
            {
              if (shu1[ch] == shu[0])
              {
                swap(&shu1[0],&shu1[ch]);
                break;
              }
            }
        for (int ch=0;ch<n;ch++)
            {
              if (shu1[ch] == shu[n -1])
              {
                swap(&shu1[n - 1],&shu1[ch]);
                break;
              }
            }
        for (int i=0;i<n;i++)
          {
             printf(" $%d$ ",shu1[i]);
          }
}