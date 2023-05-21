// 합분해
#include <iostream>
#define MOD 1000000000
using namespace std;

int n, k;
long long dp[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for(int i = 0; i <= n; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= k; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            for(int m = 0; m <= j; m++)
                dp[i][j] += dp[i - 1][m];
            dp[i][j] %= MOD;
        }
    }

    cout << dp[k][n] << "\n";
    
    return 0;
}