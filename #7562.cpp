// 나이트의 이동
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int l;
int x1, y1, x2, y2;

int map[300][300];
bool visited[300][300];
int dx[8] = {2, 1, 2, 1, -1, -2, -1, -2};
int dy[8] = {1, 2, -1, -2, 2, 1, -2, -1};

void bfs(int x_, int y_)
{
    queue<pair <int, int> > q;
    q.push(make_pair(x_, y_));
    visited[x_][y_] = true;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x == x2 && y == y2)
        {
            cout << map[x][y] << "\n";
            while(!q.empty()) q.pop();
            break;
        }

        for(int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
            if(!visited[nx][ny])
            {
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
                map[nx][ny] = map[x][y] + 1;
            }
        }
    }  
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        cin >> l;
        cin >> x1 >> y1 >> x2 >> y2;
        
        bfs(x1, y1);
        
        memset(visited, 0, sizeof(visited));
        memset(map, 0, sizeof(map));
    }
    
    return 0;
}