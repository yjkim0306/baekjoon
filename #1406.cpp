// 에디터
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m;
    string str = "";

    stack<char> left;
    stack<char> right;

    cin >> str;

    for(int i = 0; i < str.size(); i++) left.push(str[i]);

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        char command, input;
        cin >> command;

        if(command == 'L')
        {
            if(!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if(command == 'D')
        {
            if(!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if(command == 'B')
        {
            if(!left.empty()) left.pop();
        }
        else if(command == 'P')
        {
            cin >> input;
            left.push(input);
        }
    }

    while(!left.empty())
    {
        right.push(left.top());
        left.pop();
    }

    while(!right.empty())
    {
        cout << right.top();
        right.pop();
    }

    return 0;
}