// 미로 탐색
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, M;
int map[100][100];
int cnt[100][100];
bool visited[100][100];
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

void BFS(int x, int y)
{
    visited[x][y] = true;
    cnt[x][y]++;
    queue<pair<int, int> > q;
    q.push({x, y});

    while(!q.empty())
    {
        int m = q.front().first;
        int n = q.front().second;
        q.pop();

        for(int i = 0; i < 4; ++i)
        {
            int nx = m + dx[i];
            int ny = n + dy[i];

            if(nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && map[nx][ny] == 1)
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
                cnt[nx][ny] = cnt[m][n] + 1;
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }
    BFS(0,0);
    cout << cnt[N-1][M-1];
    return 0;
}