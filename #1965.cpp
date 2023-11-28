// 상자넣기
#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(arr[j] < arr[i] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }

        if(ans < dp[i])
            ans = dp[i];
    }

    cout << ans << "\n";
    
    return 0;
}