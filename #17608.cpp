// 막대기
#include <iostream>
#include <stack>
using namespace std;

int arr[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 0, max = 0;
    stack<int> s;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        s.push(input);
    }

    while(!s.empty())
    {
        if(max < s.top())
        {
            max = s.top();
            cnt++;
        }
        s.pop();
    }

    cout << cnt << "\n";
    
    return 0;
}