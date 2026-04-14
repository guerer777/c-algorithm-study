#include <stdio.h>

void dfs(int k,int n,int path[],int *len);

int main(){
    int path[15];
    int len = 0;
    int n;
    scanf("%d",&n);
    dfs(1, n, path, &len);
    return 0;
}

void dfs(int k,int n,int path[],int *len){
    if(k > n){
        for (int i = 0; i < *len ; i++){
            if(i > 0){
                printf(" ");
            }
            printf("%d",path[i]);
        }
        printf("\n");
        return;
    }

    dfs(k + 1, n, path, len);

    path[*len] = k;
    (*len)++;
    dfs(k + 1, n, path, len);
    (*len)--;
}