// N과 M (1)
#include <iostream>
using namespace std;

int n, m;
int arr[9];
bool visited[9];

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
        if(!visited[i])
        {
            visited[i] = true;
            arr[a] = i;
            dfs(a+1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    dfs(0);

    return 0;
}