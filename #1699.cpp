// 제곱수의 합
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    
    for(int i = 1; i <= n; i++)
    {
        dp[i] = i;
        for(int j = 1; j*j <= i; j++)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }

    cout << dp[n] << "\n";

    return 0;
}