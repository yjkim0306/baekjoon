// 잃어버린 괄호
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int res = 0;
    string str, num;
    cin >> str;
    bool isMinus = false;

    for(int i = 0; i <= str.length(); i++)
    {
        if(str[i] == '-' || str[i] == '+' || i == str.length())
        {
            if(isMinus)
            {
                res -= stoi(num);
                num = "";
            }
            else
            {
                res += stoi(num);
                num = "";
            }
        }
        if(str[i] == '-') isMinus = true;
        else num += str[i];
    }

    cout << res << "\n";

    return 0;
}