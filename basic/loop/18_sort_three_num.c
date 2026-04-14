#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int a = 0;
    int b = 0;
    int c = 0;
    int temp = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b)
    {
        temp = b;
        b = a;
        a = temp;
    }    
    if(a<c)
    {
        temp = c;
        c = a;
        a = temp;
    }
    if(b<c)
    {
        temp = c;
        c = b;
        b = temp;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}