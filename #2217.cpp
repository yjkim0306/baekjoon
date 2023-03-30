// 로프
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    int arr[100001];
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<int>());

    for(int i = 0 ; i < n; i++)
    {
        if(res < arr[i] * (i + 1)) res = arr[i] * (i + 1);
    }

    cout << res << "\n";

    return 0;
}