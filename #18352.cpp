// 특정 거리의 도시 찾기
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, m, k, x;
int dist[300001];
vector<int> r[300001];

void dijkstra(int s)
{
    dist[s] = 0;
    queue<int> q;
    q.push(s);

    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        for(int i = 0; i < r[current].size(); i++)
        {
            int next = r[current][i];
            if(dist[next] > dist[current] + 1)
            {
                dist[next] = dist[current] + 1;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k >> x;
    
    for(int i = 1; i <= n; i++)
        dist[i] = 987654321;

    for(int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        r[s].push_back(e);
    }

    dijkstra(x);
    bool flag = false;
    for(int i = 1; i <= n; i++)
    {
        if(dist[i] == k)
        {
            flag = true;
            cout << i << "\n";
        }
    }
    if(!flag)
        cout << "-1\n";
        
    return 0;
}