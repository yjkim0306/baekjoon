// 가장 긴 증가하는 부분 수열
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
        }
    }
    cout << *max_element(dp, dp + n) << "\n";

    return 0;
}