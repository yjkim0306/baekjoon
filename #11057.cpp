// 오르막 수
#include <iostream>
#define MOD 10007
using namespace std;

int dp[1001][10];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < 10; i++) dp[1][i] = 1;

    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j == 0)
            {
                dp[i][0] = 1;
                continue;
            }

            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]);
            dp[i][j] %= MOD;
        }
    }

    int res = 0;
    for(int i = 0; i < 10; i++) res = (res + dp[n][i]);

    cout << res % MOD << "\n";

    return 0;
}