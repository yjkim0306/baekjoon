// KMP는 왜 KMP일까?
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, res = "";
    cin >> str;
    res += str[0];

    for(int i = 1; i < str.length(); i++)
    {
        if(str[i] == '-')
            res += str[i + 1];
    }

    cout << res << "\n";
    
    return 0;
}