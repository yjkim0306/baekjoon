// 특별상이라도 받고 싶어
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int graph[1025][1025];

int split(int x, int y, int n)
{
    if(n == 1)
        return graph[x][y];

    vector<int> v;
    v.push_back(split(x, y, n / 2));
    v.push_back(split(x + (n / 2), y, n / 2));
    v.push_back(split(x, y + (n / 2), n / 2));
    v.push_back(split(x + (n / 2), y + (n / 2), n / 2));

    sort(v.begin(), v.end());

    return v[1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> graph[i][j];
    }
    
    cout << split(0, 0, n) << "\n";
    return 0;
}