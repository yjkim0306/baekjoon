// 벽 부수고 이동하기
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, m;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

bool visited[1000][1000][2];
int graph[1000][1000];

int bfs()
{
    queue<pair< pair<int, int>, pair<int, int> > > q;
    q.push(make_pair(make_pair(0, 0), make_pair(0, 1)));
    visited[0][0][0] = true;

    while(!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;

        int a = q.front().second.first;
        int b = q.front().second.second;

        q.pop();
        if(x == n - 1 && y == m - 1) return b;

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if(graph[nx][ny] && a == 0)
                {
                    visited[nx][ny][a + 1] = true;
                    q.push(make_pair(make_pair(nx, ny), make_pair(a + 1, b + 1)));
                }
                else if(!graph[nx][ny] && !visited[nx][ny][a])
                {
                    visited[nx][ny][a] = true;
                    q.push(make_pair(make_pair(nx, ny), make_pair(a, b + 1)));
                }
            }
        }
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < m; j++)
        {
            int temp = str[j] - '0';
            graph[i][j] = temp;
        }
    }

    cout << bfs() << "\n";

    return 0;
}