// 동물원
#include <iostream>
using namespace std;

int dp[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0] = 1;
    dp[1] = 3;
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++)
        dp[i] = (2 * dp[i - 1] + dp[i - 2]) % 9901;
    
    cout << dp[n] << "\n";

    return 0;
}