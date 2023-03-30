// 연구소
#include <iostream>
#include <queue>
using namespace std;

int n, m, cnt = 0;
int graph[9][9];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct map
{
    int y, x;
};

queue<map> q;

bool isInside(int ny, int nx)
{
    return(0 <= ny && 0 <= nx && ny < n && nx < m);
}

void bfs()
{
    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if(isInside(ny, nx) == 1 && graph[ny][nx] == 0)
            {
                graph[ny][nx] = graph[y][x] + 2;
                q.push({ny, nx});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j] == 2) q.push({i, j});
        }
    }
    
    bfs();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(graph[i][j] == 0) cnt++;
        }
    }
    
    cout << cnt << "\n";

    return 0;
}