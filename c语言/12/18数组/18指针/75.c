#include <stdio.h>
#include <string.h>
int huei(char str[],int n)
    {
        int i=0;
        int dx=0;
         while (str[i] != '\0')
             {
              i++;
             }
        if (i%2 == 0)
           i = i -1;
        else 
           dx = 1;
        for (int j=0;j<=i/2;j++)
            {
                if (str[j] == str[i - 1 -dx - j])
                {
                    return 1;
                }
                
            }
    }

int main()
{
    char str[81];
    fgets(str,81,stdin);
    if (huei(str,81) == 1)
    {
        printf("yes\n");
    }
    else if (huei(str,81) == 0)
    {
        printf("no\n");
    }
    return 0;
}