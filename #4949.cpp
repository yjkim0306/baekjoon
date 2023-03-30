// 균형잡힌 세상
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    while(1)
    {
        string str;
        getline(cin, str);
        if(str == ".") break;
        stack<char> s;
        string ans = "yes";
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(' || str[i] == '[') s.push(str[i]);
            else if(str[i] == ')')
            {
                if(!s.empty() && s.top() == '(') s.pop();
                else
                {
                    ans = "no";
                    break;
                }
            }
            else if(str[i] == ']') 
            {
                if(!s.empty() && s.top() == '[') s.pop();
                else
                {
                    ans = "no";
                    break;
                }
            }
        }
        if(!s.empty()) ans = "no";
        cout << ans << "\n";
    }
    return 0;
}