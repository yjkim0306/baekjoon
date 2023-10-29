// 카드
#include <iostream>
#include <algorithm>
using namespace std;

long long arr[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long ans;
    int n, cnt = 1, max = 1;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    ans = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i - 1])
            cnt++;
        else
            cnt = 1;
        if(max < cnt)
        {
            max = cnt;
            ans = arr[i];
        }
    }

    cout << ans << "\n";
    
    return 0;
}