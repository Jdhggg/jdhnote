#include <stdio.h>
#include <string.h>

// 判断第n位是否为1
int isone(char a, int n) {
    return ((a & (1 << n)) >> n);
}

// 清除第n位为0
char clearBit(char a, int n) {
    return a & (~(1 << n));
}

// 设置第n位为1
char setBit(char a, int n) {
    return a | (1 << n);
}

// 第n位变换
char cryptChar(char a, int n) {
    char b;
    if (isone(a, n))
        b = clearBit(a, n);
    else
        b = setBit(a, n);
    return b;
}

// 字符串加密
void cryptString(char *s, int n) {
    int i = 0;
    while (s[i]) {
        s[i] = cryptChar(s[i], n);
        i++;
    }
}

int main() {
    char s[] = "Hello! My name is Xiao Li!";
    int n = 2;
    printf("原串: %s\n", s);
    cryptString(s, n);
    printf("加密: %s\n", s);
    cryptString(s, n);
    printf("解密: %s\n", s);
    return 0;
}