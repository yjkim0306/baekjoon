// 전깃줄
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int dp[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    pair<int, int> p[101];
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p + 1, p + n + 1);
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(p[i].second > p[j].second)
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }

    cout << n - ans << "\n";

    return 0;
}