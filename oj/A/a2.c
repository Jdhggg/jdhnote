#include <stdio.h>
#include <string.h>
int main() 
{
    int key;
    char s[100];
    scanf("%d", &key);
    getchar();
    fgets(s, 100, stdin);
    key = key % 26;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z'))
        {
            if (97 <= s[i] + key && s[i] + key <= 122)
            {
                s[i] = s[i] + key;
            }
            else if (97 > s[i] + key)
            {
                s[i] = s[i] + key + 26;
            }
            else if (122 < s[i] + key)
            {
                s[i] = s[i] + key - 26;
            }
            

        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (65 <= s[i] + key && s[i] + key <= 90)
            {
                s[i] = s[i] + key;
            } 
            else if (65 > s[i] + key) 
            {
                s[i] = s[i] + key + 26;
            } 
            else if (90 < s[i] + key) 
            {
                s[i] = s[i] + key - 26;
            }
        }
        else
        {
            continue;
        }
    }
    printf("%s", s);
    //printf("%d\n",strlen(s));
    //printf("%d\n",s[3]);
    return 0;
}