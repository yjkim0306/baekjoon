// 최소비용 구하기
#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;

vector<int> dist(1001, INF);
vector<pair <int, int> > v[1001];

void dijkstra(int x)
{
    dist[x] = 0;
    priority_queue<pair <int, int> > pq;
    pq.push(make_pair(dist[x], x));

    while(!pq.empty())
    {
        int current = pq.top().second;
        int distance = pq.top().first * -1;
        pq.pop();

        if(dist[current] < distance) 
        continue;
    
        for(int i = 0; i < v[current].size(); i++)
        {
            int next = v[current][i].first;
            int nextdist = v[current][i].second + distance;

            if(nextdist < dist[next])
            {
                dist[next] = nextdist;
                pq.push(make_pair(nextdist * -1, next));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    while(m--)
    {
        int start, end, cost;
        cin >> start >> end >> cost;

        v[start].push_back(make_pair(end, cost));
    }

    int x, y;
    cin >> x >> y;

    dijkstra(x);

    cout << dist[y] << "\n";
    
    return 0;
}