#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int i = 0;
    for(i=1; i<101; i++)
    {
        if(i%3 == 0)
            printf("%d ", i);
    }
    return 0;
}