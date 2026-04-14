#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    int mid = 0;
    int flag = 0;
    int key = 0;

    printf("请输入要查找的数字>> ");
    scanf("%d", &key);

    while (left <= right)
    {
        mid = (left + right) / 2;
        if(arr[mid] == key)
        {
            printf("找到了,要查找的%d的索引为%d", key, mid);
            flag = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    
    if(flag == 0)
        printf("该数组中没有数字%d", key);
    return 0;
}