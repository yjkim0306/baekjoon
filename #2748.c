// 피보나치 수 2
#include <stdio.h>

int main()
{
    long long dp[91];

    int n;
    scanf("%d", &n);

    dp[0] = 0, dp[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    printf("%lld\n", dp[n]);

    return 0;
}