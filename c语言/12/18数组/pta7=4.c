#include <stdio.h>
#include <string.h>

int main() {
    char input[101]; // 存储输入数字字符串，长度不超过100
    int count[10] = {0}; // 用于统计数字0-9出现的次数
    scanf("%s", input);

    // 遍历输入字符串，统计每个数字出现的次数
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            count[input[i] - '0']++;
        }
    }

    // 找出出现次数最多的数字
    int max_count = 0, lucky_number = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count || (count[i] == max_count && i > lucky_number)) {
            max_count = count[i];
            lucky_number = i;
        }
    }

    printf("%d\n", lucky_number);
    return 0;
}