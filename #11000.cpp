// 강의실 배정
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair <int, int> > v;
priority_queue<int, vector<int>, greater<int> > pq;

int greedy(int cnt)
{
    pq.push(v[0].second);

    for(int i = 1; i < cnt; i++)
    {
        pq.push(v[i].second);
        if(pq.top() <= v[i].first) 
            pq.pop();
    }

    return pq.size();
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
        int a, b;
        cin >> a >> b;

        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());
    
    cout << greedy(n) << "\n";
    
    return 0;
}