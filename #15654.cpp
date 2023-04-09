// N과 M (5)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
vector<int> v;
bool visited[8];

void dfs(int idx)
{
    if(idx == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        if(visited[i])
            continue;
        visited[i] = true;
        arr[idx] = v[i];
        dfs(idx + 1);
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;

    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    
    dfs(0);

    return 0;
}