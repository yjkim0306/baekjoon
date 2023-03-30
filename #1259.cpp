// 팰린드롬수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1)
    {
        string ans = "yes";
        string str;
        cin >> str;
        if(str == "0") break;
        int n = str.length();
        for(int i = 0; i < n/2; i++)
        {
            if(str[i] != str[n-i-1]) ans = "no";
        }
        cout << ans << "\n";
    }

    return 0;
}