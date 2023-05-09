// 숨바꼭질 3
#include <iostream>
#include <deque>
using namespace std;

int n, k;
int visited[100001];

int bfs()
{
    deque<int> dq;
    dq.push_back(n);
    visited[n] = 1;
    while(!dq.empty())
    {
        int x = dq.front();
        dq.pop_front();

        if(x == k)
            return visited[k] - 1;
            
        if(x * 2 < 100001 && !visited[x * 2])
        {
            dq.push_front(x * 2);
            visited[x * 2] = visited[x];
        }

        if(x + 1 < 100001 && !visited[x + 1])
        {
            dq.push_back(x + 1);
            visited[x + 1] = visited[x] + 1;
        }

        if(x - 1 >= 0 && !visited[x - 1])
        {
            dq.push_back(x - 1);
            visited[x - 1] = visited[x] + 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;
    cout << bfs() << "\n";

    return 0;
}