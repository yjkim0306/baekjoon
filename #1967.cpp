// 트리의 지름
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector <pair <int, int> > v[10002];
bool visited[10002];
int res, endPoint;

void dfs(int idx, int currentMaxDist)
{
    if(visited[idx])
        return;

    visited[idx] = true;
    if(res < currentMaxDist)
    {
        res = currentMaxDist;
        endPoint = idx;
    }

    for(int i = 0; i < v[idx].size(); i++)
        dfs(v[idx][i].first, v[idx][i].second + currentMaxDist);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n - 1; i++)
    {
        int parent, child, weight;
        cin >> parent >> child >> weight;
        v[parent].push_back(make_pair(child, weight));
        v[child].push_back(make_pair(parent, weight));
    }

    dfs(1, 0);
    
    res = 0;
    memset(visited, false, sizeof(visited));

    dfs(endPoint, 0);
    cout << res << "\n";

    return 0;
}