// 이동하기
#include <iostream>
#include <algorithm>
using namespace std;

int map[1001][1001];
int candy[1001][1001];

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
            cin >> map[i][j];
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            candy[i][j] = max(max(candy[i - 1][j], candy[i][j - 1]), candy[i - 1][j - 1]) + map[i][j];
    }

    cout << candy[n][m] << "\n";

    return 0;
}