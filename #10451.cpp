// 순열 사이클
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v[1001];
bool check[1001];

void dfs(int node)
{
    check[node] = true;
    for(int i = 0; i < v[node].size(); i++)
    {
        int next = v[node][i];
        if(!check[next])
            dfs(next);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            v[i].clear();
            check[i] = false;
        }

        for(int i = 1; i <= n; i++)
        {
            int num;
            cin >> num;
            v[i].push_back(num);
        }

        int cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            if(!check[i])
            {
                dfs(i);
                cnt++;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}