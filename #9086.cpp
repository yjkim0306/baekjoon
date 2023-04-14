// 문자열
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;
        cout << str[0] << str[str.length() - 1] << "\n";
    }

    return 0;
}