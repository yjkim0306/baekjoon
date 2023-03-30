// 2×n 타일링 2
#include <iostream>
using namespace std;

int dp[1001];
const int MOD = 10007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    dp[1] = 1;
    dp[2] = 3;
    
    int n;
    cin >> n;
    
    for(int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i-1] + 2 * dp[i-2]) % MOD;
    }
    
    cout << dp[n] << "\n";

    return 0;
}