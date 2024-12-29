#include <stdio.h>
#include <string.h>

void encrypt(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'Z' - (str[i] - 'A');
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'z' - (str[i] - 'a');
        }
    }
}

int main()
{
   char str[128];
   fgets(str,128,stdin);   
   encrypt(str);
   printf("%d\n",strlen(str)-1);
   printf("%s",str);
   return 0;
}