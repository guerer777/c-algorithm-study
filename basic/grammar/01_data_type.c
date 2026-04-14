//数据类型 / 变量 / 求和
#include <stdio.h>

// 全局变量
int a = 10;

int main()
{
    // 打印数据类型大小
    printf("%u\n",sizeof(char));
    printf("%u\n",sizeof(int));
    printf("%u\n",sizeof(short));
    printf("%u\n",sizeof(long));
    printf("%u\n",sizeof(long long));
    printf("%u\n",sizeof(float));
    printf("%u\n",sizeof(double));

    //局部变量与全局变量同名测试
    int a = 100;
    printf("a=%d",a);

    //两数求和
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("%d+%d=%d",num1,num2,sum);

    return 0;
}