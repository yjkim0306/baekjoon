// !밀비 급일
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1)
    {
        string str;
        getline(cin, str);

        if(str == "END")
            break;
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }
    return 0;
}