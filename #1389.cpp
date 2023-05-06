// 케빈 베이컨의 6단계 법칙
#include <iostream>
using namespace std;

int n, m;
int graph[101][101];

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
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i != j && graph[i][j] != 1)
                graph[i][j] = 10000000;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                if(graph[j][i] + graph[i][k] < graph[j][k])
                    graph[j][k] = graph[j][i] + graph[i][k];
            }
        }
    }

    int val = 10000000;
    int res;
    for(int i = 1; i <= n; i++)
    {
        int temp = 0;
        for(int j = 1; j <= n; j++)
            temp += graph[i][j];
        if(temp < val)
        {
            val = temp;
            res = i;
        }
    }

    cout << res << "\n";
    
    return 0;
}