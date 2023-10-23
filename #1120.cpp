// 문자열
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;

    int ans = 987654321;
    for(int i = 0; i <= b.size() - a.size(); i++)
    {
        int cnt = 0;
        for(int j = 0; j < a.size(); j++)
        {
            if(a[j] != b[j + i])
                cnt++;
        }
        ans = min(ans, cnt);
    }
    
    cout << ans << "\n";

    return 0;
}