// 네 수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;

    str1.append(str2);
    str3.append(str4);

    cout << stoll(str1) + stoll(str3) << "\n";

    return 0;
}