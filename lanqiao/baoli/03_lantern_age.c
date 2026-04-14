#include <stdio.h>

// 蓝桥杯经典题：元宵灯会 年龄问题
int main() {
    int age1, age2;
    // 暴力枚举所有年龄可能
    for (age1 = 1; age1 <= 50; age1++) {
        for (age2 = 1; age2 <= 50; age2++) {
            // 条件：年龄积=6倍和 + 不双胞胎 + 差值≤8
            if (age1 < age2 && age1 * age2 == (age1 + age2) * 6 && (age2 - age1) <= 8) {
                printf("较小妹妹年龄：%d\n较大妹妹年龄：%d\n", age1, age2);
            }
        }
    }
    return 0;
}