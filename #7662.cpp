// 이중 우선순위 큐
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, k, n;
    char op; 
    
    priority_queue<int, vector<int>, greater<int> > min_pq;
    priority_queue<int, vector<int>, less<int> > max_pq;
    map<int, int> cnt;

    cin >> t;

    while(t--)
    {
        while(!min_pq.empty())
            min_pq.pop();
        while(!max_pq.empty())
            max_pq.pop();
        cnt.clear();

        cin >> k;
        while(k--)
        {
            cin >> op >> n;
            if(op == 'I')
            {
                min_pq.push(n);
                max_pq.push(n);
                cnt[n]++;
            }
            else if(op == 'D')
            {
                if(n == 1 && !max_pq.empty())
                {
                    cnt[max_pq.top()]--;
                    max_pq.pop();
                }
                if(n == -1 && !min_pq.empty())
                {
                    cnt[min_pq.top()]--;
                    min_pq.pop();
                }
                while(!min_pq.empty() && cnt[min_pq.top()] == 0)
                    min_pq.pop();
                while(!max_pq.empty() && cnt[max_pq.top()] == 0)
                    max_pq.pop();
            }
        }
        while(!min_pq.empty() && cnt[min_pq.top()] == 0)
            min_pq.pop();
        while(!max_pq.empty() && cnt[max_pq.top()] == 0)
            max_pq.pop();
        if(max_pq.empty() || min_pq.empty())
            cout << "EMPTY\n";
        else
            cout << max_pq.top() << " " << min_pq.top() << "\n";
    }
    return 0;
}