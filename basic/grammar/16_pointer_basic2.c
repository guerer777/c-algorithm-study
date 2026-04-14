// 指针基础 2
#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;

    printf("num = %d\n", num);
    printf("*ptr = %d\n", *ptr);

    // 通过指针修改变量的值
    *ptr = 200;
    printf("修改后 num = %d\n", num);

    return 0;
}