//scanf 循环读取
#include <stdio.h>

int main() {
    int iq = 0;
    // scanf读取失败返回EOF(-1)
    while (scanf("%d", &iq) == 1)
    {
        if (iq >= 140)
        {
            printf("Genius");
        }
    }
    return 0;
}