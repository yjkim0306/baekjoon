// N과 M (4)
#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[8];
bool visited[8];

void dfs(int idx, int a)
{
    if(a == m)
    {
        for(int i = 0; i < m; i++) cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = idx; i <= n; i++)
    {
        visited[i] = true;
        arr[a] = i;
        dfs(i, a+1);
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    dfs(1, 0);

    return 0;
}