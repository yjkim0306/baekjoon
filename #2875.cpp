// 대회 or 인턴
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k, max = 0;
    cin >> n >> m >> k;

    for(int i = 0; i <= k; i++)
    {
        if(max < min((n - i) / 2, m - (k - i)))
            max = min((n - i) / 2, m - (k - i));
    }

    cout << max << "\n";

    return 0;
}