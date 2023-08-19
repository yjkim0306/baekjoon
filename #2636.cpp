// 치즈
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int r, c, res, ans;
char graph[100][100];
int dxy[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
bool visited[100][100];

bool bfs()
{
    visited[0][0] = true;
    int cnt = 0;
    queue<pair <int, int> > q;
    q.push(make_pair(0, 0));
    ans++;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dxy[i][0];
            int ny = y + dxy[i][1];
            if(nx >= 0 && nx < r && ny >= 0 && ny < c && !visited[nx][ny])
            {
                if(graph[nx][ny] == '0')
                    q.push(make_pair(nx, ny));
                else
                {
                    graph[nx][ny] = '0';
                    cnt++;
                }
                visited[nx][ny] = true;
            }
        }
    }

    if(cnt == 0)
    {
        cout << --ans << "\n" << res << "\n";
        return true;
    }
    else
    {
        res = cnt;
        return false;
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
        for(int j = 0; j < c; j++)
            cin >> graph[i][j];
    }
    while(1)
    {
        if(bfs())
            break;
        memset(visited, false, sizeof(visited));
    }
    
    return 0;
}