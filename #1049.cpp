// 기타줄
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, a, b, pack = 1000, sep = 1000;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        pack = min(pack, a);
        sep = min(sep, b);
    }

    cout << min((n / 6 + 1) * pack, min(n / 6 * pack + n % 6 * sep, n * sep)) << "\n";
    
    return 0;
}