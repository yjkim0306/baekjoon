// 구간 합 구하기 4
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, arr[100001];
    cin >> n >> m;

    for(int idx = 0; idx < n; idx++) 
    {
        int temp;
        cin >> temp;
        
        arr[idx + 1] = arr[idx] + temp;
    }

    for(int idx = 0; idx < m; idx++)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[j] - arr[i-1] << "\n";
    }

    return 0;
}