// 플로이드
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 987654321

int n, m;
int graph[101][101];

void floyd()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
                if(graph[j][i] != INF && graph[i][k] != INF) 
                    graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]); 
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
    {
        for(int j = 1; j <= n; j++)
            graph[i][j] = INF;
    }
    for(int i = 0; i < m; i++)
    {
        int start, end, cost;
        cin >> start >> end >> cost;
        if(graph[start][end] > cost)
            graph[start][end] = cost;
    }
    
    floyd();
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j || graph[i][j] == INF)
                cout << 0 << " ";
            else
                cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}