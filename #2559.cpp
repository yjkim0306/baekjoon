// 수열
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, res = -987654321;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        arr[i] = arr[i - 1] + input;
    }

    for(int i = k; i <= n; i++)
        res = max(res, arr[i] - arr[i - k]);

    cout << res << "\n";

    return 0;
}