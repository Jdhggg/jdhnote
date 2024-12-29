#include <stdio.h>
#include <string.h>

// 旋转字符串
void cha_ru(char shu[], int len, int shift) 
{
    char temp[501] = {'\0'};
    for (int i = 0; i < len; i++)
    {
        temp[i] = shu[(i + shift) % len];
    } 
    printf("%s ", temp);
}


void zhu_he(char str[11][501], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        int len = strlen(str[i]);  
        for (int shift = 0; shift < len; shift++) 
        {
            cha_ru(str[i], len, shift);  
        }
        printf("\n"); 
    }
}

int main() 
{
    char str[11][501] = {'\0'};
    int n = 0;
    scanf("%d", &n);  
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", str[i]);  
    }
    zhu_he(str, n);  
    return 0;
}
