#include <stdio.h>
#include <string.h>

int flog = 0;
int cont = 0;

long long ti_qu(char str[])
{
    long long sum = 0;
    int i = 0;
    while (str[i] != '\0')
        {
            if ((str[i] >= '0') && (str[i] <= '9'))
            {
             sum = sum*10 + (str[i] - '0');
             flog++;
            }
            cont++;
            i++;
        }
    return sum;
}


int main()
{
    char str[81];
    fgets(str,81,stdin);
    long long dx = ti_qu(str);
   // printf ("%d\n",flog);
   // printf ("%d\n",cont);
    if (flog)
       printf("%lld",dx);
    return 0;
}