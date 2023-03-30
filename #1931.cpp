// 회의실 배정
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector< pair<int, int> > v;

    for(int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back(make_pair(end, start));
    }
    sort(v.begin(), v.end());

    int current = v[0].first;
    int cnt = 1;
    
    for(int i = 1; i < n; i++)
    {
        if(v[i].second >= current)
        {
            current = v[i].first;
            cnt++;
        }
    }
    cout << cnt << "\n";

    return 0;
}