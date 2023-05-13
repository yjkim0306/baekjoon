// N과 M (8)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
vector<int> v;

void dfs(int num, int idx)
{
    if(idx == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    else
    {
        for(int i = num; i < n; i++)
        {
            arr[idx] = v[i];
            dfs(i, idx + 1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    v.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    dfs(0, 0);
    
    return 0;
}