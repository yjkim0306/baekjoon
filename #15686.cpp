// 치킨 배달
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
using namespace std;

int n, m, ans;
int map[50][50];
vector<pair<int, int> > house, chicken, v;
bool selected[13];

int distance()
{
    int dist = 0;
    for(int i = 0; i < house.size(); i++)
    {
        int x = house[i].first;
        int y = house[i].second;
        int d = 99999999;

        for(int j = 0; j < v.size(); j++)
        {
            int xx = v[j].first;
            int yy = v[j].second;
            int Dist = abs(xx - x) + abs(yy - y);
            
            d = min(d, Dist);
        }
        
        dist += d;
    }

    return dist;
}

void dfs(int idx, int cnt)
{
    if(cnt == m)
    {
        ans = min(ans, distance());
        return;
    }

    for(int i = idx; i < chicken.size(); i++)
    {
        if(selected[i]) continue;
        selected[i] = true;
        v.push_back(chicken[i]);
        dfs(i, cnt + 1);
        selected[i] = false;
        v.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ans = 987654321;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) 
        {
            cin >> map[i][j];
            if(map[i][j] == 1) house.push_back(make_pair(i, j));
            if(map[i][j] == 2) chicken.push_back(make_pair(i, j));
        }
    }

    dfs(0, 0);

    cout << ans << "\n";

    return 0;
}