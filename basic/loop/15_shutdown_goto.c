#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(65001);
    char input[20] = {0};
    system("shutdown -s -t 120");
again:
    printf("请注意,你的电脑将在2分钟后关机,如果输入:NO,就取消关机");
    scanf("%s", input);
    if(strcmp(input, "NO") == 0)
    {
        system("shutdown -a");
    }
    else
        goto again;
    return 0;
}