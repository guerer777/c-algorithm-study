#include <stdio.h>

int main()
{
    int i = 1;
    int n = 1;
    int s = 1;    
    scanf("%d", &n);
    do{
        s = s*i;
        i++;
    }while (i<=n);
    printf("%d", s);
    return 0;
}