// 섬의 개수
#include <iostream>
#include <cstring>
using namespace std;

int w, h;
int graph[51][51];
bool visited[51][51];

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y)
{
    for(int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= h || nx < 0 || ny >= w || ny < 0) continue;
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
    cin.tie(NULL);
    cout.tie(NULL);

    while(1)
    {
        int cnt = 0;

        cin >> w >> h;

        if(w == 0 && h == 0) return 0;
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++) cin >> graph[i][j];
        }
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(visited[i][j] == false && graph[i][j] == 1)
                {
                    visited[i][j] = true; 
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        
        cout << cnt << "\n";
        memset(visited, false, sizeof(visited));
    }

    return 0;
}