// 효율적인 해킹
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int n, m, hacked = 1;
vector<int> map[10001];
vector< pair<int, int> > v;
bool visited[10001];
queue<int> q;

void bfs(int x)
{
    visited[x] = true;
    q.push(x);
    while(!q.empty())
    {
        x = q.front();
        q.pop();

        for(int i = 0; i < map[x].size(); i++)
        {
            int nx = map[x][i];

            if(!visited[nx])
            {
                visited[nx] = true;
                q.push(nx);
                hacked++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        map[b].push_back(a);
    }

    for(int i = 1; i <= n; i++)
    {
        bfs(i);
        memset(visited, false, sizeof(visited));
        v.push_back(make_pair(i, hacked));
        hacked = 1;
    }

    int maxHack = -1;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].second > maxHack)
            maxHack = v[i].second;
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].second == maxHack)
            cout << v[i].first << " ";
    }

    cout << "\n";

    return 0;
}