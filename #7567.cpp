// 그릇
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int res = 10;
    cin >> str;

    for(int i = 0; i < str.size(); i++)
    {
        if((str[i] == ')' && str[i + 1] == '(') || (str[i] == '(' && str[i + 1] == ')') && i + 1 < str.size())
            res += 10;
        else if((str[i] == ')' && str[i + 1] == ')') || (str[i] == '(' && str[i + 1] == '(') && i + 1 < str.size())
            res += 5;
    }

    cout << res << "\n";
    
    return 0;
}