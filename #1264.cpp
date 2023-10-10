// 모음의 개수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1)
    {
        string str;
        int cnt = 0;
        getline(cin, str);
        if(str[0] == '#')
            break;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}