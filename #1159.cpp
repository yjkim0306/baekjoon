// 농구 경기
#include <iostream>
using namespace std;

int alphabet[26];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while(n--)
    {
        string str;
        cin >> str;
        alphabet[str[0] - 97]++;
    }

    bool flag = false;
    for(int i = 0; i < 26; i++)
    {
        if(alphabet[i] >= 5)
        {
            cout << char(i + 97);
            flag = true;
        }
    }

    if(!flag)
        cout << "PREDAJA\n";
        
    return 0;
}