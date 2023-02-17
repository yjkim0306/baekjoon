// 적록색약
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, normAns = 0, dyschromatopsiaAns = 0; // 광기의 변수명
char graph[101][101];
bool visited[101][101];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void bfs(int a, int b)
{
    queue<pair<int, int>> q;
    q.push(make_pair(a, b));
    visited[a][b] = true;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < n)
            {
                if(!visited[nx][ny])
                {
                    if(graph[nx][ny] == graph[x][y])
                    {
                        visited[nx][ny] = true;
                        q.push(make_pair(nx, ny));
                    }
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
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cin >> graph[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) 
        {
            if(!visited[i][j])
            {
                bfs(i, j);
                normAns++;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(graph[i][j] == 'R') graph[i][j] = 'G';
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!visited[i][j])
            {
                bfs(i, j);
                dyschromatopsiaAns++;
            }
        }
    }

    cout << normAns << " " << dyschromatopsiaAns << "\n";

    return 0;
}