// 분산처리
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b, res = 1;
        cin >> a >> b;
        for(int j = 0; j < b; j++)
        {
            res = (res * a) % 10;
        }
        if(res == 0) cout << 10 << "\n";
        else cout << res << "\n";
    }

    return 0;
}