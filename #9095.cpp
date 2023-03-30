// 1, 2, 3 더하기
#include <iostream>
using namespace std;
int dp[11]; // dp를  저장할 배열
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n, T; // 정수, 테스트 케이스
    cin >> T;
    dp[1] = 1; // 1을 만드는 법 = 1 (1가지)
    dp[2] = 2; // 2를 만드는 법 = 2, 1 + 1 (2가지)
    dp[3] = 4; // 3을 만드는 법 = 3, 2 + 1, 1 + 2, 1 + 1 + 1 (4가지)
    // dp[4] = dp[3] + dp[2] + dp[1]: 1인 상태에서 3을 더하는 가짓수 (3) + 2인 상태에서 2를 더하는 가짓수 (2) + 3인 상태에서 1을 더하는 가짓수 (3)
    // dp[5] = dp[4] + dp[3] + dp[2]: 1인 상태에서 4를 더하는 가짓수 (7) + 2인 상태에서 3을 더하는 가짓수 (4) + 3인 상태에서 2를 더하는 가짓수 (2)
    // ... 
    for(int i = 4; i < 11; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    for(int i = 0 ; i < T; i++)
    {
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}