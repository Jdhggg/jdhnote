#include <stdio.h>

#define MAX_K 5000

int dp[MAX_K];  // dp[r] 表示和为 r mod k 的可能性
int q, k;       // 操作次数 q 和目标模值 k
int balls[5000]; // 存储盒子中的球的值
int t = 0;       // 当前盒子中的球的数量

// 更新 dp 数组，根据当前球的值 x 更新状态
void addBallToBox(int x) {
    int new_dp[MAX_K] = { 0 };
    
    // 使用当前 dp 数组状态更新新的 dp 数组
    for (int i = 0; i < k; i++) {
        if (dp[i] > 0) {
            int new_value = (i + x) % k;
            new_dp[new_value] = 1;
        }
    }
    
    // 更新 dp 数组
    new_dp[x % k] = 1;  // 加入新球时，单独处理它的模值
    for (int i = 0; i < k; i++) {
        dp[i] = new_dp[i];
    }
}

// 移除一个球时重新更新 dp 数组
void removeBallFromBox(int x) {
    // 我们需要重新计算 dp 数组，移除球后处理
    dp[0] = 1;  // 初始时，我们从空盒子开始
    for (int i = 0; i < t; i++) {
        addBallToBox(balls[i]);
    }
}

int main() {
    scanf("%d %d", &q, &k);
    
    // 初始化 dp 数组
    dp[0] = 1;  // 初始时，和为 0 对 k 取模的方案为 1（即不选择任何小球）

    for (int i = 0; i < q; i++) {
        char op;
        int x;
        scanf(" %c %d", &op, &x);

        if (op == '+') {
            balls[t++] = x;
            addBallToBox(x);  // 加入一个新球，更新 dp 数组
        } else if (op == '-') {
            // 移除一个球
            for (int j = 0; j < t; j++) {
                if (balls[j] == x) {
                    balls[j] = balls[t - 1];
                    t--;
                    break;
                }
            }
            // 清除 dp 数组，重新计算
            removeBallFromBox(x);
        }
        
        // 输出是否可以从当前小球中选出使得和对 k 取模为 0
        if (dp[0] > 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}
