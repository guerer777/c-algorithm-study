//三目运算符
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("请依次输入两数进行比较（用空格隔开）：");
    scanf("%d %d", &a, &b);
    a > b ? printf("%d > %d", a, b) : printf("%d < %d", a, b);

    return 0;
}