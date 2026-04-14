#include <stdio.h>

int main()
{
    int day;
    while (scanf("%d", &day) != EOF)
    {
        switch (day)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("weekday\n");
                break;
            case 6:
            case 7:
                printf("weekend\n");
                break;    
            default:
                printf("输入错误");
                break;
        }
    }
    return 0;
}