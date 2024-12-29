#include <stdio.h>
int main()
{
    int djh;
    scanf("%d",&djh);
    int shuzu[djh][djh];
    for (int i=0;i < djh;i++)
    {
        shuzu[i][0]=1;
        shuzu[i][i]=1;
    for (int j=1;j<i;j++)
    {
        shuzu[i][j] = shuzu[i-1][j] + shuzu[i-1][j-1];
    }
    }
    // shuzu[x][y] = [x-1][y] + [x-1][y-1]
        
    for (int i = 0; i < djh; i++) 
    {
        for (int j = 0; j <= i; j++) {
            printf("%d ", shuzu[i][j]);
        }
        printf("\n");
    }
}