// 줄 세우기
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[32001];
int inDegree[32001];
int n, m;

void TopologicalSort()
{
    queue<int> q;

    for(int i = 1; i <= n; i++)
    {
        if(!inDegree[i])
            q.push(i);
    }

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";
        for(int i = 0; i < graph[current].size(); i++)
        {
            inDegree[graph[current][i]]--;
            if(!inDegree[graph[current][i]])
                q.push(graph[current][i]);
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
        graph[a].push_back(b);
        inDegree[b]++;
    }

    TopologicalSort();
    
    return 0;
}