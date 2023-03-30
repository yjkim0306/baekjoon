// 파도판 수열
#include <iostream>
using namespace std;

long long dp[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 1;
        for(int j = 3; j < n; j++)
        {
            dp[j] = dp[j-2] + dp[j-3];
        }
        cout << dp[n-1] << "\n";
    }

    return 0;
}