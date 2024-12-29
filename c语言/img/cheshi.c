#include <stdio.h>

int main()
{


    char str[2] = {0};
    int key = 28;
    key = key % 26;
    str[0] = 'i';
    str[0] = str[0] + key;
    printf("%c %d", str[0], str[1]);
    return 0;
}