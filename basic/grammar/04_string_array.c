//字符数组 / 字符串
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ch1[] = {'a', 'b', 'c', 'd'};
    char ch2[] = "abc";

    printf("%s\n", ch1);
    printf("%s\n", ch2);

    int len1 = strlen(ch1);
    int len2 = strlen(ch2);

    printf("%d\n", len1);
    printf("%d\n", len2);

    system("pause");
    return 0;
}