// 요세푸스 문제 0
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) q.push(i);
    cout << "<";
    while(!q.empty())
    {
        for(int i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() != 1) cout << ", ";
        q.pop();
    }
    cout << ">\n";

    return 0;
}