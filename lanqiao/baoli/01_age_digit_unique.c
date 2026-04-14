#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

// 判断立方和四次方的所有数字是否0-9不重复
bool isAllDigitsUnique(long long cube, long long forth_power);

int main() {
    SetConsoleOutputCP(65001);

    // 蓝桥杯经典题：年龄立方是4位数，四次方是6位数，数字0-9不重复
    for (int age = 10; age < 30; age++) {
        long long cube = (long long)age * age * age;
        long long forth_power = cube * age;
        // 立方4位，四次方6位
        if (cube >= 1000 && cube < 10000 && forth_power >= 100000 && forth_power < 1000000) {
            if (isAllDigitsUnique(cube, forth_power)) {
                printf("年龄是:%d岁\n", age);
                printf("立方是:%lld\n", cube);
                printf("四次方是:%lld\n", forth_power);
            }
        }
    }
    return 0;
}

bool isAllDigitsUnique(long long cube, long long forth_power) {
    int count[10] = {0};

    // 检查立方的数字
    while (cube > 0) {
        int digit = cube % 10;
        if (count[digit] > 0)
            return false;
        count[digit]++;
        cube /= 10;
    }

    // 检查四次方的数字
    while (forth_power > 0) {
        int digit = forth_power % 10;
        if (count[digit] > 0)
            return false;
        count[digit]++;
        forth_power /= 10;
    }

    // 必须0-9每个数字只用1次
    for (int i = 0; i < 10; i++) {
        if (count[i] != 1)
            return false;
    }
    return true;
}