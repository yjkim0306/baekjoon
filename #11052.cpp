// 카드 구매하기
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    dp[0] = 0;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++) dp[i] = max(dp[i], dp[i-j] + arr[j]);
    }

    cout << dp[n] << "\n";

    return 0;
}