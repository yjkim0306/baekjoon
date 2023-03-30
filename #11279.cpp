// 최대 힙
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    priority_queue<int> pq;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            if(pq.empty() == true) cout << "0\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else pq.push(x);
    }

    return 0;
}