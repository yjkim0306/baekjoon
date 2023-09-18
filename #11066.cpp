// 파일 합치기
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 987654321
int sum[501], file[501], dp[501][501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int k;
        cin >> k;

        for(int i = 1; i <= k; i++)
        {
            cin >> file[i];
            sum[i] = sum[i - 1] + file[i];
        }

        for(int i = 1; i <= k; i++)
        {
            for(int j = 1; j <= k - i; j++)
            {
                dp[j][i + j] = INF;
                for(int l = j; l < i + j; l++)
                    dp[j][i + j] = min(dp[j][i + j], dp[j][l] + dp[l + 1][i + j] + sum[i + j] - sum[j -1]);
            }
        }

        cout << dp[1][k] << "\n";
    }

    return 0;
}