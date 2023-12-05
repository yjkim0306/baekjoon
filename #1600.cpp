// 말이 되고픈 원숭이
#include <iostream>
#include <queue>
using namespace std;

int w, h, k;
int map[201][201];
bool visited[201][201][31];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int hdx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int hdy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

void bfs()
{
    queue<pair<pair<int, int>, pair<int, int> > > q;
    q.push(make_pair(make_pair(0, 0), make_pair(0, 0)));
    visited[0][0][0] = true;

    while(!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second.first;
        int ability = q.front().second.second;
        q.pop();

        if(x == h - 1 && y == w - 1)
        {
            cout << cnt << "\n";
            return;
        }
        if(ability < k)
        {
            for(int i = 0; i < 8; i++)
            {
                int nx = x + hdx[i];
                int ny = y + hdy[i];
                if(nx >= 0 && ny >= 0 && nx < h && ny < w)
                {
                    if(map[nx][ny] == 0 && !visited[nx][ny][ability + 1])
                    {
                        visited[nx][ny][ability + 1] = true;
                        q.push(make_pair(make_pair(nx, ny), make_pair(cnt + 1, ability + 1)));
                    }
                }
            }

            
        }
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < h && ny < w)
            {
                if(map[nx][ny] == 0 && !visited[nx][ny][ability])
                {
                    visited[nx][ny][ability] = true;
                    q.push(make_pair(make_pair(nx, ny), make_pair(cnt + 1, ability)));
                }
            }
        }
    }
    cout << "-1\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k;
    cin >> w >> h;

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
            cin >> map[i][j];
    }

    bfs();

    return 0;
}