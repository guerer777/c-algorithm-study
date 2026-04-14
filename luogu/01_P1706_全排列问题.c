#include <stdio.h>

// 洛谷 P1706 全排列问题
void dfs(int pos, int n, int path[], int used[]);

int main(){
    int n = 0;
    scanf("%d",&n);
    int path[15];
    int used[15] = {0};
    dfs(0,n,path,used);
    return 0;
}

void dfs(int pos, int n, int path[], int used[]){
    if(pos == n){
        for(int i = 0;i<n;i++){
            if(i > 0) printf(" ");
            printf("%d",path[i]);
        }
        printf("\n");
        return;
    }

    for(int i = 1;i<=n;i++){
        if(used[i] == 0){
            used[i] = 1;
            path[pos] = i;
            dfs(pos + 1,n,path,used);
            used[i] = 0;
        }
    }
}