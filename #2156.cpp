// 포도주 시식
#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001];
int max_dp[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> dp[i];
    
    max_dp[1] = dp[1];
    max_dp[2] = dp[1] + dp[2];

    for(int i = 3; i <= n; i++)
    {
        max_dp[i] = max(max_dp[i-3] + dp[i-1] + dp[i], max(max_dp[i-2] + dp[i], max_dp[i-1]));
    }

    cout << max_dp[n] << "\n";

    return 0;
}