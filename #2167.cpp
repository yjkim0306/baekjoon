// 2차원 배열의 합
#include <iostream>
using namespace std;

int arr[301][301];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }

    int k; 
    cin >> k;
    while(k--)
    {
        int sum = 0, i, j, x, y;
        cin >> i >> j >> x >> y;
        for(int idx = i; idx <= x; idx++)
        {
            for(int idx2 = j; idx2 <= y; idx2++)
                sum += arr[idx][idx2];
        }
        
        cout << sum << "\n";
    }
    return 0;
}