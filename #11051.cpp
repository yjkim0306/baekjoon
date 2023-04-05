// 이항 계수 2
#include <iostream>
#define MOD 10007
using namespace std;

int dp[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        dp[i][0] = 1;
        dp[i][i] = 1;
        for(int j = 1; j < i; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i-1][j]) % MOD;
    }

    cout << dp[n][k] << "\n";
    
    return 0;
}