// 연속합
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int dp[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];
    
    dp[0] = arr[0];
    
    int res = arr[0];

    for(int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        res = max(res, dp[i]);
    }

    cout << res << "\n";

    return 0;
}