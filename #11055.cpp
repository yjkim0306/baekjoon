// 가장 큰 증가하는 부분 수열
#include <iostream>
using namespace std;

int arr[1000];
int dp[1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        dp[i] = arr[i];
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && dp[i] < dp[j] + arr[i])
                dp[i] = dp[j] + arr[i];
        }
        if(max < dp[i]) 
            max = dp[i];
    }

    cout << max << "\n";
    
    return 0;
}