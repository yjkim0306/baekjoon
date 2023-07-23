// 단어 뒤집기 2
#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<char>& s)
{
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, ans;
    getline(cin, str);

    bool flag = false;

    stack<char> sc;

    for(char ch : str)
    {
        if(ch == '<')
        {
            printStack(sc);
            flag = true;
            cout << ch;
        }
        else if(ch == '>')
        {
            flag = false;
            cout << ch;
        }
        else if(flag)
            cout << ch;
        else
        {
            if(ch == ' ')
            {
                printStack(sc);
                cout << ch;
            }
            else
                sc.push(ch);
        }
    }

    printStack(sc);
    cout << "\n";
    
    return 0;
}