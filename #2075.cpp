// N번째 큰 수 
#include <iostream>
#include <queue>
using namespace std;

void solution(int n)
{
    priority_queue<int, vector<int>, greater<int> > pq;
    int input;
    for(int i = 0; i < n * n; i++)
    {
        cin >> input;
        pq.push(input);
        if(pq.size() > n)
            pq.pop();
    }

    cout << pq.top() << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    solution(n);
    
    return 0;
}