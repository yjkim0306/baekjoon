// 알고스팟
#include <iostream>
#include <queue>
using namespace std;

int m, n;
int map[100][100];
int dist[100][100];
int dxy[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };;

void bfs()
{
    queue<pair <int,int> > q;
    q.push(make_pair(0, 0));
    dist[0][0] = 0;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dxy[i][0];
            int ny = y + dxy[i][1];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) 
                continue;
            if(map[nx][ny] == 1)
            {
                if(dist[nx][ny] > dist[x][y] + 1)
                {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
            else if(map[nx][ny] == 0)
            {
                if(dist[nx][ny] > dist[x][y])
                {
                    dist[nx][ny] = dist[x][y];
                    q.push(make_pair(nx, ny));
                }
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

    string str;
    for(int i = 0; i < m; i++)
    {
        cin >> str;
        for(int j = 0; j < n; j++)
        {
            dist[i][j] = 987654321;
            map[i][j] = str[j] - '0';
        }
    }

    bfs();

    cout << dist[m - 1][n - 1] << "\n";

    return 0;
}