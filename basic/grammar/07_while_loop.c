//while 循环
#include <stdio.h>

int main()
{
    int line = 0;
    while (line < 10)
    {
        printf("敲代码：%d\n", line);
        line++;
    }

    if (line == 10)
    {
        printf("good!");
    }
    else
    {
        printf("继续");
    }
    return 0;
}