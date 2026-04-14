// 进制求和
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    // 输入十六进制、八进制
    scanf("%x %o",&a,&b);
    int sum = a + b;
    printf("%d",sum);

    return 0;
}