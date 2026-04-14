// 格式化输入
#include <stdio.h>

int main() {
    int id = 0;
    float g1,g2,g3;
    scanf("%d;%f,%f,%f", &id, &g1, &g2, &g3);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, g1, g2, g3);
    return 0;
}