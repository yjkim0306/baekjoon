// 문서 검색
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    string str, input;
    getline(cin, str);
    getline(cin, input);

    for(int i = 0; i < str.length(); i++)
    {
        bool flag = true;
        for(int j = 0; j < input.length(); j++)
        {
            if(str[i + j] != input[j])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cnt++;
            i += input.length() - 1;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}