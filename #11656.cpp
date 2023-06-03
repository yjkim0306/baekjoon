// 접미사 배열
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    string ans[1000];
    cin >> str;

    for(int i = 0; i < str.size(); i++)
        ans[i] = str.substr(i, str.size());
    sort(ans, ans + str.size());

    for(int i = 0; i < str.size(); i++)
        cout << ans[i] << "\n";

    return 0;
}