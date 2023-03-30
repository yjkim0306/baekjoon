// 유기농 배추
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int graph[51][51];
bool visited[51][51];

int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};

vector<int> v;
int m, n, k;

void dfs(int x, int y)
{
    for(int i = 0; i < 4; i++)
    {
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if(nx >= m || nx < 0 || ny >= n || ny < 0) continue;
        if(visited[nx][ny] == false && graph[nx][ny] == 1)
        {
            visited[nx][ny] = true;
            dfs(nx, ny);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int res = 0;
        cin >> m >> n >> k;
        for(int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            graph[x][y] = 1;
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(graph[i][j] == 1 && visited[i][j] == false)
                {
                    visited[i][j] = true;
                    dfs(i, j);
                    res++;
                }
            }
        }
        cout << res << "\n";
        memset(visited, false, sizeof(visited));
        memset(graph, 0, sizeof(graph));
    }

    return 0;
}