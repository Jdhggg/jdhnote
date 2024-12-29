#include <stdio.h>

int main() {
    int _lei; // 测试例数
    int ax, ay, bx, by, px, py;

    scanf("%d", &_lei);

    for (int i = 0; i < _lei; i++) {
        // 输入点和矩形边界
        scanf("%d %d %d %d %d %d", &px, &py, &ax, &ay, &bx, &by);
        if (px > ax && px < bx && py > ay && py < by) {
            printf("Inside\n");
        } else if ((px == ax || px == bx) && (py >= ay && py <= by) ||
                   (py == ay || py == by) && (px >= ax && px <= bx)) {
            printf("On\n");
        } else {
            printf("Outside\n");
        }
    }

    return 0;
}
