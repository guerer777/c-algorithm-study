//静态变量
#include <stdio.h>

void test()
{
    static int a = 5;
    a++;
    printf("%d ", a);
}

int main()
{
    int i = 0;
    while (i < 10)
    {
        test();
        i++;
    }
    return 0;
}