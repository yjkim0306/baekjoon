// 정수 삼각형
#include <iostream>
#include <algorithm>
using namespace std;

int arr[501][501];
int dp[501][501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++) cin >> arr[i][j];
    }

    dp[0][0] = arr[0][0];

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++) 
        {
            if(j == 0) dp[i][j] = dp[i][j-1] + arr[i][j];
            if(j == i) dp[i][j] = dp[i-1][j-1] + arr[i][j];
            else dp[i][j] = arr[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
        }
    }

    int maximum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(dp[i][j] >= maximum) maximum = dp[i][j];
        }
    }

    cout << maximum << "\n";

    return 0;
}