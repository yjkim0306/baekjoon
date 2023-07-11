// ROT13
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if(c >= 'a' && c <= 'z')
        {
            if(c - 'a' < 13)
                c += 13;
            else
                c -= 13;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            if(c - 'A' < 13)
                c += 13;
            else
                c -= 13;
        }
        str[i] = c;
    }

    cout << str << "\n";

    return 0;
}