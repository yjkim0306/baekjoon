// 내리막 길
#include <iostream>
#include <vector>
using namespace std;

int n, m, res = 0;
int graph[500][500];
int dp[500][500];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int dfs(int x, int y)
{
    if(x == m - 1 && y == n - 1) 
        return 1;
    if(dp[x][y] != -1) 
        return dp[x][y];

    dp[x][y] = 0;
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < m && ny < n)
        {
            if(graph[nx][ny] < graph[x][y])
                dp[x][y] = dp[x][y] + dfs(nx, ny);
        }
    }

    return dp[x][y];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            dp[i][j] = -1;
        }
    }

    res = dfs(0, 0);
    cout << res << "\n";

    return 0;
}