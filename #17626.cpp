// Four Squares
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> dp(n + 1, 0);
    dp[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        int temp = INT_MAX;
        for(int j = 1; j * j <= i; j++)
        {
            int temp2 = i - j * j;
            temp = min(temp, dp[temp2]);
        }
        dp[i] = temp + 1;
    }

    cout << dp[n] << "\n";

    return 0;
}