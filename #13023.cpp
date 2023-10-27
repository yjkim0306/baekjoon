// ABCDE
#include <iostream>
#include <vector>
using namespace std;

bool ans;

void dfs(int k, int cur, vector<vector <int> > &v, vector<bool> &visited)
{
    if(k == 4)
    {
        ans = true; 
        return;
    }

    for(int i = 0; i < v[cur].size(); i++)
    {
        int next = v[cur][i];
        if(visited[next])
            continue;
        visited[next] = 1;
        dfs(k + 1, next, v, visited);
        visited[next] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n);

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i = 0; i < n; i++)
    {
        vector<bool> visited(n);
        visited[i] = 1;
        dfs(0, i, v, visited);
        if(ans)
            break;
    }

    cout << ans << "\n";
    
    return 0;
}