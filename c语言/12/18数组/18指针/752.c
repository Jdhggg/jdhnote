#include <stdio.h>
int main() 
{
    char str[81];
    fgets(str,81,stdin);
    int i=0;
         while (str[i] != '\0')
             {
              i++;
             }
    printf("%d",i);
}
