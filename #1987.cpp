// 알파벳
#include <iostream>
#include <algorithm>
using namespace std;

int r, c, ans = 0;
char graph[20][20];
bool visited[26];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int cnt)
{
    ans = max(ans, cnt);

    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
        if(!visited[graph[nx][ny] - 'A'])
        {
            visited[graph[nx][ny] - 'A'] = true;
            dfs(nx, ny, cnt + 1);
            visited[graph[nx][ny] - 'A'] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++) cin >> graph[i][j];
    }
    
    visited[graph[0][0] - 'A'] = true;

    dfs(0, 0, 1);
    
    cout << ans << "\n";

    return 0;
}