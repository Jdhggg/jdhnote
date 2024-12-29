#include <stdio.h>

int max_min(int *str)
{
    int flogmin = str[0];
    int flogmax = str[0];
    for (int i=0;i<10;i++)
    {
       if (str[i] > flogmax)
       {
        flogmax = str[i];
       }
       else if(flogmin > str[i])
       {
        flogmin = str[i];
       }
    }
    return flogmax - flogmin;
}

int main()
{
    int str[10];
    for (int j=0;j<10;j++)
    {
        scanf("%d",&str[j]);
    }
    printf("difference value = %d",max_min(str));
}