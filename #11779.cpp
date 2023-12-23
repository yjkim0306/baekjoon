// 최소비용 구하기 2
#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;

int n, m, s, e;
int dist[1001];
int route[1001];
vector<pair<int, int> > v[1001];

void dijkstra()
{
    priority_queue<pair<int, int> > pq;
    pq.push(make_pair(0, s));
    dist[s] = 0;

    while(!pq.empty())
    {
        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        if(cost > dist[current])
            continue;
        
        for(int i = 0; i < v[current].size(); i++)
        {
            int next = v[current][i].first;
            int nextCost = v[current][i].second;

            if(dist[next] > cost + nextCost)
            {
                dist[next] = cost + nextCost;
                pq.push(make_pair(-dist[next], next));
                route[next] = current;
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
    for(int i = 1; i <= n; i++)
        dist[i] = INF;

    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
    }
    
    cin >> s >> e;
    
    dijkstra();

    vector<int> arr;
    arr.push_back(e);
    int val = route[e];
    while(val)
    {
        arr.push_back(val);
        val = route[val];
    }

    cout << dist[e] << "\n" << arr.size() << "\n";
    for(int i = arr.size() - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}