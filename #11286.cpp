// 절댓값 힙
#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

struct compare
{
    bool operator()(int a, int b)
    {
        if(abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, compare> pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x != 0)
        {
            pq.push(x);            
        }
        else
        {
            if(pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}