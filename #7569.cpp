// 토마토
#include <iostream>
#include <queue>
using namespace std;
struct tomato
{
    int z, y, x;    
};

queue<tomato> q;

int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {-1, 1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

int n, m, h, res = 0;
int graph[101][101][101];

bool isInside(int nz, int ny, int nx)
{
    return(0 <= nz && 0 <= ny && 0 <= nx && nz < h && ny < n && nx < m);
}

void bfs()
{
    while(!q.empty())
    {
        int z = q.front().z;
        int y = q.front().y;
        int x = q.front().x;
        q.pop();
        
        for(int i = 0; i < 6; i++)
        {
            int nz = dz[i] + z;
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if(isInside(nz, ny, nx) == true && graph[nz][ny][nx] == 0)
            {
                graph[nz][ny][nx] = graph[z][y][x] + 1;
                q.push({nz, ny, nx});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n >> h;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                cin >> graph[i][j][k];
                if(graph[i][j][k] == 1) q.push({i, j, k});
            }
        }
    }

    bfs();

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                if(graph[i][j][k] == 0)
                {
                    cout << "-1\n";
                    return 0;
                }
                if(res < graph[i][j][k]) res = graph[i][j][k];
            }
        }
    }
    cout << res - 1 << "\n";

    return 0;
}