// 指针基础 1
#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;  // 定义指针变量p，指向变量a

    printf("a的值：%d\n", a);
    printf("a的地址：%p\n", &a);
    printf("p的值：%p\n", p);
    printf("*p的值：%d\n", *p);

    return 0;
}