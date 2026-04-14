#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(65001);
    char arr1[] = {"welcome to the speech contest!!!"};
    char arr2[] = {"********************************"};
    int left = 0;
    int right = strlen(arr2)-1;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];

        Sleep(500);
        system("cls");

        left++;
        right--;
        printf("%s\n", arr2);
    }
    return 0;
}