// 2×n 타일링
#include <iostream>
#include <cstring>
using namespace std;

int dp[1001];
const int MOD = 10007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    dp[0] = 1, dp[1] = 2;
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }
    cout << dp[n-1] << "\n";

    return 0;
}