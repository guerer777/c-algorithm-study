#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    long long dp[100][100] = {0};

    for(int i = 1;i <= m;i++){
        dp[1][i] = 1;
    }
    for(int j = 1;j <= n;j++){
        dp[j][1] = 1;
    }

    for(int i = 2;i<= n;i++){
        for(int j = 2;j <= m;j++){
            if(i % 2 == 0 && j % 2 == 0){
                dp[i][j] = 0;
            }else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }

    printf("%lld",dp[n][m]);
    return 0;
}