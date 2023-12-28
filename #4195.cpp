// 친구 네트워크
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <cstring>
using namespace std;

int sizes[200002]; 
int link[200002];

int Find(int x)
{
    if(link[x] == x)
        return x;
    return link[x] = Find(link[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if(x != y)
    {
        if(sizes[x] < sizes[y])
            swap(x, y);
        sizes[x] += sizes[y];
        link[y] = x;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, f, ans1, ans2;
    string f1, f2;

    cin >> t;
    
    while(t--)
    {
        cin >> f;
        for(int i = 0; i < 200002; i++)
        {
            sizes[i] = 1;
            link[i] = i;
        }

        map<string, int> m;
        int nodeNum = 1;

        for(int i = 0; i < f; i++)
        {
            cin >> f1 >> f2;

            if(m.count(f1) == 0)
                m[f1] = nodeNum++;
            if(m.count(f2) == 0)
                m[f2] = nodeNum++;

            Union(m[f1], m[f2]);

            ans1 = Find(m[f1]);
            ans2 = Find(m[f2]);
            
            cout << max(sizes[ans1], sizes[ans2]) << "\n";
        }
    }

    return 0;
}