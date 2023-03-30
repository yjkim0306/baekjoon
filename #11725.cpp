// 트리의 부모 찾기
#include <iostream>
#include <vector>
using namespace std;

int n;
int tree[100001];
bool visited[100001];
vector<int> graph[100001];

void dfs(int idx)
{
    visited[idx] = true;
    for(int i = 0; i < graph[idx].size(); i++)
    {
        int next = graph[idx][i];
        if(!visited[next])
        {
            tree[next] = idx;
            dfs(next);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    dfs(1);

    for(int i = 2; i <= n; i++) cout << tree[i] << "\n";

    return 0;
}