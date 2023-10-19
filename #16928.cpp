// 뱀과 사다리 게임
#include <iostream>
#include <queue>
using namespace std;

int map[101];
bool visited[101];

void bfs(int r, int c)
{
    queue<pair <int, int> > q;
    q.push(make_pair(r, c));
    
    while(!q.empty())
    {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        for(int i = 1; i <= 6; i++)
        {
            int nx = x + i;
            if(nx == 100)
            {
                cout << cnt + 1 << "\n";
                return;
            }

            else if(nx < 100)
            {
                while(map[nx] != 0)
                    nx = map[nx];
                if(!visited[nx])
                {
                    q.push(make_pair(nx, cnt + 1));
                    visited[nx] = true;
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

    int n, m, x, y;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        map[x] = y;
    }

    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        map[x] = y;
    }

    bfs(1, 0);
    
    return 0;
}