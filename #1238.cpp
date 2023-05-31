// 파티
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, x;
const int INF = 2e7;
vector<pair <int, int> > graph[1001];
vector<int> dist;
int resdist[1001];

void dijkstra(int s)
{
    dist.clear();
    dist.resize(n + 1, INF);

    dist[s] = 0;

    priority_queue<pair <int, int>, vector<pair <int, int> >, greater<pair <int, int> > > pq;
    pq.push(make_pair(0, s));

    while(!pq.empty())
    {
        int min_cost = pq.top().first;
        int current = pq.top().second; 
        pq.pop();

        if(min_cost < dist[current])
            continue;
        for(int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i].second;
            int next_cost = min_cost + graph[current][i].first;

            if(next_cost < dist[next])
            {
                dist[next] = next_cost;
                pq.push(make_pair(next_cost, next));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m >> x;
    for(int i = 0; i < m; i++) 
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(make_pair(w, v));
    }

    for(int i = 1; i <= n; i++)
    {
        dijkstra(i);
        resdist[i] = dist[x];
    }

    dijkstra(x);
    int res = 0;
    
    for(int i = 1; i <= n; i++)
    {
        resdist[i] += dist[i];
        res = max(res, resdist[i]);
    }
    
    cout << res << "\n";

    return 0;
}