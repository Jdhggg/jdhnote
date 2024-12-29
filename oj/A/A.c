#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char diandao(char* s, int key)
{
    // 1.判断key + —
    // 2.key≥0，则从明文字母开始按顺时针方向走 ∣key∣ 步得到密文字母；
    if (key >= 0)
    {
        key = key % 26;
        for (int i = 0; i < strlen(s); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                if ((s[i] + key > 'z' && s[i] >= 'a' && s[i] <= 'z') || (s[i] + key > 'Z' && s[i] >= 'A' && s[i] <= 'Z'))
                    s[i] = s[i] + key - 26;
                else
                    s[i] = s[i] + key;
             
            }
            else
                continue;
        }

    }
    // 3.key<0，则从密文字母开始按逆时针方向走 ∣key∣ 步得到明文字母；
    else
    {
        key = -key % 26;
        for (int i = 0; i < strlen(s); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                if ((s[i] - key < 'a' && s[i] >= 'a' && s[i] <= 'z') || (s[i] - key < 'A' && s[i] >= 'A' && s[i] <= 'Z'))
                    s[i] = s[i] - key + 26;
                else
                    s[i] = s[i] - key;
            }
            else
                continue;
        }
    }
}

int main()
{
    int key;
    char s[100] = { 0 };
    scanf("%d", &key);
    getchar();
    fgets(s, 100, stdin);
    diandao(s, key);
    printf("%s\n", s);
    return 0;
}


