#include <stdio.h>

int test()
{
    int n = 2;
    if (n > 1)
        return 1;
    return 2;
}

int main()
{
    int m = test();
    printf("%d\n", m);
    return 0;
}