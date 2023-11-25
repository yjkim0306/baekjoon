// 수 묶기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0; 
    vector<int> p, m;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if(c > 0)
            p.push_back(c);
        else
            m.push_back(c);
    }
    sort(p.begin(), p.end(), greater<int>());
    sort(m.begin(), m.end());
    
    if(p.size() % 2 != 0)
        ans += p[p.size() - 1];
    for(int i = 0; i < (int)p.size() - 1;)
    {
        if(p[i + 1] == 1)
            ans += p[i] + p[i + 1];
        else if(p[i + 1] > 0)
            ans += p[i] * p[i + 1];
        i += 2;
    }

    if(m.size() % 2 != 0)
        ans += m[m.size() - 1];
    for(int i = 0; i < (int)m.size() - 1; i++)
        ans += m[i] * m[i + 1];

    cout << ans << "\n";

    return 0;
}