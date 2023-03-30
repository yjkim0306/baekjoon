// 토마토
#include <iostream>
#include <queue>
using namespace std;
struct tomato
{
    int y, x;    
};

queue<tomato> q;

int dx[4] = {1,0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m, res = 0;
int graph[1001][1001];

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
                graph[ny][nx] = graph[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j] == 1) q.push({i, j});
        }
    }

    bfs();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(graph[i][j] == 0)
            {
                cout << "-1\n";
                return 0;
            }
            if(res < graph[i][j]) res = graph[i][j];
        }
    }
    cout << res - 1 << "\n";

    return 0;
}