#include <stdio.h>

// 洛谷 P1157 组合的输出
void dfs(int pos, int n, int m, int path[], int *len);

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int path[15];
    int len = 0;
    dfs(1, n, m, path, &len);
    return 0;
}

void dfs(int pos, int n, int m, int path[], int *len){
    if(*len == m){
        for(int i = 0; i<m; i++){
            if(i > 0) printf(" ");
            printf("%d",path[i]);
        }
        printf("\n");
        return;
    }

    if((n - pos + 1) < (m - *len)){
        return;
    }

    dfs(pos + 1, n, m, path, len);
    path[*len] = pos;
    (*len)++;
    dfs(pos + 1, n, m, path, len);
    (*len)--;
}