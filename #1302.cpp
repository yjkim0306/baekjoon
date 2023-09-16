// 베스트셀러
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<string, int> m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 0;
    cin >> n;
    while(n--)
    {
        string input;
        cin >> input;
        m[input]++;
    }

    for(auto i : m)
        cnt = max(cnt, i.second);
    for(auto i : m)
    {
        if(i.second == cnt)
        {
            cout << i.first << "\n";
            return 0;
        }
    }
    return 0;
}