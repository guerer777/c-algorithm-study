#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int n = 0;
    int i = 0;
    int arr[] = {1, 2, 3, 4, 5};
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        if(arr[i] == n)
            printf("%d在数组arr中的索引为%d", n, i);
    }
    if(i == 5)
        printf("数组arr中没有%d", n);
    return 0;
}