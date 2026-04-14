//最大值函数
#include <stdio.h>

int Max(int x, int y)
{
    // 三目运算符求最大值
    return x > y ? x : y;
}

int main()
{
    int a = 0;
    int b = 0;
    printf("请依次输入两个整数并用空格隔开：");
    scanf("%d %d", &a, &b);

    int max = Max(a, b);
    printf("%d和%d,%d更大", a, b, max);
    return 0;
}