// 최소 스패닝 트리
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int v, e, ans;
int parent[10001];
vector<pair <int, pair <int, int> > > vec;

int Find(int x)
{
    if(parent[x] == x) return x;
    else return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if(x != y) parent[y] = x;
}

bool SameParent(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if(x == y) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> v >> e;
    for(int i = 0; i < e; i++)
    {
        int start, end, cost;
        cin >> start >> end >> cost;

        vec.push_back(make_pair(cost, make_pair(start, end)));
    }

    sort(vec.begin(), vec.end());

    for(int i = 1; i <= v; i++)
        parent[i] = i;

    for(int i = 0; i < e; i++)
    {
        if(SameParent(vec[i].second.first, vec[i].second.second) == false)
        {
            Union(vec[i].second.first, vec[i].second.second);
            ans = ans + vec[i].first;
        }
    }

    cout << ans << "\n";
    
    return 0;
}