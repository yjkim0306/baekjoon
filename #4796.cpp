// 캠핑
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l, p, v, i = 1;
    while(1)
    {   
        cin >> l >> p >> v;
        if(l == 0 && p == 0 && v == 0)
            break;
        cout << "Case " << i << ": " << l * (v / p) + min(v % p, l) << "\n";
        i++;
    }

    return 0;
}