// 사과
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    cin >> n;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        ans += b % a;
    }

    cout << ans << "\n";
    
    return 0;
}