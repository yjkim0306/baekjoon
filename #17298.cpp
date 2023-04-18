// 오큰수
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int n;
stack<int> s;
int ans[1000001];
int arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = n - 1; i >= 0; i--)
    {
        while(!s.empty() && s.top() <= arr[i])
            s.pop();
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(arr[i]);
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}