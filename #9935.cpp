// 문자열 폭발
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, explode;
    string temp = "";

    cin >> str >> explode;
    int str_len = str.length();
    int explode_len = explode.length();

    for(int i = 0; i < str.length(); i++)
    {
        temp += str[i];
        if(temp.length() >= explode_len)
        {
            bool flag = true;
            for(int j = 0; j < explode_len; j++)
            {
                if(temp[temp.length() - explode_len + j] != explode[j])
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
                temp.erase(temp.end() - explode_len, temp.end());
        }
    }

    if(temp.empty())
        cout << "FRULA\n";
    else
        cout << temp << "\n";

    return 0;
}