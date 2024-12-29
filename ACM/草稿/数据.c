#include <stdio.h>

struct Data {
    long long id;
    char fa_huo[200];
    char shou_huo[200];
    char shi_chang[100];
    char di_chang[100];
    char kuai_di[100];
    char shi_jian[100];
    char shi_jian2[100];
    float jia_ge;
};

// 输入函数
void shuru(struct Data* data) {
    scanf("%lld", &data->id);
    getchar(); // 清除前面的换行符

    fgets(data->fa_huo, sizeof(data->fa_huo), stdin);
    data->fa_huo[strcspn(data->fa_huo, "\n")] = '\0'; // 去掉换行符

    fgets(data->shou_huo, sizeof(data->shou_huo), stdin);
    data->shou_huo[strcspn(data->shou_huo, "\n")] = '\0';

    fgets(data->shi_chang, sizeof(data->shi_chang), stdin);
    data->shi_chang[strcspn(data->shi_chang, "\n")] = '\0';

    fgets(data->di_chang, sizeof(data->di_chang), stdin);
    data->di_chang[strcspn(data->di_chang, "\n")] = '\0';

    fgets(data->kuai_di, sizeof(data->kuai_di), stdin);
    data->kuai_di[strcspn(data->kuai_di, "\n")] = '\0';

    fgets(data->shi_jian, sizeof(data->shi_jian), stdin);
    data->shi_jian[strcspn(data->shi_jian, "\n")] = '\0';

    fgets(data->shi_jian2, sizeof(data->shi_jian2), stdin);
    data->shi_jian2[strcspn(data->shi_jian2, "\n")] = '\0';

    scanf("%f", &data->jia_ge);
}

// 输出函数
void shuchu(struct Data* data) {
    printf("快递单号:%lld\n", data->id);
    printf("发货方:%s\n", data->fa_huo);
    printf("接收方:%s\n", data->shou_huo);
    printf("始发城市:%s\n", data->shi_chang);
    printf("目的城市:%s\n", data->di_chang);
    printf("快递服务商:%s\n", data->kuai_di);
    printf("发送时间:%s\n", data->shi_jian);
    printf("接收时间:%s\n", data->shi_jian2);
    printf("快递价格:%.2f\n", data->jia_ge);
}

int main() {
    struct Data data;  // 创建一个结构体变量来存储输入数据
    shuru(&data);  // 输入快递单据信息
    shuchu(&data); // 输出快递单据信息
    return 0;
}
