// 빙산
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int n, m;
int graph[300][300];
int temp[300][300];
bool visited[300][300];
int dxy[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

void check(int x, int y)
{
    queue<pair <int, int> > q;
    q.push(make_pair(x, y));

    while(!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = cx + dxy[i][0];
            int ny = cy + dxy[i][1];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if(graph[nx][ny] != 0 && !visited[nx][ny])
                {
                    q.push(make_pair(nx, ny));
                    visited[nx][ny] = true;
                }
            }
        }
    }
}

void bfs()
{
    memset(temp, 0, sizeof(temp));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(graph[i][j] == 0)
                continue;
            int cnt = 0;
            for(int k = 0; k < 4; k++)
            {
                int nx = i + dxy[k][0];
                int ny = j + dxy[k][1];
                if(nx < 0 || ny < 0 || nx >= n || ny >= m)
                    continue;
                if(graph[nx][ny] == 0)
                    cnt++;
            }
            int val = graph[i][j] - cnt;
            if(val > 0)
                temp[i][j] = val;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            graph[i][j] = temp[i][j];
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
            cin >> graph[i][j];
    }

    int time = 0;
    while(1)
    {
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(!visited[i][j] && graph[i][j] != 0)
                {
                    check(i, j);
                    cnt++;
                }
            }
        }
        if(cnt == 0)
        {
            cout << "0\n";
            break;
        }
        else if(cnt >= 2)
        {
            cout << time << "\n";
            break;
        }
        time++;
        bfs();
        memset(visited, false, sizeof(visited));
    }

    return 0;
}