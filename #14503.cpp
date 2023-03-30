// 로봇 청소기
#include <iostream>
using namespace std;

int n, m, r, c, d;
int cnt;
int graph[50][50];
bool visited[50][50];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
// 북, 동, 남, 서

void dfs()
{
    for(int i = 0; i < 4; i++)
    {
        int nd = (d + 3 - i) % 4;
        int nr = r + dx[nd];
        int nc = c + dy[nd];

        if(nr < 0 || nc < 0 || nr >= n || nc >= m || graph[nr][nc]) continue;

        if(!graph[nr][nc] && !visited[nr][nc])
        {
            visited[nr][nc] = true;
            r = nr;
            c = nc;
            d = nd;

            cnt++;
            dfs();
        }
    }

    int b = d > 1 ? d - 2 : d + 2;
    int br = r + dx[b];
    int bc = c + dy[b];
    
    if(br >= 0 && br <= n || bc >= 0 || bc <= m)
    {
        if(!graph[br][bc])
        {
            r = br;
            c = bc;

            dfs();
        }

        else
        {
            cout << cnt << "\n";
            exit(0);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    cin >> r >> c >> d;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> graph[i][j];
    }

    visited[r][c] = true;
    cnt++;

    dfs();

    return 0;
}