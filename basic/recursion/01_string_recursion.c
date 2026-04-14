#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* f(int n);

int main(){
    int n;
    scanf("%d",&n);
    char * res = f(n);
    printf("%s",res);
    free(res);
    return 0;
}

char* f(int n){
    if(n == 1){
        char * s = (char*)malloc(2*sizeof(char));
        s[0] = 'A';
        s[1] = '\0';
        return s;
    }else{
        char * left = f(n - 1);
        int len_left = strlen(left);
        char mid = 'A' + n - 1;
        int total_len = len_left * 2 + 2;
        char * new_str = (char*)malloc(total_len * sizeof(char));
        strcpy(new_str,left);
        new_str[len_left] = mid;
        strcpy(new_str+len_left+1,left);
        free(left);
        return new_str;
    }
}