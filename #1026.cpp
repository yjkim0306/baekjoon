// 보물
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int n, input, res = 0;
    vector<int> a, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        b.push_back(input);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < n; i++)
    {
        res += a[i] * b[i];
    }
    cout << res << "\n";
    
    return 0;
}