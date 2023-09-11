// 방학 숙제
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, l;
    cin >> l >> a >> b >> c >> d;

    int ans1 = a / c;
    a %= c;
    if(a > 0)
        ans1++;

    int ans2 = b / d;
    b %= d;
    if(b > 0)
        ans2++;
    
    cout << l - max(ans1, ans2) << "\n";

    return 0;
}