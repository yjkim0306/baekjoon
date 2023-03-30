// 테트로미노
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int n, m;
int graph[500][500];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
bool visited[500][500];
int ans;

bool isInside(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}

void dfs(int x, int y, int depth, int sum)
{
    if(depth == 3)
    {
        ans = max(ans, sum);
        return;
    }

    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(!isInside(nx, ny)) continue;
        if(visited[nx][ny]) continue;
        visited[nx][ny] = true;
        dfs(nx, ny, depth + 1, sum + graph[nx][ny]);
        visited[nx][ny] = false;
    }
}

void shape1(int x, int y)
{
    int sum = 0;
    sum = graph[x][y] + graph[x][y + 1] + graph[x][y + 2] + graph[x - 1][y + 1];
    ans = max(ans, sum);
}

void shape2(int x, int y)
{
    int sum = 0;
    sum = graph[x][y] + graph[x][y + 1] + graph[x][y + 2] + graph[x + 1][y + 1];
    ans = max(ans, sum);
}

void shape3(int x, int y)
{
    int sum = 0;
    sum = graph[x][y] + graph[x + 1][y] + graph[x + 2][y] + graph[x + 1][y + 1];
    ans = max(ans, sum);
}

void shape4(int x, int y)
{
    int sum = 0;
    sum = graph[x][y] + graph[x - 1][y + 1] + graph[x][y + 1] + graph[x + 1][y + 1];
    ans = max(ans, sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ans = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            visited[i][j] = true;
            dfs(i, j, 0, graph[i][j]);
            visited[i][j] = false;
            if(i - 1 >= 0 && j + 2 < m) shape1(i, j);
            if(j + 2 < m && i + 1 < n) shape2(i, j);
            if(i + 2 < n && j + 1 < m) shape3(i, j);
            if(i + 1 < n && i - 1 >= 0 && j + 1 < m) shape4(i, j);
        }
    }
    
    cout << ans << "\n";

    return 0;
}