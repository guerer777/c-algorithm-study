#include <stdio.h>

int main()
{
    int i = 0;
    for(i=101; i<=200; i+=2)
    {
        int j = 0;
        int flag = 1;
        for(j=2; j<=i-1; j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}