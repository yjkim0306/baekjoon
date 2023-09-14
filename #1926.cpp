// 그림
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int graph[500][500];
bool visited[500][500];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int n, m, maxShape = 1;
vector<int> v;
void dfs(int x, int y)
{
    visited[x][y] = true;

    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        if(!visited[nx][ny] && graph[nx][ny])
        {
            visited[nx][ny] = true;
            maxShape++;
            dfs(nx, ny);
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
            cin >> graph[i][j];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!visited[i][j] && graph[i][j])
            {
                dfs(i, j);
                v.push_back(maxShape);
                cnt++;
                maxShape = 1;
            }
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    
    cout << cnt << "\n";

    if(cnt == 0) 
        cout << 0 << "\n";
    else 
        cout << v[0] << "\n";

    return 0;
}