#include <stdio.h>

// 蓝桥杯真题：判断数字是否包含 0/1/2/9，包含返回原数，否则返回0
long long check(long long num) {
    long long tmp = num;
    while (tmp > 0) {
        int digit = tmp % 10;
        if (digit == 0 || digit == 1 || digit == 2 || digit == 9) {
            return num;
        }
        tmp /= 10;
    }
    return 0;
}

int main() {
    long long n, sum = 0;
    scanf("%lld", &n);

    // 暴力遍历 1~n 求和
    for (long long i = 1; i <= n; ++i) {
        sum += check(i);
    }

    printf("%lld\n", sum);
    return 0;
}