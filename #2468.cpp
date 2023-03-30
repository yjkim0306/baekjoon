// 안전 영역
#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int n, cnt;
vector<int> v;

int graph[101][101];
int input[101][101];
bool visited[101][101];
queue<pair<int, int> > q;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int x, int y)
{
    visited[x][y] = true;
    q.push(make_pair(x, y));

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n)
                continue;
            if (!visited[nx][ny] && graph[nx][ny])
            {
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int maxHeight = -1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> input[i][j];
            maxHeight = max(maxHeight, input[i][j]);
        }
    }

    for (int h = 1; h <= maxHeight; h++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (input[i][j] < h)
                    graph[i][j] = 0;
                else
                    graph[i][j] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!visited[i][j] && graph[i][j])
                {
                    bfs(i, j);
                    cnt++;
                }
            }
        }

        v.push_back(cnt);

        memset(visited, 0, sizeof(visited));
        memset(graph, 0, sizeof(graph));
        cnt = 0;
    }

    sort(v.begin(), v.end());

    cout << v[v.size() - 1] << "\n";

    return 0;
}