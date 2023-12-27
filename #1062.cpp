// 가르침
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int n, k, ans;
bool alphabet[26];
vector<string> v;

int readNum()
{
    bool read;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        read = true;
        string str = v[i];
        for(int j = 0; j < str.length(); j++)
        {
            if(!alphabet[str[j] - 'a'])
            {
                read = false;
                break;
            }
        }
        if(read)
            cnt++;
    }

    return cnt;
}

void dfs(int idx, int cnt)
{
    if(cnt == k)
    {
        ans = max(ans, readNum());
        return;
    }

    for(int i = idx; i < 26; i++)
    {
        if(alphabet[i])
            continue;
        alphabet[i] = true;
        dfs(i, cnt + 1);
        alphabet[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        v.push_back(input);
    }

    if(k < 5)
    {
        cout << "0\n";
        return 0;
    }

    alphabet['a' - 'a'] = true;
    alphabet['n' - 'a'] = true;
    alphabet['t' - 'a'] = true;
    alphabet['i' - 'a'] = true;
    alphabet['c' - 'a'] = true;
    k -= 5;

    dfs(0, 0);
    cout << ans << "\n";
    
    return 0;
}