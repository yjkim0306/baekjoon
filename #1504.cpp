// 특정한 최단 경로
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 987654321
using namespace std;

int n;
int dist[801];
vector<pair <int, int> > v[801];

int dijkstra(int x, int y)
{
    for(int i = 1; i <= n; i++)
        dist[i] = INF;
    priority_queue<pair <int, int> , vector<pair <int, int> >, greater<pair <int, int> > > pq;

    pq.push(make_pair(0, x));
    dist[x] = 0;
    while(!pq.empty())
    {
        int cost = pq.top().first;
        int current = pq.top().second;
        pq.pop();
        for(int i = 0; i < v[current].size(); i++)
        {
            int nextCost = v[current][i].first;
            int nextCurrent = v[current][i].second;
            if(dist[nextCurrent] > cost + nextCost)
            {
                dist[nextCurrent] = cost + nextCost;
                pq.push(make_pair(dist[nextCurrent], nextCurrent));
            }
        }
    }

    return dist[y];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int e, x, y, distance = 0, ans = 987654321, res = 987654321;
    cin >> n >> e;
    for(int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(c, b));
        v[b].push_back(make_pair(c, a));
    }
    cin >> x >> y;
    if(dijkstra(1, x) == INF || dijkstra(x, y) == INF || dijkstra(y, n) == INF)
        ans = INF;
    else
        ans = dijkstra(1, x) + dijkstra(x, y) + dijkstra(y, n);
    
    if(dijkstra(1, y) == INF || dijkstra(y, x) == INF || dijkstra(x, n) == INF)
        res = INF;
    else
        res = dijkstra(1, y) + dijkstra(y, x) + dijkstra(x, n);
    
    if(ans == INF && res == INF)
        cout << "-1\n";
    else
        cout << min(ans, res) << "\n";

    return 0;
}