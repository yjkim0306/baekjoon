// 보석 도둑
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n; // 보석 수
int k; // 가방 수
pair<int, int> v_jewerly[300001];
int v_bag[300001];
priority_queue<int, vector<int>, less<int>> pq;

long long solve() 
{
    sort(v_jewerly, v_jewerly + n);
    sort(v_bag, v_bag + k);

    int idx = 0;
    long long sum = 0;

    for(int i = 0; i < k; i++) 
    {
        while(idx < n && v_bag[i] >= v_jewerly[idx].first) 
        {
            pq.push(v_jewerly[idx].second);
            idx++;
        }
        if(!pq.empty()) 
        {
            sum += pq.top();
            pq.pop();
        }
    }
    
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> v_jewerly[i].first >> v_jewerly[i].second;
    for(int i = 0; i < k; i++)
        cin >> v_bag[i];

    cout << solve() << "\n";

    return 0;
}