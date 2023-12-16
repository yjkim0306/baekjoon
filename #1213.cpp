// 팰린드롬 만들기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int alphabet[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++)
        alphabet[str[i] - 'A']++;
    
    int err = 0, mid_index = -1;

    for(int i = 0; i < 26; i++)
    {
        if(alphabet[i] > 0)
        {
            if(alphabet[i] % 2 == 1)
            {
                mid_index = i;
                alphabet[i]--;
                err++;
            }
        }
    }

    if(err > 1)
        cout << "I'm Sorry Hansoo\n";
    else
    {
        string ans = "", temp = "";
        for(int i = 0; i < 26; i++)
        {
            if(alphabet[i] > 0)
            {
                for(int j = 0; j < alphabet[i] / 2; j++)
                    ans += i + 'A';
            }
        }
        temp = ans;
        reverse(temp.begin(), temp.end());
        if(mid_index != -1)
            ans += mid_index + 'A';
        ans += temp;
        cout << ans << "\n";
    }
    
    return 0;
}