// 최단경로
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define INF 987654321

int V, E, K; // 정점의 개수, 간선의 개수, 시작 정점의 번호
int dist[20001]; // i번 정점으로의 최단 경로 저장
vector< pair<int, int> > vec[20001];

void Dijkstra()
{
    priority_queue< pair<int, int> > pq;
    pq.push(make_pair(0, K));
    dist[K] = 0; // 시작 정점까지의 거리를 0으로 초기화
    
    while(!pq.empty())
    {
        int cost = -pq.top().first; // 최대힙 우선순위 큐이므로 -를 붙여서 크기를 역전시킴
        int idx = pq.top().second;
        pq.pop();

        for(int i = 0; i < vec[idx].size(); i++)
        {
            int next = vec[idx][i].first;
            int nCost = vec[idx][i].second;
            if(dist[next] > cost + nCost) // 새 비용이 더 적으면
            {
                dist[next] = cost + nCost; // 비용 바꾸기
                pq.push(make_pair(-dist[next], next)); // 새 비용 pq에 삽입
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> V >> E >> K;

    for(int i = 0; i < E; i++)
    {
        int u, v, w; // 시점, 종점, 가중치
        cin >> u >> v >> w;
        vec[u].push_back(make_pair(v, w));
    }

    for(int i = 1; i <= V; i++) dist[i] = INF;

    Dijkstra();

    for(int i = 1; i <= V; i++) 
    {
        if(dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << "\n";
    }

    return 0;
}