// 수리공 항승
#include <iostream>
#include <algorithm>
using namespace std;

int location[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l, ans = 0;
    cin >> n >> l;

    for(int i = 0; i < n; i++)
        cin >> location[i];
    
    sort(location, location + n);

    int start = location[0];

    for(int i = 1; i < n; i++)
    {
        if(l <= location[i] - start)
        {
            ans++;
            start = location[i];
        }
    }

    cout << ans + 1 << "\n";
    
    return 0;
}