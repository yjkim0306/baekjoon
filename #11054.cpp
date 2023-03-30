// 가장 긴 바이토닉 부분 수열
#include <iostream>
using namespace std;

int n;
int arr[1001];
int dp1[1001];
int dp2[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for(int i = 1; i <= n ; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++)
    {
        dp1[i] = 1;
        for(int j = 1; j <= i; j++)
        {
            if(arr[j] < arr[i] && dp1[i] < dp1[j] + 1)
                dp1[i] = dp1[j] + 1;
        }
    }

    for(int i = n; i >= 1; i--)
    {
        dp2[i] = 1;
        for(int j = n; j >= i; j--)
        {
            if(arr[i] > arr[j] && dp2[j] + 1 > dp2[i])
                dp2[i] = dp2[j] + 1;
        }
    }

    int res = 0;
    for(int i = 0; i <= n; i++)
    {
        if(res < dp1[i] + dp2[i] - 1) res = dp1[i] + dp2[i] - 1;
    }

    cout << res << "\n";

    return 0;
}