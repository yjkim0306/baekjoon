// 괄호의 값
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    stack<char> s;

    cin >> str;

    int ans = 0, temp = 1;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
        {
            temp *= 2;
            s.push('(');
        }
        else if(str[i] == '[')
        {
            temp *= 3;
            s.push('[');
        }
        else if(str[i] == ')')
        {
            if(s.empty() || s.top() != '(')
            {
                ans = 0;
                break;
            }
            if(str[i - 1] == '(')
            {
                ans += temp;
                temp /= 2;
                s.pop();
            }
            else
            {
                temp /= 2;
                s.pop();
            }
        }
        else if(str[i] == ']')
        {
            if(s.empty() || s.top() != '[')
            {
                ans = 0;
                break;
            }
            if(str[i - 1] == '[')
            {
                ans += temp;
                temp /= 3;
                s.pop();
            }
            else
            {
                temp /= 3;
                s.pop();
            }
        }
    }

    if(!s.empty()) 
        ans = 0;
    cout << ans << "\n";
    
    return 0;
}