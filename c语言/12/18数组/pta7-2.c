#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int shu[m][n];
    for (int i=0;i<m;i++)
        {
         for (int j=0;j<n;j++)
             {
                scanf("%d",&shu[i][j]);
             }
        }
     for (int i=0;i<m;i++)
        {
        int sum = 0;
         for (int j=0;j<n;j++)
             {
                sum += shu[i][j];
             }
             printf("%d\n",sum);
        }
            
}