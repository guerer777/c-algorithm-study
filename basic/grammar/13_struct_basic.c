//结构体
#include <stdio.h>

// 结构体定义
struct Stu
{
    char name[20];
    int age;
    char gender[10];
};

int main()
{
    struct Stu s1 = {"张三", 18, "男"};
    printf("%s %d %s", s1.name, s1.age, s1.gender);
    return 0;
}