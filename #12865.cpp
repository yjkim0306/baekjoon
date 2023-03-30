// 평범한 배낭
#include <iostream>
using namespace std;

struct Thing
{
    int weight, value;
};

int n, k; // 물품의 수, 준서가 버틸 수 있는 무게
int dp[101][100001];
Thing thing[101]; // 물건의 무게, 물건의 가치

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        int w, v;
        cin >> w >> v;
        thing[i] = {w, v};
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            int wi = thing[i].weight;
            int vi = thing[i].value;

            if(wi > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], vi + dp[i-1][j-wi]);
        }
    }

    cout << dp[n][k] << "\n";

    return 0;
}