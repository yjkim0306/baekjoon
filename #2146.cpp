// 다리 만들기
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

int n, ans;
int map[100][100];
bool visited[100][100];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

vector<pair <int, int> > v;

void make_landlabel(int a, int b, int l)
{
    queue<pair <int, int> > q;
    q.push(make_pair(a, b));
    visited[a][b] = true;
    map[a][b] = l;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < n)
            {
                if(!visited[nx][ny] && map[nx][ny] == -1)
                {
                    visited[nx][ny] = true;
                    map[nx][ny] = l;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int bfs(int idx)
{
    int res = 0;
    queue<pair <int, int> > q;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(map[i][j] == idx)
            {
                visited[i][j] = true;
                q.push(make_pair(i, j));
            }
        }
    }

    while(!q.empty())
    {
        int s = q.size();
        for(int i = 0; i < s; i++)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int j = 0; j < 4; j++)
            {
                int nx = x + dx[j];
                int ny = y + dy[j];

                if(nx >= 0 && ny >= 0 && nx < n && ny < n)
                {
                    if(map[nx][ny] != 0 && map[nx][ny] != idx)
                        return res;
                    else if(map[nx][ny] == 0 && visited[nx][ny] == false)
                    {
                        visited[nx][ny] = true;
                        q.push(make_pair(nx, ny));
                    }
                }
            }
        }
        res++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ans = 987654321;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> map[i][j];
            if(map[i][j])
            {
                map[i][j] = -1;
                v.push_back(make_pair(i, j));
            }
        }
    }

    int land_label = 1;
    for(int i = 0; i < v.size(); i++)
    {
        int x = v[i].first;
        int y = v[i].second;

        if(!visited[x][y])
        {
            make_landlabel(x, y, land_label);
            land_label++;
        }
    }

    for(int i = 1; i < land_label; i++)
    {
        ans = min(ans, bfs(i));
        memset(visited, false, sizeof(visited));
    }

    cout << ans << "\n";

    return 0;
}