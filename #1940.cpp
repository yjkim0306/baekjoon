// 주몽
#include <iostream>
#include <algorithm>
using namespace std;

int arr[15001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    int start = 0, end = 1;
    while(start <= end && end < n)
    {
        if(arr[start] + arr[end] == m)
            ans++;
        if(end == n - 1)
        {
            start++;
            end = start + 1;
        }
        else
            end++;
    }

    cout << ans << "\n";

    return 0;
}