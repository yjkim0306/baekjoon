// 연결 요소의 개수
#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[1001];
bool visited[1001];

void dfs(int a)
{
    visited[a] = true;
    for(int i = 0; i < vec[a].size(); i++)
    {
        if(visited[vec[a][i]] == false) dfs(vec[a][i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, u, v, cnt = 0;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == false)
        {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << "\n";
    
    return 0;
}