// 암호 만들기 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int l, c;
vector<char> v;
bool visited[15];

void func(int idx, string str)
{
    if(idx == l)
    {
        int consonant = 0, vowel = 0;
        for(int i = 0; i < l; i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
                continue;
            }
            else consonant++;
        }

        if(consonant >= 2 && vowel >= 1) cout << str << "\n";

        return;
    }
    
    for(int i = 0; i < c; i++)
    {
        if(!visited[i])
        {
            if(!str.empty())
            {
                if(str.back() > v[i]) continue;
            }
            
            visited[i] = true;
            str.push_back(v[i]);
            func(idx + 1, str);
            str.pop_back();
            visited[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> l >> c;
    for(int i = 0; i < c; i++)
    {
        char input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    
    func(0, "");

    return 0;
}