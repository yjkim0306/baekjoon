// 스택 수열
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> s;
    vector<char> res;
    int cnt = 1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while(cnt <= x)
        {
            s.push(cnt);
            cnt++;
            res.push_back('+');
        }
        if(s.top() == x)
        {
            s.pop();
            res.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\n";
    }
}