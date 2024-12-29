#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char diandao(char s[], int key)
{
    key = key % 26;
    for (int i =0 ; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] + key > 'z' || s[i] + key > 'Z')
            {
                s[i] = s[i] + key - 26;
            }
            else if (s[i] + key < 'a' || s[i] + key < 'A')
            {
                s[i] = s[i] + key + 26;
            }
            else
            {
                s[i] = s[i] + key;
            }
        }
    }
}

int main()
{
    int key;
    char s[100] = {0};
    scanf("%d", &key);
    getchar();
    fgets(s, 100, stdin);
    diandao(s, key);
    printf("%s", s);
    return 0;
}