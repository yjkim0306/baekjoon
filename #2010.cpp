// 플러그
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int res = 0;
    while(n--)
    {
        int input;
        cin >> input;
        res += input - 1;
    }

    cout << res + 1 << "\n";

    return 0;
}