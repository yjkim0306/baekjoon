// 이항 계수 2
#include <stdio.h>
#include <string.h>

int dp[1001][1001]; // dp[n][k] := nCk
int main()
{
    const int MOD = 10007;
    for(int i = 0; i <= 1000; i++)
    {
        memset(dp[i], 0, sizeof(int) * 1001);
    }
    int N, K;
    scanf("%d %d", &N, &K);
    for(int i = 1; i <= N; i++)
    {
        dp[i][0] = 1;
        dp[i][i] = 1;
        for(int j = 1; j < i; j++)
        {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD;
        }
    }
    printf("%d\n", dp[N][K]);

    return 0;
}