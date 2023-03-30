// 괄호
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        stack<char> s;
        string ans = "YES";
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == '(') s.push(str[j]);
            else if(!s.empty() && str[j] == ')' && s.top() == '(') s.pop();
            else 
            {
                ans = "NO";
                break;
            }
        }
        if(!s.empty()) ans = "NO";
        cout << ans << "\n";
    }
    return 0;
}