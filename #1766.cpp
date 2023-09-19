// 문제집
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int arr[32001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<int> seq[32001];
    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[b]++;
        seq[a].push_back(b);
    }

    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == 0)
            pq.push(i);
    }

    while(!pq.empty())
    {
        int cur = pq.top();
        pq.pop();

        cout << cur << " ";

        for(int i = 0; i < seq[cur].size(); i++)
        {
            int next = seq[cur][i];
            arr[next]--;
            if(arr[next] == 0)
                pq.push(next);
        }
    }

    cout << "\n";
    
    return 0;
}