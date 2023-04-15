// 촌수계산
#include <iostream>
#include <queue>
using namespace std;

int n, m, t1, t2, cnt = 0;
int visited[100];
int graph[100][100];

void bfs(int a)
{
    queue<int> q;
    q.push(a);

    while(!q.empty())
    {
        a = q.front();
        q.pop();
        for(int i = 1; i <= n; i++)
        {
            if(graph[a][i] && !visited[i])
            {
                q.push(i);
                visited[i] = visited[a] + 1;
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
    cin >> t1 >> t2;
    cin >> m;

    while(m--)
    {
        int x, y;
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    bfs(t1);

    if(!visited[t2])
        visited[t2] = -1;

    cout << visited[t2] << "\n";
    
    return 0;
}