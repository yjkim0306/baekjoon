// 카드 정렬하기
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int, vector<int>, greater<int> > q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    cin >> n;

    if(n == 1)
    {
        cout << "0\n";
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        q.push(input);
    }

    while(q.size() > 1)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        sum += a + b;
        q.push(a + b);
    }
    
    cout << sum << "\n";

    return 0;
}