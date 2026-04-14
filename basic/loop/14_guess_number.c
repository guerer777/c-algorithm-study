#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu(){
    printf("********欢迎来到猜数字游戏********\n");
    printf("1------------------------进入游戏\n");
    printf("0------------------------退出游戏\n");
}

void game(){
    int key = rand() % 100 +1;
    int num = 0;
    while (1)
    {
        printf("请输入你要猜的数字[1~100]>>");
        scanf("%d", &num);
        if(num == key){
            printf("恭喜你，猜对了\n");
            break;
        }
        else if(num > key)
            printf("猜大了\n");
        else if(num < key)
            printf("猜小了\n");
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    srand((unsigned int)time(NULL));
    int input = 0;

    do{
        menu();
        printf("请选择>>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    }while (input);
    return 0;
}