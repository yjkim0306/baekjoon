// 퇴사
#include <iostream>
#include <algorithm>
using namespace std;

int Ti[16];
int Pi[16];
int dp[16];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, idx;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> Ti[i] >> Pi[i];
    }

    for(int i = n; i > 0; i--)
    {
        idx = i + Ti[i];
        if(idx > n + 1) dp[i] = dp[i + 1];
        else dp[i] = max(dp[i + 1], dp[idx] + Pi[i]);
    }

    cout << dp[1] << "\n";
    
    return 0;
}