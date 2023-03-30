// N과 M (3)
#include <iostream>
using namespace std;
int n, m;
int arr[8];
bool visited[8];

void dfs(int a)
{
    if(a == m)
    {
        for(int i = 0; i < m; i++) cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++)
    {
        visited[i] = true;
        arr[a] = i;
        dfs(a+1);
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    dfs(0);

    return 0;
}