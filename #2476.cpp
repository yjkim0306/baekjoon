// 주사위 게임
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b && b == c)
            ans = max(ans, 10000 + a * 1000);
        else if(a == b && b != c)
            ans = max(ans, 1000 + a * 100);
        else if(a == c && a != b)
            ans = max(ans, 1000 + a * 100);
        else if(b == c && a != c)
            ans = max(ans, 1000 + b * 100);
        else 
            ans = max(ans, max(max(a, b), c) * 100);
    }

    cout << ans << "\n";
    
    return 0;
}