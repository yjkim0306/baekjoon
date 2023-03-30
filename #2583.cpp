// 영역 구하기
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int graph[100][100];
int n, m, k;
queue<pair <int, int> > q;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int bfs()
{
    int cnt = 0;
    while(!q.empty())
    {
        int x = q.front().second;
        int y = q.front().first;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(!graph[ny][nx])
            {
                cnt++;
                graph[ny][nx] = 1;
                q.push(make_pair(ny, nx));
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x1, x2, y1, y2;
    int area[100], cnt = 0;
    cin >> m >> n >> k;

    while(k--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = y1; i < y2; i++)
        {
            for(int j = x1; j < x2; j++)
                graph[i][j] = 1;
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!graph[i][j])
            {
                q.push(make_pair(i, j));
                area[cnt++] = bfs();
                if(!area[cnt - 1]) area[cnt - 1] = 1;
            }
        }
    }
    

    sort(area, area + cnt);
    cout << cnt << "\n";
    for(int i = 0; i < cnt; i++)
        cout << area[i] << " ";

    return 0;
}