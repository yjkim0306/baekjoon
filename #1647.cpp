// 도시 분할 계획
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, ans;
int parent[100001];
vector< pair <int, pair<int, int> > > edge;
vector<int> v;

int Find_parent(int x)
{
    if(x == parent[x])
        return x;
    else
        return parent[x] = Find_parent(parent[x]);
}

void Union(int x, int y, int cost)
{
    x = Find_parent(x);
    y = Find_parent(y);

    if(x == y)
        return;
    parent[y] = x;
    n--;
}

bool isSameParent(int x, int y)
{
    x = Find_parent(x);
    y = Find_parent(y);

    if(x == y)
        return true;
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
        int a, b, c;
        cin >> a >> b >> c;
        edge.push_back(make_pair(c, make_pair(a, b)));
    }

    sort(edge.begin(), edge.end());
    
    for(int i = 1; i <= n; i++)
        parent[i] = i;
    
    for(int i = 0; i < edge.size(); i++)
    {
        if(!isSameParent(edge[i].second.first, edge[i].second.second)) 
        {
            Union(edge[i].second.first, edge[i].second.second, edge[i].first);
            v.push_back(edge[i].first);
        }
    }
    
    for(int i = 0; i < v.size() - 1; i++)
        ans += v[i];

    cout << ans << "\n";
    
    return 0;
}