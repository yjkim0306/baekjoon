// 아기 상어
#include <iostream>
#include <queue>
using namespace std;

int n, ans = 0, cnt = 0, sharkSize = 2;
int graph[20][20];
int gx, gy;
bool eat = false, stop = false;

int dx[4] = {0, -1, 1, 0}; // 상, 좌, 우, 하
int dy[4] = {-1, 0, 0, 1}; // 상, 좌, 우, 하

void bfs(int a, int b, bool visited[][20], int Size)
{
    queue<pair<pair <int, int>, int> > q;
    q.push(make_pair(make_pair(a, b), 0));
    visited[b][a] = true;
    int temp;

    while(!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int time = q.front().second;
        if(graph[y][x] > 0 && graph[y][x] < Size && temp == time)
        {
            if((gy > y) || (gy == y && gx > x))
            {
                gx = x;
                gy = y;
                continue;
            }
        }
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[ny][nx])
            {
                if(graph[ny][nx] <= Size)
                {
                    if(graph[ny][nx] > 0 && graph[ny][nx] < Size && !eat)
                    {
                        eat = true;
                        gx = nx;
                        gy = ny;
                        temp = time + 1;
                        ans += temp;
                    }
                    else
                    {
                        q.push(make_pair(make_pair(nx, ny), time + 1));
                        visited[ny][nx] = true;
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
        for(int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j] == 9)
            {
                gy = i;
                gx = j;
                graph[i][j] = 0;
            }
        }
    }

    while(!stop)
    {
        bool visited[20][20] = {0};
        bfs(gx, gy, visited, sharkSize);
        if(eat)
        {
            eat = false;
            cnt++;
            graph[gy][gx] = 0;
            if(cnt == sharkSize)
            {
                sharkSize++;
                cnt = 0;
            }
        }
        else
            stop = true;
    }

    cout << ans << "\n";
    
    return 0;
}