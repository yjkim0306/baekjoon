// 네트워크 연결
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, ans;
int parent[1001];
vector<pair <int, pair <int, int> > > v;

int Find(int x)
{
    if(parent[x] == x)
        return x;
    else
        return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if(x != y)
        parent[x] = y;
}

bool SameParent(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if(x == y)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int start, end, cost;
        cin >> start >> end >> cost;

        v.push_back(make_pair(cost, make_pair(start, end)));
    }

    sort(v.begin(), v.end());

    for(int i = 1; i <= n; i++)
        parent[i] = i;

    for(int i = 0; i < m; i++)
    {
    
        if(!SameParent(v[i].second.first, v[i].second.second))
        {
            ans += v[i].first;
            Union(v[i].second.first, v[i].second.second);
        }
    }

    cout << ans << "\n";
        
    return 0;
}