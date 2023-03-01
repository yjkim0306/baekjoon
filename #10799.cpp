// 쇠막대기
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    stack<char> s;
    int cnt = 0;
    string str;

    cin >> str;
    
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(') s.push(str[i]);
        else if(str[i] == ')' and str[i-1] == '(')
        {
            s.pop();
            cnt += s.size();
        }
        else 
        {
            cnt++;
            s.pop();
        }
    }

    cout << cnt << "\n";

    return 0;
}