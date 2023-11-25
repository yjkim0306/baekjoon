// 1, 2, 3 더하기 3
#include <iostream>
#define MOD 1000000009
using namespace std;

long long dp[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;

        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for(int i = 4; i <= n; i++)
            dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;

        cout << dp[n] % MOD << "\n";
    }
    return 0;
}