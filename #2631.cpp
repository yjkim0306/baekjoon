// 줄세우기
#include <iostream>
using namespace std;

int n, m; 
int arr[201];
int dp[201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n; 
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
            if (m < dp[i])
                m = dp[i];
        }
    }    

    cout << n - m << "\n";
    
    return 0;
}