//分支语句
#include <stdio.h>

int main()
{
    printf("hello!");
    printf("are you ok?(1/0):");
    int reply = 0;
    scanf("%d", &reply);

    if (reply == 0)
    {
        printf("yes,i am fine!");
    }    
    else if (reply == 1)
    {
        printf("no");
    }
    return 0;
}